/** lab08functs.c
 * ===========================================================
 * Name: CS220
 * Section: n/a
 * Project: Lab 8 - Merge Sort
 * ===========================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sortfuncts.h"

/**
 * @brief Given two sorted sublists array[lBound..mid] and array[mid+1..rBound],
 * merge them into a single sorted list in array[lBound..rBound]
 * @param array - the array to sort
 * @param lBound - the lowest index of the first sublist
 * @param mid - the highest index of the first sublist
 * @param rBound - the highest index of the second sublist
 */
void merge(int numbers[], int lBound, int mid, int rBound) {

}

// mergeSort
void mergeSort(int numbers[], int lBound, int rBound) {

}

// fills an array of size n with random values
void fillArray(int array[]) {
    // fill array with random ints from 0 to 99
    for (int i = 0; i < N; i++) {
        array[i] = (int)rand() % 100;
    }
}

// printArray
void printArray(int nums[]) {
    for (int i = 0; i < N; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}