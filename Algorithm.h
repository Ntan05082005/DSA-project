
#ifndef HEADER_FILE
#define HEADER_FILE

#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
// Timer functions


// Bubble Sort and variations
void basicBubbleSortCount(int *arr, int n, long long &comparisonCount, double& time);
void basicBubbleSort(int *arr, int n, double& time);

void optimizedBubbleSortCount(int *arr, int n, long long &comparisonCount, double& time);
void optimizedBubbleSort(int *arr, int n, double& time);

void recursiveBubbleSortCount(int arr[], int n, long long &comparisonCount);
void recursiveBubbleSort(int arr[], int n);
void TimeRecursiveBubbleSortCount(int arr[], int n, long long& comparisonCount,double& time);
void TimeRecursiveBubbleSort(int arr[], int n, double& time);
void brickSort(int arr[], int n, double& time);
void brickSortCount(int arr[], int n, long long& comparisonsCount, double& time);

// Heap Sort and variations
void basicHeapifyCount(int *arr, int n, int i, long long &comparisonCount);
void basicHeapify(int *arr, int n, int i);
void basicHeapSortCount(int *arr, int n, long long &comparisonCount, double& time);
void basicHeapSort(int *arr, int n, double& time);

void floydHeapifyCount(int arr[], int n, int i, long long& comparisonCount);
void floydHeapSortCount(int arr[], int n, long long& comparisonCount, double& time);
void floydHeapify(int arr[], int n, int i);
void floydHeapSort(int arr[], int n, double& time);

// Shaker Sort
void basicShakerSortCount(int *arr, int n, long long &comparisonCount, double& time);
void basicShakerSort(int *arr, int n, double& time);

//Counting Sort
void CountingSortCount(int arr[], int n, long long& comparisons, double& time);
void CountingSort(int arr[], int n, double& time);
void NegativeNumCountingSort(int arr[], int size, double& time);
void NegativeNumCountingSortCount(int arr[], int size, long long& comp, double& time);

//Radix Sort
void RadixSort(int arr[], int n, double& time);
void RadixSortCount(int arr[], int n, long long& comparisons, double& time);
void LSDradixSortCount(int arr[], int n, long long& comp, double& time);
void LSDradixSort(int arr[], int n, double& time);

// Selection Sort
void selectionSort(int* arr, int n, double& time);
void selectionSortCount(int* arr, int n, long long& comp, double& time);
int findMinIndexCount(int arr[], int start, int end, long long& comparison);
int findMinIndex(int arr[], int start, int end);
int findMinIndexCount(int arr[], int start, int end, long long& comparison);
void recursiveSelectionSort(int arr[], int start, int end);
void recursiveSelectionSortCount(int arr[], int start, int end, long long& comparison);
void TimeRecursiveSelectionSortCount(int arr[], int n, long long& comp, double& time);
void TimeRecursiveSelectionSort(int arr[], int n, double& time);

// Merge Sort
void mergeSort(int* arr, int n, double& time);
void mergeSortCount(int* arr, int n, long long& comp, double& time);
void merge(int arr[], int left, int mid, int right);
void inplaceMergeSort(int arr[], int left, int right);
void inplaceMergeSortCount(int arr[], int left, int right, long long& comparison);
void TimeinplaceMergeSortCount(int arr[], int n, long long& comparison, double& time);
void TimeInPlaceMergeSort(int arr[], int n, double& time);


// Flash Sort
void flashSort(int arr[], int n, double& time);
void flashSortCount(int arr[], int n, long long& comp, double& time);

// Insertion Sort
void insertionSort(int* arr, int n, double& time);
void insertionSortCount(int* arr, int n, long long& comp, double& time);
int binarySearch(int a[], int item, int low, int high);
void BinaryinsertionSort(int a[], int n, double& time);
void binaryInsertionSortCount(int arr[], int n, long long& comp, double& time);
int binarySearchcount(int arr[], int item, int low, int high, long long& comp);

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
void basicThreeWayquicksort(int a[], int l, int r, double& time);
void basicThreeWaypartition(int a[], int l, int r, int& i, int& j);
void ThreeWayquicksortCount(int a[], int n, long long& comparisons, double& time);
void basicThreeWayquicksortCount(int a[], int l, int r, long long& comparisons);
void ThreeWaypartitionCount(int a[], int l, int r, int& i, int& j, long long& comparisons);


#endif

