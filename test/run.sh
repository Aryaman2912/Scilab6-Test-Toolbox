# Compile the main and trans functions
gcc -o main main.c
gcc -o trans trans.c

# Execute main function
./main

# Remove all extra files that have been created for the program
rm input.txt
rm output.txt
rm ./main
rm ./trans