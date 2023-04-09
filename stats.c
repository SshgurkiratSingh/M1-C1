/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation of statistical functions for an array of data
This file contains the implementation of several functions that can be used
to analyze and manipulate an array of unsigned char data. The implemented
functions include calculating the mean, median, maximum and minimum values
of the array, as well as sorting the array in ascending order and printing
its contents to the console.
 *
 * @author Gurkirat Singh
 * @date 25/02/2023
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
void print_statistic(unsigned char min, unsigned char max, float mean, float med)
{
    printf("\nThe minimum and maximum value from the array is %d and %d respectively\n", min, max);
    printf("The mean of element of array is %f while the medianis %f\t", mean, med);
}
int print_array(unsigned char *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\t %d", *(arr + i));
    }
    return 0;
}
float find_mean(unsigned char a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum / size;
}
unsigned char find_maximum(unsigned char a[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
unsigned char find_minimum(unsigned char a[], int size)
{
    int min = 255;
    for (int i = 0; i < size; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}
void sort_array(unsigned char *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + i) < *(arr + j))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + i);
                *(arr + i) = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("\t %d", *(arr + i));
    }
}
float find_median(unsigned char a[], int size)
{

    if (size % 2 == 0)
    {
        return ((a[size / 2 - 1] + a[size / 2]) / 2.0);
    }
    return (a[size / 2]);
}
void main()
{

    unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                                114, 88, 45, 76, 123, 87, 25, 23,
                                200, 122, 150, 90, 92, 87, 177, 244,
                                201, 6, 12, 60, 8, 2, 5, 67,
                                7, 87, 250, 230, 99, 3, 100, 90};

    /* Other Variable Declarations Go Here */
    unsigned char maximum, minimum;
    double mean, median = 0;
    /* Statistics and Printing Functions Go Here */

    mean = find_mean(test, SIZE);
    maximum = find_maximum(test, SIZE);
    minimum = find_minimum(test, SIZE);
    printf("\nPrinting The Given Array :\n");
    print_array(test, SIZE);
    printf("\nPrinting The Sorted Array :\n");
    sort_array(test, SIZE);
    median = find_median(test, SIZE);
    print_statistic(minimum, maximum, mean, median);
}
