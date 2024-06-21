#include "Algorithm.h"

using namespace std;

// Timer functions
clock_t startTimer() {
    return clock();
}

double stopTimer(clock_t start) {
    return double(clock() - start) / CLOCKS_PER_SEC;
}

// Bubble Sort Variations
// Basic Bubble Sort with comparison counter
void basicBubbleSort(int arr[], int n, long long &comparisonCount) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            comparisonCount++;
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// Basic Bubble Sort without comparison counter
void basicBubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// Optimized Bubble Sort with comparison counter
void optimizedBubbleSort(int arr[], int n, long long &comparisonCount) {
    bool swapped;
    for (int i = 0; i < n-1; i++) {
        swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            comparisonCount++;
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

// Optimized Bubble Sort without comparison counter
void optimizedBubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n-1; i++) {
        swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

// Recursive Bubble Sort with comparison counter
void recursiveBubbleSort(int arr[], int n, long long &comparisonCount) {
    if (n == 1) return;
    for (int i = 0; i < n-1; i++) {
        comparisonCount++;
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }
    recursiveBubbleSort(arr, n-1, comparisonCount);
}

// Recursive Bubble Sort without comparison counter
void recursiveBubbleSort(int arr[], int n) {
    if (n == 1) return;
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }
    recursiveBubbleSort(arr, n-1);
}

// Cocktail Sort Variations
// Cocktail Sort with comparison counter
void cocktailSort(int arr[], int n, long long &comparisonCount) {
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
        if (!swapped) break;
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

// Cocktail Sort without comparison counter
void cocktailSort(int arr[], int n) {
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
        if (!swapped) break;
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

// Recursive Cocktail Sort with comparison counter
void recursiveCocktailSort(int arr[], int n, long long &comparisonCount) {
    if (n <= 1) return;
    bool swapped = false;
    for (int i = 0; i < n-1; i++) {
        comparisonCount++;
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
            swapped = true;
        }
    }
    if (!swapped) return;
    swapped = false;
    for (int i = n-2; i >= 0; i--) {
        comparisonCount++;
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
            swapped = true;
        }
    }
    if (swapped) recursiveCocktailSort(arr, n-1, comparisonCount);
}

// Recursive Cocktail Sort without comparison counter
void recursiveCocktailSort(int arr[], int n) {
    if (n <= 1) return;
    bool swapped = false;
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
            swapped = true;
        }
    }
    if (!swapped) return;
    swapped = false;
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
            swapped = true;
        }
    }
    if (swapped) recursiveCocktailSort(arr, n-1);
}

// Heap Sort Variations
// Heapify function with comparison counter
void basicHeapify(int arr[], int n, int i, long long &comparisonCount) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n) {
        if (comparisonCount) (comparisonCount)++;
        if (arr[left] > arr[largest]) {
            largest = left;
        }
    }
    if (right < n) {
        if (comparisonCount) (comparisonCount)++;
        if (arr[right] > arr[largest]) {
            largest = right;
        }
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        basicHeapify(arr, n, largest, comparisonCount);
    }
}

// Basic Heap Sort with comparison counter
void basicHeapSort(int arr[], int n, long long &comparisonCount) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        basicHeapify(arr, n, i, comparisonCount);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        basicHeapify(arr, i, 0, comparisonCount);
    }
}

// Heapify function without comparison counter
void basicHeapifyNoComp(int arr[], int n, int i) {
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
        basicHeapifyNoComp(arr, n, largest);
    }
}

// Basic Heap Sort without comparison counter
void basicHeapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        basicHeapifyNoComp(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        basicHeapifyNoComp(arr, i, 0);
    }
}

// Floyd's Heap Sort Variations
// Floyd's Heapify function with comparison counter
void floydHeapify(int arr[], int n, int i, long long &comparisonCount) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n) {
        if (comparisonCount) (comparisonCount)++;
        if (arr[left] > arr[largest]) {
            largest = left;
        }
    }
    if (right < n) {
        if (comparisonCount) (comparisonCount)++;
        if (arr[right] > arr[largest]) {
            largest = right;
        }
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        floydHeapify(arr, n, largest, comparisonCount);
    }
}

// Floyd's Heap Sort with comparison counter
void floydHeapSort(int arr[], int n, long long &comparisonCount) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        floydHeapify(arr, n, i, comparisonCount);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        floydHeapify(arr, i, 0, comparisonCount);
    }
}

// Floyd's Heapify function without comparison counter
void floydHeapifyNoComp(int arr[], int n, int i) {
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
        floydHeapifyNoComp(arr, n, largest);
    }
}

// Floyd's Heap Sort without comparison counter
void floydHeapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        floydHeapifyNoComp(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        floydHeapifyNoComp(arr, i, 0);
    }
}

// Shaker Sort Variations
// Basic Shaker Sort with comparison counter
void basicShakerSort(int arr[], int n, long long &comparisonCount) {
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
        if (!swapped) break;
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
        if (!swapped) break;
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