#include "Algorithm.h"
#include "Data.h"


// Bubble Sort 
// Basic Bubble Sort with comparison counter
void basicBubbleSortCount(int* arr, int n, long long& comparisonCount, double& time) {
    auto start = high_resolution_clock::now();

    for (int i = 0; ++comparisonCount && i < n - 1; i++) {
        for (int j = n - 1; ++comparisonCount && j > i; j--) {

            if (++comparisonCount && arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }

    auto end = chrono::high_resolution_clock::now(); // End the timer
    chrono::duration<double> duration = end - start;
    time = duration.count();
}

// Basic Bubble Sort without comparison counter
void basicBubbleSort(int* arr, int n, double& time) {
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
    auto end = chrono::high_resolution_clock::now(); // End the timer
    chrono::duration<double> duration = end - start;
    time = duration.count();
}
// Optimized Bubble Sort with comparison counter
void optimizedBubbleSortCount(int arr[], int n, long long &comparisonCount) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = n - 1; j > i; j--) {
            comparisonCount++;
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                swapped = true;
            }
        }
        if (!swapped) 
            break;
    }
}

// Optimized Bubble Sort without comparison counter
void optimizedBubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = n - 1; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                swapped = true;
            }
        }
        if (!swapped) 
            break;
    }
}

// Recursive Bubble Sort with comparison counter
void recursiveBubbleSort(int arr[], int n, long long &comparisonCount) {
    if (n == 1) 
        return; // Base case
    for (int i = 0; i < n - 1; i++) {
        comparisonCount++;
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    recursiveBubbleSort(arr, n - 1, comparisonCount);
}

// Recursive Bubble Sort without comparison counter
void recursiveBubbleSort(int arr[], int n) {
    if (n == 1) 
        return;
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    recursiveBubbleSort(arr, n - 1);
}

// Shaker Sort 
// Basic Shaker Sort with comparison counter

void basicShakerSortCount(int* arr, int n, long long& comparisonCount, double& time) {
    auto startTime = high_resolution_clock::now();
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (++comparisonCount && swapped) {
        swapped = false;
        for (int i = start; ++comparisonCount && i < end; ++i) {

            if (++comparisonCount && arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
        swapped = false;
        --end;

        for (int i = end - 1; ++comparisonCount && i >= start; --i) {

            if (++comparisonCount && arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        ++start;
    }
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}

// Basic Shaker Sort without comparison counter
void basicShakerSort(int* arr, int n, double& time) {
    auto startTime = high_resolution_clock::now();
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
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}

// Heap Sort
// Heapify function with comparison counter
void basicHeapifyCount(int* arr, int n, int i, long long& comparisonCount) {

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (++comparisonCount && left < n) {

        if (arr[left] > arr[largest]) {
            largest = left;
        }
    }
    if (++comparisonCount && right < n) {

        if (arr[right] > arr[largest]) {
            largest = right;
        }
    }
    if (++comparisonCount && largest != i) {
        swap(arr[i], arr[largest]);
        basicHeapifyCount(arr, n, largest, comparisonCount);
    }

}

// Basic Heap Sort with comparison counter
void basicHeapSortCount(int* arr, int n, long long& comparisonCount, double& time) {
    auto startTime = high_resolution_clock::now();
    for (int i = n / 2 - 1; ++comparisonCount && i >= 0; i--) {
        basicHeapifyCount(arr, n, i, comparisonCount);
    }

    for (int i = n - 1; ++comparisonCount && i > 0; i--) {
        swap(arr[0], arr[i]);
        basicHeapifyCount(arr, i, 0, comparisonCount);
    }
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}

// Heapify function without comparison counter
void basicHeapify(int* arr, int n, int i) {

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
void basicHeapSort(int* arr, int n, double& time) {
    auto startTime = high_resolution_clock::now();
    for (int i = n / 2 - 1; i >= 0; i--) {
        basicHeapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        basicHeapify(arr, i, 0);
    }
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}

// Floyd's Heap Sort Variations
// Floyd's Heapify function with comparison counter
void floydHeapifyCount(int arr[], int n, int i, long long &comparisonCount) {
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
        floydHeapifyCount(arr, n, largest, comparisonCount);
    }
}

// Floyd's Heap Sort with comparison counter
void floydHeapSortCount(int arr[], int n, long long &comparisonCount) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        floydHeapifyCount(arr, n, i, comparisonCount);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        floydHeapifyCount(arr, i, 0, comparisonCount);
    }
}

// Floyd's Heapify function without comparison counter
void floydHeapify(int arr[], int n, int i) {
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
        floydHeapify(arr, n, largest);
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

//Counting Sort with comparison counter
void CountingSortCount(int arr[], int n, long long& comparisons, double& time) {
    int* tmp = new int[n];
    auto startTime = high_resolution_clock::now();

    int max = arr[0];
    for (int i = 1; ++comparisons && i < n; i++) {
        if (++comparisons && arr[i] > max)
            max = arr[i];
    }

    int* cnt = new int[max + 1]();

    for (int i = 0; ++comparisons && i < n; i++) {
        cnt[arr[i]]++;
    }

    for (int i = 1; ++comparisons && i <= max; i++) {
        cnt[i] += cnt[i - 1];
    }

    for (int i = n - 1; ++comparisons && i >= 0; i--) {
        tmp[cnt[arr[i]] - 1] = arr[i];
        cnt[arr[i]]--;
    }

    for (int i = 0; ++comparisons && i < n; i++) {
        arr[i] = tmp[i];
    }

    delete[] tmp;
    delete[] cnt;
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();

}

//Counting Sort 
void CountingSort(int arr[], int n, double& time) {
    auto startTime = high_resolution_clock::now();
    int* tmp = new int[n];


    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int* cnt = new int[max + 1]();

    for (int i = 0; i < n; i++) {
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
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}

//Radix Sort with comparison counter
void RadixSortCount(int arr[], int n, long long& comparisons, double& time) {
    auto startTime = high_resolution_clock::now();
    int* tmp = new int[n];
    int max = arr[0];
    int exp = 1;
    int key;

    for (int i = 1; ++comparisons && i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    while (exp <= max) {
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
        exp *= 10;
    }
    delete[] tmp;
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}



//Radix Sort
void RadixSort(int arr[], int n, double& time) {
    auto startTime = high_resolution_clock::now();
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
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}


// Select Sort
void selectionSort(int* arr, int n, double& time)
{
    auto startTime = high_resolution_clock::now();
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}
// Select Sort Counting
void selectionSortCount(int* arr, int n, long long& comp, double& time)
{
    auto startTime = high_resolution_clock::now();
    comp = 0;
    for (int i = 0; ++comp && i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; ++comp && j < n; j++)
        {
            if (++comp && arr[j] < arr[min]) {
                min = j;
            }
        }
        if (++comp && min != i)
        {
            HoanVi(arr[min], arr[i]);
        }
    }
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}

// Merge Sort
void mergeSort(int* arr, int n, double& time)
{
    auto startTime = high_resolution_clock::now();
    // Split the array into two halves
    int mid = n / 2;
    int* left = new int[mid];
    int* right = new int[n - mid];

    for (int i = 0; i < mid; i++)
        left[i] = arr[i];
    for (int i = mid; i < n; i++)
        right[i - mid] = arr[i];

    // Merge the two halves
    int i = 0, j = 0, k = 0;
    while ((i < mid) && (j < n - mid))
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    // Copy the remaining elements of left
    while (i < mid)
        arr[k++] = left[i++];

    // Copy the remaining elements of right
    while (j < n - mid)
        arr[k++] = right[j++];

    // Free the memory allocated to the two halves
    delete[] left;
    delete[] right;
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}



// Merge Sort counting
void mergeSortCount(int* arr, int n, long long& comp, double& time) {

    auto startTime = high_resolution_clock::now();

    if (n <= 1) {
        time = 0.0;
        return;
    }
    int mid = n / 2;
    int* left = new int[mid];
    int* right = new int[n - mid];

    for (int i = 0; ++comp && i < mid; i++) {
        left[i] = arr[i];
        comp++;
    }

    for (int i = mid; ++comp && i < n; i++) {
        right[i - mid] = arr[i];
        comp++;
    }

    mergeSortCount(left, mid, comp, time);
    mergeSortCount(right, n - mid, comp, time);

    int i = 0, j = 0, k = 0;
    while (++comp && i < mid && j < n - mid) {
        if (++comp && left[i] <= right[j]) {
            arr[k++] = left[i++];
        }
        else {

            arr[k++] = right[j++];
        }

    }

    while (++comp && i < mid) {
        arr[k++] = left[i++];
    }

    while (++comp && j < n - mid) {
        arr[k++] = right[j++];
    }

    delete[] left;
    delete[] right;
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}




// Flash Sort
void flashSort(int arr[], int n, double& time) {
    auto startTime = high_resolution_clock::now();
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int exp = 1;
    while (max / exp > 0) {
        int count[10] = { 0 };
        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / exp) % 10;
            count[digit]++;
        }
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }
        int* output = new int[n];
        for (int i = n - 1; i >= 0; i--) {
            int digit = (arr[i] / exp) % 10;
            output[count[digit] - 1] = arr[i];
            count[digit]--;
        }
        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }

        exp *= 10;
        delete[] output;
    }
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}

// Flash Sort counting
void flashSortCount(int arr[], int n, long long& comp, double& time)
{
    auto startTime = high_resolution_clock::now();
    comp = 0;
    int max = arr[0];
    for (int i = 1; i < n && ++comp; i++)
        if (arr[i] > max && ++comp)
            max = arr[i];
    int exp = 1;
    while (max / exp > 0 && ++comp)
    {
        int* count = new int[10];
        for (int i = 0; i < 10 && ++comp; i++)
            count[i] = 0;
        for (int i = 0; i < n && ++comp; i++)
            count[(arr[i] / exp) % 10]++;
        for (int i = 1; i < 10 && ++comp; i++)
            count[i] += count[i - 1];
        int* output = new int[n];
        for (int i = n - 1; i >= 0 && ++comp; i--)
        {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }
        for (int i = 0; i < n && ++comp; i++)
            arr[i] = output[i];
        delete[] count;
        delete[] output;
        exp *= 10;
    }
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}

// Insertion Sort
void insertionSort(int* arr, int n, double& time)
{
    auto startTime = high_resolution_clock::now();
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while ((j >= 0) && (arr[j] > temp))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}

// Insertion Sort counting
void insertionSortCount(int* arr, int n, long long& comp, double& time)
{
    auto startTime = high_resolution_clock::now();
    comp = 0;
    for (int i = 1; ++comp && i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while ((++comp && j >= 0) && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}

// Shell Sort
void shellSort(int* arr, int n, double& time)
{
    auto startTime = high_resolution_clock::now();
    int gap = n / 2;
    while (gap > 0)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
            int j = i - gap;
            while ((j >= 0) && (arr[j] > temp))
            {
                arr[j + gap] = arr[j];
                j -= gap;
            }
            arr[j + gap] = temp;
        }
        gap /= 2;
    }
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}

// Shell Sort counting
void shellSortCount(int* arr, int n, long long& comp, double& time)
{
    auto startTime = high_resolution_clock::now();
    comp = 0;
    int gap = n / 2;
    while (gap > 0 && ++comp)
    {
        for (int i = gap; i < n && ++comp; i++)
        {
            int temp = arr[i];
            int j = i - gap;
            while ((j >= 0 && ++comp) && (arr[j] > temp && ++comp))
            {
                arr[j + gap] = arr[j];
                j -= gap;
            }
            arr[j + gap] = temp;
        }
        gap /= 2;
    }
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}

//Quick Sort
int partition(int* a, int n, int left, int right)
{
    int pivot = a[right];
    int i = left;
    int j = right - 1;
    do
    {
        while (a[i] < pivot && i <= j) i++;
        while (a[j] > pivot && i <= j) j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    } while (i <= j);
    swap(a[i], a[right]);
    return i;
}

void QuickSort(int* a, int n, int l, int r, double& time) {
    auto startTime = high_resolution_clock::now();
    // Create a stack for iterative implementation
    int* stack = new int[r - l + 1];

    // Initialize top of stack
    int top = -1;

    // Push initial values of l and r to stack
    stack[++top] = l;
    stack[++top] = r;

    // Keep popping from stack while it's not empty
    while (top >= 0) {
        // Pop r and l
        r = stack[top--];
        l = stack[top--];

        // Partition the array and get pivot index
        int p = partition(a, n, l, r);

        // If there are elements on the left side of pivot,
        // push left side to stack
        if (p - 1 > l) {
            stack[++top] = l;
            stack[++top] = p - 1;
        }

        // If there are elements on the right side of pivot,
        // push right side to stack
        if (p + 1 < r) {
            stack[++top] = p + 1;
            stack[++top] = r;
        }
    }

    // Delete the stack to free memory
    delete[] stack;
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();
}
// Quick Sort
int sortFirstMiddleLast(int arr[], int first, int last)
{
    int mid = first + (last - first) / 2;
    if (arr[first] > arr[mid])
        swap(arr[first], arr[mid]);
    if (arr[mid] > arr[last])
        swap(arr[mid], arr[last]);
    if (arr[first] > arr[mid])
        swap(arr[first], arr[mid]);
    return mid;
}

int partition(int arr[], int first, int last)
{
    // Choose pivot using median-of-three selection
    int pivotIndex = sortFirstMiddleLast(arr, first, last);
    // Reposition pivot so it is last in the array
    swap(arr[pivotIndex], arr[last - 1]);
    pivotIndex = last - 1;
    int pivot = arr[pivotIndex];
    // Determine the regions S1 and S2
    int indexFromLeft = first + 1, indexFromRight = last - 2;
    int done = false;
    while (!done)
    {
        // Locate first entry on left that is >= pivot
        while (arr[indexFromLeft] < pivot) {
            indexFromLeft++;
        }
        // Locate first entry on right that is <= pivot
        while (arr[indexFromRight] > pivot) {
            indexFromRight--;
        }
        // Swap the two found entries
        if (indexFromLeft <= indexFromRight)
        {
            swap(arr[indexFromLeft], arr[indexFromRight]);
            indexFromLeft++;
            indexFromRight--;
        }
        else
            done = true;
    }
    // Place pivot in proper position between S1 and S2
    swap(arr[pivotIndex], arr[indexFromLeft]);
    pivotIndex = indexFromLeft; // and mark its new location
    return pivotIndex;
}


//Quick Sort counting
int partitionCount(int arr[], int first, int last, long long& comp)
{
    // Choose pivot using median-of-three selection
    int pivotIndex = sortFirstMiddleLast(arr, first, last);
    comp += 3;
    // Reposition pivot so it is last in the array
    swap(arr[pivotIndex], arr[last - 1]);
    pivotIndex = last - 1;
    int pivot = arr[pivotIndex];
    // Determine the regions S1 and S2
    int indexFromLeft = first + 1, indexFromRight = last - 2;
    int done = false;
    while (!done && ++comp)
    {
        // Locate first entry on left that is >= pivot
        while (arr[indexFromLeft] < pivot && ++comp) {
            indexFromLeft++;
        }
        // Locate first entry on right that is <= pivot
        while (arr[indexFromRight] > pivot && ++comp) {
            indexFromRight--;
        }
        // Swap the two found entries
        if (indexFromLeft <= indexFromRight && ++comp)
        {
            swap(arr[indexFromLeft], arr[indexFromRight]);
            indexFromLeft++;
            indexFromRight--;
        }
        else
            done = true;
    }
    // Place pivot in proper position between S1 and S2
    swap(arr[pivotIndex], arr[indexFromLeft]);
    pivotIndex = indexFromLeft; // and mark its new locationB
    return pivotIndex;
}

void quicksortCount(int arr[], int first, int last, long long& comp) {
    // Base case: if the subarray has less than 10 elements, use insertion sort
    double time = 0;
    if (last - first + 1 < 10 && ++comp) {
        insertionSort(arr + first, last - first + 1, time);
        return;
    }

    // Create the partition: S1 | Pivot | S2
    int pivotIndex = partitionCount(arr, first, last, comp);

    // Recursively sort the left and right subarrays
    quicksortCount(arr, first, pivotIndex - 1, comp);
    quicksortCount(arr, pivotIndex + 1, last, comp);

}

void quickSortCount(int arr[], int n, long long& comp, double& time)
{
    auto startTime = high_resolution_clock::now();
    quicksortCount(arr, 0, n - 1, comp);
    auto endTime = high_resolution_clock::now();
    duration<double> duration = endTime - startTime;
    time = duration.count();

}