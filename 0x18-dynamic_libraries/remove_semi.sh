#!/bin/bash

# Input and output file names
input_file="main.h"
output_file="main_no_semicolons.h"

# Remove semicolons at the end of each line
sed 's/;$//' "$input_file" > "$output_file"

echo "Semicolons removed and saved to $output_file"

