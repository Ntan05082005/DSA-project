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
void basicBubbleSortCount(int *arr, int n, long long &comparisonCount) {
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
void basicBubbleSort(int *arr, int n) {
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
void basicShakerSortCount(int *arr, int n, long long &comparisonCount) {
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
void basicShakerSort(int *arr, int n) {
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
void basicHeapifyCount(int *arr, int n, int i, long long &comparisonCount) {
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
void basicHeapSortCount(int *arr, int n, long long &comparisonCount) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        basicHeapifyCount(arr, n, i, comparisonCount);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        basicHeapifyCount(arr, i, 0, comparisonCount);
    }
}

// Heapify function without comparison counter
void basicHeapify(int *arr, int n, int i) {
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
void basicHeapSort(int *arr, int n) {
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

    // Find the maximum value in the array
    int max = arr[0];
    for (int i = 1; ++comparisons && i < n; i++) {
        if (++comparisons && arr[i] > max)
            max = arr[i];
    }

    // Create a count array to store the count of each unique number
    int* cnt = new int[max + 1]();

    // Count each element in the array
    for (int i = 0; ++comparisons && i < n; i++) {
        cnt[arr[i]]++;
    }

    // Update count array to hold the position of elements in the sorted array
    for (int i = 1; ++comparisons && i <= max; i++) {
        cnt[i] += cnt[i - 1];
    }

    // Build the temporary sorted array
    for (int i = n - 1; ++comparisons && i >= 0; i--) {
        tmp[cnt[arr[i]] - 1] = arr[i];
        cnt[arr[i]]--;
    }

    // Copy the sorted elements back into the original array
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
}

//Counting Sort 
void CountingSort(int arr[], int n) {
    int* tmp = new int[n];

   
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    
    int* cnt = new int[max + 1]();
    
    for (int i = 0;  i < n; i++) {
        cnt[arr[i]]++;
    }
   
    for (int i = 1; i <= max; i++) {
        cnt[i] += cnt[i - 1];
    }
   
    for (int i = n - 1;  i >= 0; i--) {
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


// Select Sort
void selectionSort(int* arr, int n)
{
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
}
// Select Sort Counting
void selectionSortCount(int* arr, int n,long long& comp)
{
    comp = 0;
    for (int i = 0; i < n - 1 && ++comp; i++)
    {
        int min = i;
        for (int j = i + 1; j < n && ++comp; j++)
        {
            if (arr[j] < arr[min] && ++comp) {
                min = j;
            }
        }
        if (min != i && ++comp)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    
}

// Merge Sort
void mergeSort(int* arr, int n)
{
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
}



// Merge Sort counting
void mergeSortCount(int* arr, int n, long long& comp) {
    comp = 0; 

    // Base case: if the array has 0 or 1 elements, it is already sorted
    if (n <= 1) {
        return;
    }

    // Split the array into two halves
    int mid = n / 2;
    int* left = new int[mid];
    int* right = new int[n - mid];

    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
        comp++; // Increment the comparison count
    }

    for (int i = mid; i < n; i++) {
        right[i - mid] = arr[i];
        comp++; // Increment the comparison count
    }

    // Recursively sort the two halves
    mergeSortCount(left, mid, comp);
    mergeSortCount(right, n - mid, comp);

    // Merge the two sorted halves
    int i = 0, j = 0, k = 0;
    while (i < mid && j < n - mid) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        }
        else {
            arr[k++] = right[j++];
        }
        comp++; // Increment the comparison count
    }

    // Copy the remaining elements of the left half
    while (i < mid) {
        arr[k++] = left[i++];
        comp++; // Increment the comparison count
    }

    // Copy the remaining elements of the right half
    while (j < n - mid) {
        arr[k++] = right[j++];
        comp++; // Increment the comparison count
    }

    // Free the dynamically allocated memory
    delete[] left;
    delete[] right;
}




// Flash Sort
void flashSort(int arr[], int n) {
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
        int* output = new int [n];
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
    
}

// Flash Sort counting
void flashSortCount(int arr[], int n,long long& comp)
{
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
    
}

// Insertion Sort
void insertionSort(int* arr, int n)
{
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
}

// Insertion Sort counting
void insertionSortCount(int* arr, int n,long long& comp)
{
    comp = 0;
    for (int i = 1; i < n && ++comp; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while ((j >= 0 && ++comp) && (arr[j] > temp && ++comp))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    
}

// Shell Sort
void shellSort(int* arr, int n)
{

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
}

// Shell Sort counting
void shellSortCount(int* arr, int n,long long& comp)
{
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

void QuickSort(int* a, int n, int l, int r) {
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
    pivotIndex = indexFromLeft; // and mark its new location
    return pivotIndex;
}

void quicksortCount(int arr[], int first, int last, long long& comp) {
    // Base case: if the subarray has less than 10 elements, use insertion sort
    if (last - first + 1 < 10) {
        insertionSort(arr + first, last - first + 1);
        return;
    }

    // Create the partition: S1 | Pivot | S2
    int pivotIndex = partitionCount(arr, first, last, comp);

    // Recursively sort the left and right subarrays
    quicksortCount(arr, first, pivotIndex - 1, comp);
    quicksortCount(arr, pivotIndex + 1, last, comp);
}

void quickSortCount(int arr[], int n,long long& comp)
{
    
    quicksortCount(arr, 0, n - 1,comp);
    
}