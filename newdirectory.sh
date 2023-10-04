#!/bin/bash
if [ $# -eq 0 ]; then
	echo "Usage: $0 <directory_name>"
	exit 1
fi
mkdir "$1"
cd "$1"
echo "This is a README file for $1 powered by ALX" > README.md
echo "Directory '$1' created, README file added"
cd "$1"
