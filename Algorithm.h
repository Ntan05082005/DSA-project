
#ifndef HEADER_FILE
#define HEADER_FILE

#include <iostream>
#include <cstdlib>
using namespace std;
// Timer functions


// Bubble Sort and variations
void basicBubbleSortCount(int *arr, int n, long long &comparisonCount, double& time);
void basicBubbleSort(int *arr, int n, double& time);

void optimizedBubbleSortCount(int *arr, int n, long long &comparisonCount, double& time);
void optimizedBubbleSort(int *arr, int n, double& time);

void recursiveBubbleSortCount(int arr[], int n, long long &comparisonCount);
void recursiveBubbleSort(int arr[], int n);

// Heap Sort and variations
void basicHeapifyCount(int *arr, int n, int i, long long &comparisonCount);
void basicHeapify(int *arr, int n, int i);
void basicHeapSortCount(int *arr, int n, long long &comparisonCount, double& time);
void basicHeapSort(int *arr, int n, double& time);

void floydHeapifyCount(int arr[], int n, int i, long long &comparisonCount);
void floydHeapSortCount(int *arr, int n, double& time);
void floydHeapify(int arr[], int n, int i);
void floydHeapSort(int *arr, int n, double& time);

// Shaker Sort
void basicShakerSortCount(int *arr, int n, long long &comparisonCount, double& time);
void basicShakerSort(int *arr, int n, double& time);

//Counting Sort
void CountingSortCount(int arr[], int n, long long& comparisons, double& time);
void CountingSort(int arr[], int n, double& time);

//Radix Sort
void RadixSort(int arr[], int n, double& time);
void RadixSortCount(int arr[], int n, long long& comparisons, double& time);

// Selection Sort
void selectionSort(int* arr, int n, double& time);
void selectionSortCount(int* arr, int n, long long& comp, double& time);

// Merge Sort
void mergeSort(int* arr, int n, double& time);
void mergeSortCount(int* arr, int n, long long& comp, double& time);

// Flash Sort
void flashSort(int arr[], int n, double& time);
void flashSortCount(int arr[], int n, long long& comp, double& time);

// Insertion Sort
void insertionSort(int* arr, int n, double& time);
void insertionSortCount(int* arr, int n, long long& comp, double& time);

// Shell Sort
void shellSort(int* arr, int n, double& time);
void shellSortCount(int* arr, int n, long long& comp, double& time);

//Quick Sort
int partition(int* a, int n, int left, int right);
void QuickSort(int* a, int n, int l, int r, double& time);
int sortFirstMiddleLast(int arr[], int first, int last);
int partition(int arr[], int first, int last);
int partitionCount(int arr[], int first, int last, long long& comp);
void quicksortCount(int arr[], int first, int last, long long& comp);
void quickSortCount(int arr[], int n, long long& comp, double& time);

#endif

