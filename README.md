Statistical Functions for Array of Data
This is a C program that implements several statistical functions to analyze and manipulate an array of unsigned char data. The functions implemented include:

- Calculating the mean
- Calculating the median
- Finding the maximum value of the array
- Finding the minimum value of the array
- Sorting the array in ascending order
- Printing the contents of the array to the console

Author
This program was written by Gurkirat Singh on February 25, 2023.

Usage
To use this program, simply compile and run the stats.c file using a C compiler such as gcc.

bash
Copy code
gcc stats.c -o stats
./stats
The program defines a data set of size 40 as an array of unsigned char values. You can modify this data set by changing the values in the test array in the main() function.

Functions
find_mean(unsigned char a[], int size)
This function takes an array of unsigned char values and its size as input and returns the mean of the values in the array.

find_median(unsigned char a[], int size)
This function takes an array of unsigned char values and its size as input and returns the median of the values in the array.

find_maximum(unsigned char a[], int size)
This function takes an array of unsigned char values and its size as input and returns the maximum value in the array.

find_minimum(unsigned char a[], int size)
This function takes an array of unsigned char values and its size as input and returns the minimum value in the array.

sort_array(unsigned char *arr, int size)
This function takes an array of unsigned char values and its size as input and sorts the array in ascending order.

print_array(unsigned char *arr, int size)
This function takes an array of unsigned char values and its size as input and prints the contents of the array to the console.

print_statistic(unsigned char min, unsigned char max, float mean, float med)
This function takes the minimum value, maximum value, mean, and median of an array of unsigned char values as input and prints these statistics to the console.
