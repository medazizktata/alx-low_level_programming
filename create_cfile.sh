#!/bin/bash

# Check if the number of arguments is correct
if [ "$#" -ne 3 ]; then
	    echo "Usage: $0 <number> <function_declaration> <description>"
	        exit 1
fi

number=$1
function_declaration=$2
description=$3

# Extract function name
function_name=$(echo "$function_declaration" | awk -F'[ (]' '{print $2}' | sed 's/^**//')

# Define data types
declare -A data_types
data_types["int"]="integer"
data_types["char"]="character"
data_types["float"]="floating-point"
data_types["double"]="double precision floating-point"
data_types["void"]="void"
data_types["long"]="long integer"
data_types["short"]="short integer"
data_types["unsigned"]="unsigned integer"

# Extract return type and transform if needed
return_type=$(echo "$function_declaration" | awk -F'[* ]*' '{print $1}')
return_type=$(echo "${data_types[$return_type]}" || echo "$return_type")

# Create C file
file_name="$number-$function_name.c"
touch "$file_name"

# Write content to C file
echo "#include \"main.h\"" >> "$file_name"
echo "/**" >> "$file_name"
echo "* $function_name - block" >> "$file_name"
echo "* Description: $description" >> "$file_name"

# Extract parameters and remove data type names
parameter_count=1
for param in $(echo "$function_declaration" | grep -oP '\b\w+\b'); do
	    parameter_name=$(echo "$param" | awk -F'[* ]' '{print $NF}')
				        if [[ ! ${data_types[$parameter_name]} && "$parameter_name" != "$function_name" ]]; then
						        echo "* @$parameter_name: parameter$parameter_count" >> "$file_name"
							        ((parameter_count++))
								    fi
							    done



				    # Write return type to file
				    echo "* Return: $return_type" >> "$file_name"
				    echo "*/" >> "$file_name"

				    # Write function declaration to file
				    echo "$function_declaration {" >> "$file_name"
				    echo "}" >> "$file_name"

				    echo "C file $file_name created successfully!"
