#!/bin/bash

# Compile all .c files into .o files
gcc -c *.c

# Archive .o files into a static library
ar rcs liball.a *.o

# Clean up .o files
rm *.o

echo "Static library liball.a created from .c files."
