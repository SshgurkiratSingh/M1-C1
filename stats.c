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
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Gurkirat Singh
 * @date 25/02/2023
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

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
    for (int i = 0; i < SIZE; i++)
    {
        sum += a[i];
    }
    return sum / SIZE;
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
unsigned char sort_array(unsigned char *arr, int size)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (*(arr + i) > *(arr + j))
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
    return 0;
}
unsigned char find_median(){

}
void main()
{

    unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                                114, 88, 45, 76, 123, 87, 25, 23,
                                200, 122, 150, 90, 92, 87, 177, 244,
                                201, 6, 12, 60, 8, 2, 5, 67,
                                7, 87, 250, 230, 99, 3, 100, 90};

    /* Other Variable Declarations Go Here */
    unsigned char maximum, minimum, median;
    double mean;
    /* Statistics and Printing Functions Go Here */

    mean = find_mean(test, SIZE);
    maximum = find_maximum(test, SIZE);
    minimum = find_minimum(test, SIZE);
    printf("\nPrinting The Given Array :\n");
    print_array(test, SIZE);
    printf("\nPrinting The Sorted Array :\n");
    sort_array(test, SIZE);
}
/* Add other Implementation File Code Here */
