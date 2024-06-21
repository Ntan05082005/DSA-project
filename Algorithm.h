#ifndef HEADER_FILE
#define HEADER_FILE

#include <iostream>
#include <ctime>
#include <cstdlib>

// Timer functions
clock_t startTimer();
double stopTimer(clock_t start);

// Bubble Sort Variations
void basicBubbleSort(int *arr, int n, long long &comparisonCount);
void basicBubbleSort(int *arr, int n);
void optimizedBubbleSort(int *arr, int n, long long &comparisonCount);
void optimizedBubbleSort(int *arr, int n);
void recursiveBubbleSort(int *arr, int n, long long &comparisonCount);
void recursiveBubbleSort(int *arr, int n);

// Cocktail Sort Variations
void cocktailSort(int *arr, int n, long long &comparisonCount);
void cocktailSort(int *arr, int n);
void recursiveCocktailSort(int *arr, int n, long long &comparisonCount);
void recursiveCocktailSort(int *arr, int n);

// Heap Sort Variations
void basicHeapify(int *arr, int n, int i, long long *comparisonCount = nullptr);
void basicHeapSort(int *arr, int n, long long &comparisonCount);
void basicHeapSort(int *arr, int n);
void floydHeapify(int *arr, int n, int i, long long *comparisonCount = nullptr);
void floydHeapSort(int *arr, int n, long long &comparisonCount);
void floydHeapSort(int *arr, int n);

// Shaker Sort
void shakerSort(int *arr, int n, long long &comparisonCount);
void shakerSort(int *arr, int n);

#endif
