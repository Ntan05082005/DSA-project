
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
// Unified Floyd's Heapify function with comparison counter
void floydHeapify(int arr[], int n, int i, long long *comparisonCount = nullptr) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n) {
        if (comparisonCount) (*comparisonCount)++;
        if (arr[left] > arr[largest]) {
            largest = left;
        }
    }
    if (right < n) {
        if (comparisonCount) (*comparisonCount)++;
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
        floydHeapify(arr, n, i, &comparisonCount);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        floydHeapify(arr, i, 0, &comparisonCount);
    }
}

// Floyd's Heap Sort without comparison counter
void floydHeapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        floydHeapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        floydHeapify(arr, i, 0);
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

// Main function
int main() {
    const int n = 10000;
    int arr[n];
    
    // Initialize array with random values
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;
    }

    long long optimizedBubbleComparisons = 0;
    long long basicBubbleComparisons = 0;
    long long cocktailComparisons = 0;
    long long recursiveBubbleComparisons = 0;
    long long recursiveCocktailComparisons = 0;
    long long basicHeapComparisons = 0;
    long long floydHeapComparisons = 0;
    long long basicShakerComparisons = 0;

    clock_t start;

    // Basic Bubble Sort with comparisons
    int arr1[n];
    copy(arr, arr + n, arr1);
    start = startTimer();
    basicBubbleSort(arr1, n, basicBubbleComparisons);
    double basicBubbleTime = stopTimer(start);

    // Basic Bubble Sort without comparisons
    int arr2[n];
    copy(arr, arr + n, arr2);
    start = startTimer();
    basicBubbleSort(arr2, n);
    double basicBubbleTimeNoComp = stopTimer(start);

    // Optimized Bubble Sort with comparisons
    int arr3[n];
    copy(arr, arr + n, arr3);
    start = startTimer();
    optimizedBubbleSort(arr3, n, optimizedBubbleComparisons);
    double optimizedBubbleTime = stopTimer(start);

    // Optimized Bubble Sort without comparisons
    int arr4[n];
    copy(arr, arr + n, arr4);
    start = startTimer();
    optimizedBubbleSort(arr4, n);
    double optimizedBubbleTimeNoComp = stopTimer(start);

    // Recursive Bubble Sort with comparisons
    int arr5[n];
    copy(arr, arr + n, arr5);
    start = startTimer();
    recursiveBubbleSort(arr5, n, recursiveBubbleComparisons);
    double recursiveBubbleTime = stopTimer(start);

    // Recursive Bubble Sort without comparisons
    int arr6[n];
    copy(arr, arr + n, arr6);
    start = startTimer();
    recursiveBubbleSort(arr6, n);
    double recursiveBubbleTimeNoComp = stopTimer(start);

    // Cocktail Sort with comparisons
    int arr7[n];
    copy(arr, arr + n, arr7);
    start = startTimer();
    cocktailSort(arr7, n, cocktailComparisons);
    double cocktailTime = stopTimer(start);

    // Cocktail Sort without comparisons
    int arr8[n];
    copy(arr, arr + n, arr8);
    start = startTimer();
    cocktailSort(arr8, n);
    double cocktailTimeNoComp = stopTimer(start);

    // Recursive Cocktail Sort with comparisons
    int arr9[n];
    copy(arr, arr + n, arr9);
    start = startTimer();
    recursiveCocktailSort(arr9, n, recursiveCocktailComparisons);
    double recursiveCocktailTime = stopTimer(start);

    // Recursive Cocktail Sort without comparisons
    int arr10[n];
    copy(arr, arr + n, arr10);
    start = startTimer();
    recursiveCocktailSort(arr10, n);
    double recursiveCocktailTimeNoComp = stopTimer(start);

    // Basic Heap Sort with comparisons
    int arr11[n];
    copy(arr, arr + n, arr11);
    start = startTimer();
    basicHeapSort(arr11, n, basicHeapComparisons);
    double basicHeapTime = stopTimer(start);

    // Basic Heap Sort without comparisons
    int arr12[n];
    copy(arr, arr + n, arr12);
    start = startTimer();
    basicHeapSort(arr12, n);
    double basicHeapTimeNoComp = stopTimer(start);

    // Floyd's Heap Sort with comparisons
    int arr13[n];
    copy(arr, arr + n, arr13);
    start = startTimer();
    floydHeapSort(arr13, n, floydHeapComparisons);
    double floydHeapTime = stopTimer(start);

    // Floyd's Heap Sort without comparisons
    int arr14[n];
    copy(arr, arr + n, arr14);
    start = startTimer();
    floydHeapSort(arr14, n);
    double floydHeapTimeNoComp = stopTimer(start);

    // Basic Shaker Sort with comparisons
    int arr15[n];
    copy(arr, arr + n, arr15);
    start = startTimer();
    basicShakerSort(arr15, n, basicShakerComparisons);
    double basicShakerTime = stopTimer(start);

    // Basic Shaker Sort without comparisons
    int arr16[n];
    copy(arr, arr + n, arr16);
    start = startTimer();
    basicShakerSort(arr16, n);
    double basicShakerTimeNoComp = stopTimer(start);

    // Output results
    cout << "Basic Bubble Sort with comparisons: " << basicBubbleTime << " seconds, " << basicBubbleComparisons << " comparisons\n";
    cout << "Basic Bubble Sort without comparisons: " << basicBubbleTimeNoComp << " seconds\n";
    cout << "Optimized Bubble Sort with comparisons: " << optimizedBubbleTime << " seconds, " << optimizedBubbleComparisons << " comparisons\n";
    cout << "Optimized Bubble Sort without comparisons: " << optimizedBubbleTimeNoComp << " seconds\n";
    cout << "Recursive Bubble Sort with comparisons: " << recursiveBubbleTime << " seconds, " << recursiveBubbleComparisons << " comparisons\n";
    cout << "Recursive Bubble Sort without comparisons: " << recursiveBubbleTimeNoComp << " seconds\n";
    cout << "Cocktail Sort with comparisons: " << cocktailTime << " seconds, " << cocktailComparisons << " comparisons\n";
    cout << "Cocktail Sort without comparisons: " << cocktailTimeNoComp << " seconds\n";
    cout << "Recursive Cocktail Sort with comparisons: " << recursiveCocktailTime << " seconds, " << recursiveCocktailComparisons << " comparisons\n";
    cout << "Recursive Cocktail Sort without comparisons: " << recursiveCocktailTimeNoComp << " seconds\n";
    cout << "Basic Heap Sort with comparisons: " << basicHeapTime << " seconds, " << basicHeapComparisons << " comparisons\n";
    cout << "Basic Heap Sort without comparisons: " << basicHeapTimeNoComp << " seconds\n";
    cout << "Floyd's Heap Sort with comparisons: " << floydHeapTime << " seconds, " << floydHeapComparisons << " comparisons\n";
    cout << "Floyd's Heap Sort without comparisons: " << floydHeapTimeNoComp << " seconds\n";
    cout << "Basic Shaker Sort with comparisons: " << basicShakerTime << " seconds, " << basicShakerComparisons << " comparisons\n";
    cout << "Basic Shaker Sort without comparisons: " << basicShakerTimeNoComp << " seconds\n";

    return 0;
}
