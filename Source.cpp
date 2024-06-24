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

    // Bubble Sort with comparisons
    int* arr1 = new int[n];
    copy(arr, arr + n, arr1);
    auto start = high_resolution_clock::now();
    basicBubbleSortCount(arr1, n, BubbleComparisons);
    auto stop = high_resolution_clock::now();
    auto BubbleCountTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr1;

    // Basic Bubble Sort without comparisons
    int* arr2 = new int[n];
    copy(arr, arr + n, arr2);
    start = high_resolution_clock::now();
    basicBubbleSort(arr2, n);
    stop = high_resolution_clock::now();
    auto BubbleTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr2;

    // Shaker Sort with comparisons
    int* arr3 = new int[n];
    copy(arr, arr + n, arr3);
    start = high_resolution_clock::now();
    basicShakerSortCount(arr3, n, ShakerComparisons);
    stop = high_resolution_clock::now();
    auto shakerCountTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr3;

    // Shaker Sort without comparisons
    int* arr4 = new int[n];
    copy(arr, arr + n, arr4);
    start = high_resolution_clock::now();
    basicShakerSort(arr4, n);
    stop = high_resolution_clock::now();
    auto shakerTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr4;

    // Heap Sort with comparisons
    int* arr5 = new int[n];
    copy(arr, arr + n, arr5);
    start = high_resolution_clock::now();
    basicHeapSortCount(arr5, n, HeapComparisons);
    stop = high_resolution_clock::now();
    auto heapCountTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr5;

    // Heap Sort without comparisons
    int* arr6 = new int[n];
    copy(arr, arr + n, arr6);
    start = high_resolution_clock::now();
    basicHeapSort(arr6, n);
    stop = high_resolution_clock::now();
    auto heapTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr6;

    // Counting Sort with comparisons
    int* arr7 = new int[n];
    copy(arr, arr + n, arr7);
    start = high_resolution_clock::now();
    CountingSortCount(arr7, n, CountingComparisons);
    stop = high_resolution_clock::now();
    auto CountingCountTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr7;

    // Counting Sort without comparisons
    int* arr8 = new int[n];
    copy(arr, arr + n, arr8);
    start = high_resolution_clock::now();
    CountingSort(arr8, n);
    stop = high_resolution_clock::now();
    auto CountingTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr8;

    // Radix Sort with comparisons
    int* arr9 = new int[n];
    copy(arr, arr + n, arr9);
    start = high_resolution_clock::now();
    RadixSortCount(arr9, n, RadixComparisons);
    stop = high_resolution_clock::now();
    auto RadixCountTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr9;

    // Radix Sort without comparisons
    int* arr10 = new int[n];
    copy(arr, arr + n, arr10);
    start = high_resolution_clock::now();
    RadixSort(arr10, n);
    stop = high_resolution_clock::now();
    auto RadixTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr10;

    // Selection Sort with comparisons
    int* arr11 = new int[n];
    copy(arr, arr + n, arr11);
    start = high_resolution_clock::now();
    selectionSortCount(arr11, n, SelectionComparisons);
    stop = high_resolution_clock::now();
    auto selectionCountTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr11;

    // Selection Sort without comparisons
    int* arr12 = new int[n];
    copy(arr, arr + n, arr12);
    start = high_resolution_clock::now();
    selectionSort(arr12, n);
    stop = high_resolution_clock::now();
    auto selectionTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr12;

    // Merge Sort with comparisons
    int* arr13 = new int[n];
    copy(arr, arr + n, arr13);
    start = high_resolution_clock::now();
    mergeSortCount(arr13, n, MergeComparisons);
    stop = high_resolution_clock::now();
    auto mergeCountTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr13;

    // Merge Sort without comparisons
    int* arr14 = new int[n];
    copy(arr, arr + n, arr14);
    start = high_resolution_clock::now();
    mergeSort(arr14, n);
    stop = high_resolution_clock::now();
    auto mergeTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr14;

    // Insertion Sort with comparisons
    int* arr15 = new int[n];
    copy(arr, arr + n, arr15);
    start = high_resolution_clock::now();
    insertionSortCount(arr15, n, InsertionComparisons);
    stop = high_resolution_clock::now();
    auto insertionCountTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr15;

    // Insertion Sort without comparisons
    int* arr16 = new int[n];
    copy(arr, arr + n, arr16);
    start = high_resolution_clock::now();
    insertionSort(arr16, n);
    stop = high_resolution_clock::now();
    auto insertionTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr16;

    // Flash Sort with comparisons
    int* arr17 = new int[n];
    copy(arr, arr + n, arr17);
    start = high_resolution_clock::now();
    flashSortCount(arr17, n, FlashComparisons);
    stop = high_resolution_clock::now();
    auto flashCountTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr17;

    // Flash Sort without comparisons
    int* arr18 = new int[n];
    copy(arr, arr + n, arr18);
    start = high_resolution_clock::now();
    flashSort(arr18, n);
    stop = high_resolution_clock::now();
    auto flashTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr18;

    // Shell Sort with comparisons
    int* arr19 = new int[n];
    copy(arr, arr + n, arr19);
    start = high_resolution_clock::now();
    shellSortCount(arr19, n, ShellComparisons);
    stop = high_resolution_clock::now();
    auto shellCountTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr19;

    // Shell Sort without comparisons
    int* arr20 = new int[n];
    copy(arr, arr + n, arr20);
    start = high_resolution_clock::now();
    shellSort(arr20, n);
    stop = high_resolution_clock::now();
    auto shellTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr20;

    // Quick Sort with comparisons
    int* arr21 = new int[n];
    copy(arr, arr + n, arr21);
    start = high_resolution_clock::now();
    quickSortCount(arr21, n, QuickComparisons);
    stop = high_resolution_clock::now();
    auto quickCountTime = duration_cast<duration<double>>(stop - start).count();
    delete[] arr21;

    // Quick Sort without comparisons
    int* arr22 = new int[n];
    copy(arr, arr + n, arr22);
    start = high_resolution_clock::now();
    QuickSort(arr22, n, 0, n - 1);
    stop = high_resolution_clock::now();
    auto quickTime = duration_cast<duration<double>>(stop - start).count();
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