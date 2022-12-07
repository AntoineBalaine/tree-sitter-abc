# Tree-Sitter ABC

A tree-sitter parser for [ABC music notation](abcnotation.com/)

![abcnvim](./ABCNvim.png?raw=true "abcnvim")

This project is a port of the [pest grammar](https://github.com/AntoineBalaine/abc_pest_grammar) that I wrote for abc. 

A work in progress, for now, full of little errors here and there.

## known issues
- Does not parse stylesheet directions correctly, especially in the file header
- Does not parse inline information fields correctly, especially when there's several of them concatenated

