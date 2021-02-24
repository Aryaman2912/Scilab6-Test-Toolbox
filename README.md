This repository is a test toolbox for Scilab. It requires "thirdparty" directory which can be downloaded as "external-library.zip" file from the page: https://scilab.in/fossee-scilab-toolbox. The "thirdparty" directory contains compiled library for a simple "multiplication" function written in C. After copying the "thirdparty" directory to the toolbox directory, on the scilab console run "exec builder.sce" to build the toolbox and then run "exec loader.sce" to load the toolbox.  Type "help" in the scilab console and browse through the help content of "test_toolbox". The external-library.zip file also contains separate instructions to work with MinGW on Windows OS.

This toolbox overall demonstrates
1. How to add a function defined in C in scilab
2. How to add a function defined in Scilab in Scilab
3. How to write help for the added functions
4. How to create a toolbox out of the above functions.

Instructions to build, compile and execute the transpose function.
1. Open Scilab console and go to Scilab6-Test-Toolbox repository directory
2. Execute "exec builder.sce" to build the toolbox.
3. Execute "exec loader.sce" to load the toolbox into Scilab.
4. execute "help" and go to "test_toolbox" to read about how the transpose function works.

Syntax:

```
matrix = [1,2,3;4,5,6;7,8,9]
transpose_matrix = transpose(matrix)
```