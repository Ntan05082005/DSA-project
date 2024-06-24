
#ifndef HEADER_FILE
#define HEADER_FILE

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
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

// Select Sort
void selectionSort(int* arr, int n);
void selectionSortCount(int* arr, int n, long long& comp);

// Merge Sort
void mergeSort(int* arr, int n);
void mergeSortCount(int* arr, int n, long long& comp);

// Flash Sort
void flashSort(int arr[], int n);
void flashSortCount(int arr[], int n, long long& comp);

// Insertion Sort
void insertionSort(int* arr, int n);
void insertionSortCount(int* arr, int n, long long& comp);

// Shell Sort
void shellSort(int* arr, int n);
void shellSortCount(int* arr, int n, long long& comp);

//Quick Sort
int partition(int* a, int n, int left, int right);
void QuickSort(int* a, int n, int l, int r);
int sortFirstMiddleLast(int arr[], int first, int last);
int partition(int arr[], int first, int last);
int partitionCount(int arr[], int first, int last, long long& comp);
void quicksortCount(int arr[], int first, int last, long long& comp);
void quickSortCount(int arr[], int n, long long& comp);

#endif

