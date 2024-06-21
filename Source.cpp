#include "Algorithm.h"
#include "Data.h"

// Main function
int main() {
    const int n = 10000;
    int arr[n];
    
    // Initialize array with random values
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;
    }

    long long basicBubbleComparisons = 0;
    long long basicHeapComparisons = 0;
    long long basicShakerComparisons = 0;

    clock_t start;

    // Basic Bubble Sort with comparisons
    int arr1[n];
    copy(arr, arr + n, arr1);
    start = startTimer();
    basicBubbleSortCount(arr1, n, basicBubbleComparisons);
    double basicBubbleTime = stopTimer(start);

    // Basic Bubble Sort without comparisons
    int arr2[n];
    copy(arr, arr + n, arr2);
    start = startTimer();
    basicBubbleSort(arr2, n);
    double basicBubbleTimeNoComp = stopTimer(start);

    // Basic Heap Sort with comparisons
    int arr3[n];
    copy(arr, arr + n, arr3);
    start = startTimer();
    basicHeapSortCount(arr3, n, basicHeapComparisons);
    double basicHeapTime = stopTimer(start);

    // Basic Heap Sort without comparisons
    int arr4[n];
    copy(arr, arr + n, arr4);
    start = startTimer();
    basicHeapSort(arr4, n);
    double basicHeapTimeNoComp = stopTimer(start);

    // Basic Shaker Sort with comparisons
    int arr5[n];
    copy(arr, arr + n, arr5);
    start = startTimer();
    basicShakerSortCount(arr5, n, basicShakerComparisons);
    double basicShakerTime = stopTimer(start);

    // Basic Shaker Sort without comparisons
    int arr6[n];
    copy(arr, arr + n, arr6);
    start = startTimer();
    basicShakerSort(arr6, n);
    double basicShakerTimeNoComp = stopTimer(start);

    // Output results
    cout << "Basic Bubble Sort with comparisons: " << basicBubbleTime << " seconds, " << basicBubbleComparisons << " comparisons\n";
    cout << "Basic Bubble Sort without comparisons: " << basicBubbleTimeNoComp << " seconds\n";
    cout << "Basic Heap Sort with comparisons: " << basicHeapTime << " seconds, " << basicHeapComparisons << " comparisons\n";
    cout << "Basic Heap Sort without comparisons: " << basicHeapTimeNoComp << " seconds\n";
    cout << "Basic Shaker Sort with comparisons: " << basicShakerTime << " seconds, " << basicShakerComparisons << " comparisons\n";
    cout << "Basic Shaker Sort without comparisons: " << basicShakerTimeNoComp << " seconds\n";

    return 0;
}