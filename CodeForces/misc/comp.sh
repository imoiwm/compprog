#!/bin/bash

# Boilerplate to start file
BOILERPLATE="#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {"

# Check if filename arg is provided
if [ -z "$1" ]; then
  echo "Usage: $0 <filename.cpp>"
  exit 1
fi

# Define the folder where the file will be created
  FOLDER="."
  FILE_PATH="$FOLDER/$1"

# Create the directory if it doesn't exist
mkdir -p "$FOLDER"

if [ ! -s "$FILE_PATH" ]; then
  # Write the boilerplate content to the new file
  echo -e "$BOILERPLATE" > "$FILE_PATH"
  
  echo "Created new file w/ boilerplate: $FILE_PATH"
else
  echo "File already exists: $FILE_PATH"
fi

echo "Opening file: $FILE_PATH"
vim +8 +"normal G$" "$FILE_PATH"
