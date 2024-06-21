
#ifndef HEADER_FILE
#define HEADER_FILE

#include <iostream>
#include <ctime>
#include <cstdlib>

// Timer functions
clock_t startTimer();
double stopTimer(clock_t start);

// Bubble Sort Variations
void basicBubbleSortCount(int *arr, int n, long long &comparisonCount);
void basicBubbleSort(int *arr, int n);

// Heap Sort Variations
void basicHeapifyCount(int *arr, int n, int i, long long &comparisonCount);
void basicHeapify(int *arr, int n, int i);
void basicHeapSortCount(int *arr, int n, long long &comparisonCount);
void basicHeapSort(int *arr, int n);

// Shaker Sort
void basicShakerSortCount(int *arr, int n, long long &comparisonCount);
void basicShakerSort(int *arr, int n);

//Counting Sort
void CountingSortCount(int arr[], int n, long long& comparisons);
void CountingSort(int arr[], int n);

//Radix Sort
void RadixSort(int arr[], int n);
void RadixSortCount(int arr[], int n, long long& comparisons);
#endif

