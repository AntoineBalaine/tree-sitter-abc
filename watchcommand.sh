#!/bin/bash

while inotifywait -e close_write $1 $2; do    
  tree-sitter generate; tree-sitter parser $1;
done


