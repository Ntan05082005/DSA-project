#include "Algorithm.h"
#include "Data.h"

// Main function
int main() {
    int n;
    int order;
    cout << "n: ";
    cin >> n;
    cout << "\nChon 0 de tao mang ngau nhien\nChon 1 de tao mang co thu tu\nChon 2 de tao mang co thu tu nguoc\nChon 3 de tao mang gan nhu co thu tu\n";
    cout << "Chon cach: ";
    cin >> order;

    int* arr = new int[n];

    GenerateData(arr, n, order);

    long long BubbleComparisons = 0;
    long long ShakerComparisons = 0;
    long long HeapComparisons = 0;
    long long CountingComparisons = 0;
    long long RadixComparisons = 0;
    long long SelectionComparisons = 0;
    long long QuickComparisons = 0;
    long long ShellComparisons = 0;
    long long MergeComparisons = 0;
    long long FlashComparisons = 0;
    long long InsertionComparisons = 0;

    double BubbleCountTime = 0.0;
    double BubbleTime = 0.0;
    double shakerCountTime = 0.0;
    double shakerTime = 0.0;
    double heapCountTime = 0.0;
    double heapTime = 0.0;
    double CountingCountTime = 0.0;
    double CountingTime = 0.0;
    double RadixCountTime = 0.0;
    double RadixTime = 0.0;
    double selectionCountTime = 0.0;
    double selectionTime = 0.0;
    double mergeCountTime = 0.0;
    double mergeTime = 0.0;
    double insertionCountTime = 0.0;
    double insertionTime = 0.0;
    double flashCountTime = 0.0;
    double flashTime = 0.0;
    double shellCountTime = 0.0;
    double shellTime = 0.0;
    double quickCountTime = 0.0;
    double quickTime = 0.0;

    // Bubble Sort with comparisons
    int* arr1 = new int[n];
    copy(arr, arr + n, arr1);
    basicBubbleSortCount(arr1, n, BubbleComparisons, BubbleCountTime);
    delete[] arr1;

    // Basic Bubble Sort without comparisons
    int* arr2 = new int[n];
    copy(arr, arr + n, arr2);
    basicBubbleSort(arr2, n, BubbleTime);
    delete[] arr2;

    // Shaker Sort with comparisons
    int* arr3 = new int[n];
    copy(arr, arr + n, arr3);
    basicShakerSortCount(arr3, n, ShakerComparisons,shakerCountTime);
    delete[] arr3;

    // Shaker Sort without comparisons
    int* arr4 = new int[n];
    copy(arr, arr + n, arr4);
    basicShakerSort(arr4, n,shakerTime);
    delete[] arr4;

    // Heap Sort with comparisons
    int* arr5 = new int[n];
    copy(arr, arr + n, arr5); 
    basicHeapSortCount(arr5, n, HeapComparisons,heapCountTime);
    delete[] arr5;

    // Heap Sort without comparisons
    int* arr6 = new int[n];
    copy(arr, arr + n, arr6);
    basicHeapSort(arr6, n,heapTime);
    delete[] arr6;

    // Counting Sort with comparisons
    int* arr7 = new int[n];
    copy(arr, arr + n, arr7);
    CountingSortCount(arr7, n, CountingComparisons,CountingCountTime);
    delete[] arr7;

    // Counting Sort without comparisons
    int* arr8 = new int[n];
    copy(arr, arr + n, arr8);
    CountingSort(arr8, n,CountingTime);
    delete[] arr8;

    // Radix Sort with comparisons
    int* arr9 = new int[n];
    copy(arr, arr + n, arr9);
    RadixSortCount(arr9, n, RadixComparisons,RadixCountTime);
    delete[] arr9;

    // Radix Sort without comparisons
    int* arr10 = new int[n];
    copy(arr, arr + n, arr10);
    RadixSort(arr10, n,RadixTime);
    delete[] arr10;

    // Selection Sort with comparisons
    int* arr11 = new int[n];
    copy(arr, arr + n, arr11);
    selectionSortCount(arr11, n, SelectionComparisons,selectionCountTime);
    delete[] arr11;

    // Selection Sort without comparisons
    int* arr12 = new int[n];
    copy(arr, arr + n, arr12);
    selectionSort(arr12, n,selectionTime);
    delete[] arr12;

    // Merge Sort with comparisons
    int* arr13 = new int[n];
    copy(arr, arr + n, arr13);
    mergeSortCount(arr13, n, MergeComparisons,mergeCountTime);
    delete[] arr13;

    
    // Merge Sort without comparisons
    int* arr14 = new int[n];
    copy(arr, arr + n, arr14);
    mergeSort(arr14, n,mergeTime);
    delete[] arr14;

    // Insertion Sort with comparisons
    int* arr15 = new int[n];
    copy(arr, arr + n, arr15);
    insertionSortCount(arr15, n, InsertionComparisons,insertionCountTime);
    delete[] arr15;

    // Insertion Sort without comparisons
    int* arr16 = new int[n];
    copy(arr, arr + n, arr16);
    insertionSort(arr16, n,insertionTime);
    delete[] arr16;

    // Flash Sort with comparisons
    int* arr17 = new int[n];
    copy(arr, arr + n, arr17);
    flashSortCount(arr17, n, FlashComparisons,flashCountTime);
    delete[] arr17;

    // Flash Sort without comparisons
    int* arr18 = new int[n];
    copy(arr, arr + n, arr18);
    flashSort(arr18, n,flashTime);
    delete[] arr18;

    
    // Shell Sort with comparisons
    int* arr19 = new int[n];
    copy(arr, arr + n, arr19);
    shellSortCount(arr19, n, ShellComparisons,shellCountTime);
    delete[] arr19;

    // Shell Sort without comparisons
    int* arr20 = new int[n];
    copy(arr, arr + n, arr20);
    shellSort(arr20, n,shellTime);
    delete[] arr20;

    // Quick Sort with comparisons
    int* arr21 = new int[n];
    copy(arr, arr + n, arr21);
    quickSortCount(arr21, n, QuickComparisons,quickCountTime);
    delete[] arr21;

    // Quick Sort without comparisons
    int* arr22 = new int[n];
    copy(arr, arr + n, arr22);
    QuickSort(arr22, n, 0, n - 1,quickTime);
    delete[] arr22;

    cout << "Bubble Sort with comparisons: " << BubbleCountTime << " seconds, comparisons: " << BubbleComparisons << endl;
    cout << "Bubble Sort without comparisons: " << BubbleTime << " seconds" << endl;

    cout << "Shaker Sort with comparisons: " << shakerCountTime << " seconds, comparisons: " << ShakerComparisons << endl;
    cout << "Shaker Sort without comparisons: " << shakerTime << " seconds" << endl;

    cout << "Heap Sort with comparisons: " << heapCountTime << " seconds, comparisons: " << HeapComparisons << endl;
    cout << "Heap Sort without comparisons: " << heapTime << " seconds" << endl;

    cout << "Counting Sort with comparisons: " << CountingCountTime << " seconds, comparisons: " << CountingComparisons << endl;
    cout << "Counting Sort without comparisons: " << CountingTime << " seconds" << endl;

    cout << "Radix Sort with comparisons: " << RadixCountTime << " seconds, comparisons: " << RadixComparisons << endl;
    cout << "Radix Sort without comparisons: " << RadixTime << " seconds" << endl;

    cout << "Selection Sort with comparisons: " << selectionCountTime << " seconds, comparisons: " << SelectionComparisons << endl;
    cout << "Selection Sort without comparisons: " << selectionTime << " seconds" << endl;

    cout << "Merge Sort with comparisons: " << mergeCountTime << " seconds, comparisons: " << MergeComparisons << endl;
    cout << "Merge Sort without comparisons: " << mergeTime << " seconds" << endl;

    cout << "Insertion Sort with comparisons: " << insertionCountTime << " seconds, comparisons: " << InsertionComparisons << endl;
    cout << "Insertion Sort without comparisons: " << insertionTime << " seconds" << endl;

    cout << "Flash Sort with comparisons: " << flashCountTime << " seconds, comparisons: " << FlashComparisons << endl;
    cout << "Flash Sort without comparisons: " << flashTime << " seconds" << endl;

    cout << "Shell Sort with comparisons: " << shellCountTime << " seconds, comparisons: " << ShellComparisons << endl;
    cout << "Shell Sort without comparisons: " << shellTime << " seconds" << endl;

    cout << "Quick Sort with comparisons: " << quickCountTime << " seconds, comparisons: " << QuickComparisons << endl;
    cout << "Quick Sort without comparisons: " << quickTime << " seconds" << endl;

    delete[] arr;

    return 0;
}