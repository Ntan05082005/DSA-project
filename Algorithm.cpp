#include "Algorithm.h"

using namespace std;

// Timer functions
clock_t startTimer() {
    return clock();
}

double stopTimer(clock_t start) {
    return double(clock() - start) / CLOCKS_PER_SEC;
}

// Bubble Sort 
// Basic Bubble Sort with comparison counter
void basicBubbleSortCount(int arr[], int n, long long &comparisonCount) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            comparisonCount++;
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

// Basic Bubble Sort without comparison counter
void basicBubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

// Shaker Sort 
// Basic Shaker Sort with comparison counter
void basicShakerSortCount(int arr[], int n, long long &comparisonCount) {
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped) {
        swapped = false;
        for (int i = start; i < end; ++i) {
            comparisonCount++;
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) 
            break;
        swapped = false;
        --end;

        for (int i = end - 1; i >= start; --i) {
            comparisonCount++;
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        ++start;
    }
}

// Basic Shaker Sort without comparison counter
void basicShakerSort(int arr[], int n) {
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped) {
        swapped = false;
        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) 
            break;
        swapped = false;
        --end;

        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        ++start;
    }
}

// Heap Sort
// Heapify function with comparison counter
void basicHeapifyCount(int arr[], int n, int i, long long &comparisonCount) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n) {
        if (comparisonCount) 
            comparisonCount++;
        if (arr[left] > arr[largest]) {
            largest = left;
        }
    }
    if (right < n) {
        if (comparisonCount) 
            comparisonCount++;
        if (arr[right] > arr[largest]) {
            largest = right;
        }
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        basicHeapifyCount(arr, n, largest, comparisonCount);
    }
}

// Basic Heap Sort with comparison counter
void basicHeapSortCount(int arr[], int n, long long &comparisonCount) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        basicHeapifyCount(arr, n, i, comparisonCount);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        basicHeapifyCount(arr, i, 0, comparisonCount);
    }
}

// Heapify function without comparison counter
void basicHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n) {
        if (arr[left] > arr[largest]) {
            largest = left;
        }
    }
    if (right < n) {
        if (arr[right] > arr[largest]) {
            largest = right;
        }
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        basicHeapify(arr, n, largest);
    }
}

// Basic Heap Sort without comparison counter
void basicHeapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        basicHeapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        basicHeapify(arr, i, 0);
    }
}

//Counting Sort with comparison counter
void CountingSortCount(int arr[], int n, long long& comparisons) {
    int* tmp = new int[n];


    int max = arr[0];
    for (int i = 1; ++comparisons && i < n; i++) {

        if (++comparisons && arr[i] > max)
            max = arr[i];
    }

    int* cnt = new int[max + 1];


    for (int i = 0; ++comparisons && i < max; i++) {
        cnt[arr[i]]++;
    }

    for (int i = 1; ++comparisons && i <= max; i++) {
        cnt[i] += cnt[i - 1];
    }

    for (int i = n - 1; ++comparisons && i >= 0; i--) {
        tmp[cnt[arr[i] - 1]] = arr[i];
        cnt[arr[i]]--;
    }

    for (int i = 0; ++comparisons && i < n; i++) {
        arr[i] = tmp[i];
    }
    delete[] tmp;
    delete[] cnt;
}

//Radix Sort with comparison counter
void RadixSortCount(int arr[], int n, long long& comparisons) {
    int* tmp = new int[n];
    int max = arr[0];
    int exp = 1;
    int key;
    for (int i = 0; ++comparisons && i < n; i++) {
        if (arr[i] > max && ++comparisons)
            max = arr[i];
    }
    while (++comparisons && exp <= max) {
        int cnt[10] = { 0 };
        for (int i = 0; ++comparisons && i < n; i++) {
            key = (arr[i] / exp) % 10;
            cnt[key]++;
        }
        for (int i = 1; ++comparisons && i < 10; i++) {
            cnt[i] += cnt[i - 1];
        }
        for (int i = n - 1; ++comparisons && i >= 0; i--) {
            key = (arr[i] / exp) % 10;
            tmp[--cnt[key]] = arr[i];
        }
        for (int i = 0; ++comparisons && i < n; i++) {
            arr[i] = tmp[i];
        }
        delete[] tmp;
        exp *= 10;
    }
}
//Counting Sort 
void CountingSort(int arr[], int n) {
    int* tmp = new int[n];
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int* cnt = new int[max + 1];

    for (int i = 0; i < max; i++) {
        cnt[arr[i]]++;
    }

    for (int i = 1; i <= max; i++) {
        cnt[i] += cnt[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        tmp[cnt[arr[i]] - 1] = arr[i];
        cnt[arr[i]]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = tmp[i];
    }

    delete[] tmp;
    delete[] cnt;
}

//Radix Sort
void RadixSort(int arr[], int n) {
    int* tmp = new int[n];
    int max = arr[0];
    int exp = 1;
    int key;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    while (exp <= max) {
        int cnt[10] = { 0 };
        for (int i = 0; i < n; i++) {
            key = (arr[i] / exp) % 10;
            cnt[key]++;
        }
        for (int i = 1; i < 10; i++) {
            cnt[i] += cnt[i - 1];
        }
        for (int i = n - 1; i >= 0; i--) {
            key = (arr[i] / exp) % 10;
            tmp[--cnt[key]] = arr[i];
        }
        for (int i = 0; i < n; i++) {
            arr[i] = tmp[i];
        }
        exp *= 10;
    }
    delete[] tmp;
}