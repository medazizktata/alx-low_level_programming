#!/bin/bash
line_number = 0
./remove_semi.sh
while IFS= read -r line;
do
	./create_cfile.sh "${line_number}" "${line}" " "
	((line_number++))
done < "main_no_semicolons.h"
