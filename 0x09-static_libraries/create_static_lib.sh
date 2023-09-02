#!/bin/bash

# Get the list of all `.c` files in the current directory
c_files=$(ls *.c)

# Compile each `.c` file into an object file
for c_file in $c_files; do
  gcc -Wall -Werror -Wextra -pedantic -c $c_file
done

# Create the static library
ar -rc liball.a *.o

# Remove the object files
rm *.o
