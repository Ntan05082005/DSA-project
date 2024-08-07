﻿#include "Algorithm.h"
#include "Data.h"
#include <string>
void Condition_Comand1(string algorithm, string outputParams, int n, int* arr) {
    long long BubbleComparisons = 0;
    long long ShakerComparisons = 0;
    long long HeapComparisons = 0;
    long long SelectionComparisons = 0;
    long long InsertionComparisons = 0;
    long long MergeComparisons = 0;
    long long QuickComparisons = 0;
    long long ShellComparisons = 0;
    long long CountingComparisons = 0;
    long long RadixComparisons = 0;
    long long FlashComparisons = 0;

    double BubbleTime = 0.0;
    double ShakerTime = 0.0;
    double HeapTime = 0.0;
    double SelectionTime = 0.0;
    double InsertionTime = 0.0;
    double MergeTime = 0.0;
    double QuickTime = 0.0;
    double ShellTime = 0.0;
    double CountingTime = 0.0;
    double RadixTime = 0.0;
    double FlashTime = 0.0;

    if (algorithm == "bubble-sort") {
        if (outputParams == "-time") {
            basicBubbleSort(arr, n, BubbleTime);
            cout << "Running time (if required): " << BubbleTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            basicBubbleSortCount(arr, n, BubbleComparisons, BubbleTime);
            cout << "Comparisons (if required): " << BubbleComparisons << endl;
        }
        if (outputParams == "-both") {
            basicBubbleSortCount(arr, n, BubbleComparisons, BubbleTime);
            cout << "Comparisons (if required): " << BubbleComparisons << endl;
            cout << "Running time (if required): " << BubbleTime << " seconds\n";
        }
    }
    else if (algorithm == "shaker-sort") {
        if (outputParams == "-time") {
            basicShakerSort(arr, n, ShakerTime);
            cout << "Running time (if required):  " << ShakerTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            basicShakerSortCount(arr, n, ShakerComparisons, ShakerTime);
            cout << "Comparisons (if required): " << ShakerComparisons << endl;
        }
        if (outputParams == "-both") {
            basicShakerSortCount(arr, n, ShakerComparisons, ShakerTime);
            cout << "Comparisons (if required): " << ShakerComparisons << endl;
            cout << "Running time (if required): " << ShakerTime << " seconds\n";
        }
    }
    else if (algorithm == "heap-sort") {
        if (outputParams == "-time") {
            basicHeapSort(arr, n, HeapTime);
            cout << "Running time (if required): " << HeapTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            basicHeapSortCount(arr, n, HeapComparisons, HeapTime);
            cout << "Comparisons (if required): " << HeapComparisons << endl;
        }
        if (outputParams == "-both") {
            basicHeapSortCount(arr, n, HeapComparisons, HeapTime);
            cout << "Comparisons (if required): " << HeapComparisons << endl;
            cout << "Running time (if required): " << HeapTime << " seconds\n";
        }
    }
    else if (algorithm == "selection-sort") {
        if (outputParams == "-time") {
            selectionSort(arr, n, SelectionTime);
            cout << "Running time (if required): " << SelectionTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            selectionSortCount(arr, n, SelectionComparisons, SelectionTime);
            cout << "Comparisons (if required): " << SelectionComparisons << endl;
        }
        if (outputParams == "-both") {
            selectionSortCount(arr, n, SelectionComparisons, SelectionTime);
            cout << "Comparisons (if required): " << SelectionComparisons << endl;
            cout << "Running time (if required): " << SelectionTime << " seconds\n";
        }

    }
    else if (algorithm == "insertion-sort") {
        if (outputParams == "-time") {
            insertionSort(arr, n, InsertionTime);
            cout << "Running time (if required): " << InsertionTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            insertionSortCount(arr, n, InsertionComparisons, InsertionTime);
            cout << "Comparisons (if required): " << InsertionComparisons << endl;
        }
        if (outputParams == "-both") {
            insertionSortCount(arr, n, InsertionComparisons, InsertionTime);
            cout << "Comparisons (if required): " << InsertionComparisons << endl;
            cout << "Running time (if required): " << InsertionTime << " seconds\n";
        }
    }
    else if (algorithm == "merge-sort") {
        if (outputParams == "-time") {
            mergeSort(arr, n, MergeTime);
            cout << "Running time (if required): " << MergeTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            mergeSortCount(arr, n, MergeComparisons, MergeTime);
            cout << "Comparisons (if required): " << MergeComparisons << endl;
        }
        if (outputParams == "-both") {
            mergeSortCount(arr, n, MergeComparisons, MergeTime);
            cout << "Comparisons (if required): " << MergeComparisons << endl;
            cout << "Running time (if required): " << MergeTime << " seconds\n";
        }

    }
    else if (algorithm == "quick-sort") {
        if (outputParams == "-time") {
            QuickSort(arr, n, 0, n - 1, QuickTime);
            cout << "Running time (if required): " << QuickTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            quickSortCount(arr, n, QuickComparisons, QuickTime);
            cout << "Comparisons (if required): " << QuickComparisons << endl;
        }
        if (outputParams == "-both") {
            quickSortCount(arr, n, QuickComparisons, QuickTime);
            cout << "Comparisons (if required): " << QuickComparisons << endl;
            cout << "Running time (if required): " << QuickTime << " seconds\n";
        }

    }
    else if (algorithm == "shell-sort") {
        if (outputParams == "-time") {
            shellSort(arr, n, ShellTime);
            cout << "Running time (if required): " << ShellTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            shellSortCount(arr, n, ShellComparisons, ShellTime);
            cout << "Comparisons (if required): " << ShellComparisons << endl;
        }
        if (outputParams == "-both") {
            shellSortCount(arr, n, ShellComparisons, ShellTime);
            cout << "Comparisons (if required): " << ShellComparisons << endl;
            cout << "Running time (if required): " << ShellTime << " seconds\n";
        }

    }
    else if (algorithm == "counting-sort") {
        if (outputParams == "-time") {
            CountingSort(arr, n, CountingTime);
            cout << "Running time (if required): " << CountingTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            CountingSortCount(arr, n, CountingComparisons, CountingTime);
            cout << "Comparisons (if required): " << CountingComparisons << endl;
        }
        if (outputParams == "-both") {
            CountingSortCount(arr, n, CountingComparisons, CountingTime);
            cout << "Comparisons (if required): " << CountingComparisons << endl;
            cout << "Running time (if required): " << CountingTime << " seconds\n";
        }

    }
    else if (algorithm == "radix-sort") {
        if (outputParams == "-time") {
            RadixSort(arr, n, RadixTime);
            cout << "Running time (if required): " << RadixTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            RadixSortCount(arr, n, RadixComparisons, RadixTime);
            cout << "Comparisons (if required): " << RadixComparisons << endl;
        }
        if (outputParams == "-both") {
            RadixSortCount(arr, n, RadixComparisons, RadixTime);
            cout << "Comparisons (if required): " << RadixComparisons << endl;
            cout << "Running time (if required): " << RadixTime << " seconds\n";
        }

    }
    else if (algorithm == "flash-sort") {
        if (outputParams == "-time") {
            flashSort(arr, n, FlashTime);
            cout << "Running time (if required): " << FlashTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            flashSortCount(arr, n, FlashComparisons, FlashTime);
            cout << "Comparisons (if required): " << FlashComparisons << endl;
        }
        if (outputParams == "-both") {
            flashSortCount(arr, n, FlashComparisons, FlashTime);
            cout << "Comparisons (if required): " << FlashComparisons << endl;
            cout << "Running time (if required): " << FlashTime << " seconds\n";
        }

    }
    
    else if (algorithm == "recursive-bubble-sort") {
        if (outputParams == "-time") {
            TimeRecursiveBubbleSort(arr, n, BubbleTime);
            cout << "Running time (if required): " << BubbleTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            TimeRecursiveBubbleSortCount(arr, n, BubbleComparisons, BubbleTime);
            cout << "Comparisons (if required): " << BubbleComparisons << endl;
        }
        if (outputParams == "-both") {
            TimeRecursiveBubbleSortCount(arr, n, BubbleComparisons, BubbleTime);
            cout << "Comparisons (if required): " << BubbleComparisons << endl;
            cout << "Running time (if required): " << BubbleTime << " seconds\n";
        }

    }

    else if (algorithm == "negative-counting-sort") {
        if (outputParams == "-time") {
            NegativeNumCountingSort(arr, n, CountingTime);
        }
        if (outputParams == "-comp") {
            NegativeNumCountingSortCount(arr, n, CountingComparisons, CountingTime);
            cout << "Comparisons (if required): " << CountingComparisons << endl;
        }
        if (outputParams == "-both") {
            NegativeNumCountingSortCount(arr, n, CountingComparisons, CountingTime);
            cout << "Comparisons (if required): " << CountingComparisons << endl;
            cout << "Running time (if required): " << CountingTime << " seconds\n";
        }
    }

    else if (algorithm == "optimized-bubble-sort") {
        if (outputParams == "-time") {
           optimizedBubbleSort(arr, n, BubbleTime);
        }
        if ( outputParams == "-comp") {
            optimizedBubbleSortCount(arr, n, BubbleComparisons, BubbleTime);
            cout << "Comparisons (if required): " << BubbleComparisons << endl;
        }
        if (outputParams == "-both") {
            optimizedBubbleSortCount(arr, n, BubbleComparisons, BubbleTime);
            cout << "Comparisons (if required): " << BubbleComparisons << endl;
            cout << "Running time (if required): " << BubbleTime << " seconds\n";
        }
    }

    else if (algorithm == "inplace-merge-sort") {
        if (outputParams == "-time") {
            TimeInPlaceMergeSort(arr, n, MergeTime);
        }
        if (outputParams == "-comp") {
            TimeinplaceMergeSortCount(arr, n, MergeComparisons, MergeTime);
            cout << "Comparisons (if required): " << MergeComparisons << endl;
        }
        if (outputParams == "-both") {
            TimeinplaceMergeSortCount(arr, n, MergeComparisons, MergeTime);
            cout << "Comparisons (if required): " << MergeComparisons << endl;
            cout << "Running time (if required): " << MergeTime << " seconds\n";
        }
    }

    else if (algorithm == "floyd-heap-sort") {
        if (outputParams == "-time") {
            floydHeapSort(arr, n, HeapTime);
        }
        if (outputParams == "-comp") {
            floydHeapSortCount(arr, n, HeapComparisons, HeapTime);
            cout << "Comparisons (if required): " << HeapComparisons << endl;
        }
        if (outputParams == "-both") {
            floydHeapSortCount(arr, n, HeapComparisons, HeapTime);
            cout << "Comparisons (if required): " << HeapComparisons << endl;
            cout << "Running time (if required): " << HeapTime << " seconds\n";
        }
    }

    else if (algorithm == "brick-sort") {
        if (outputParams == "-time") {
            brickSort(arr, n, BubbleTime);
        }
        if (outputParams == "-comp") {
            brickSortCount(arr, n, BubbleComparisons, BubbleTime);
            cout << "Comparisons (if required): " << BubbleComparisons << endl;
        }
        if (outputParams == "-both") {
            brickSortCount(arr, n, BubbleComparisons, BubbleTime);
            cout << "Comparisons (if required): " << BubbleComparisons << endl;
            cout << "Running time (if required): " << BubbleTime << " seconds\n";
        }
    }

    
    else if (algorithm == "recursive-selection-sort") {
        if (outputParams == "-time") {
            TimeRecursiveSelectionSort(arr, n, SelectionTime);
        }
        if (outputParams == "-comp") {
            TimeRecursiveSelectionSortCount(arr, n, SelectionComparisons, SelectionTime);
            cout << "Comparisons (if required): " << SelectionComparisons << endl;
        }
        if (outputParams == "-both") {
            TimeRecursiveSelectionSortCount(arr, n, SelectionComparisons, SelectionTime);
            cout << "Comparisons (if required): " << SelectionComparisons << endl;
            cout << "Running time (if required): " << SelectionTime << " seconds\n";
        }
    }

    else if (algorithm == "binary-insertion-sort") {
        if (outputParams == "-time") {
            BinaryinsertionSort(arr, n, InsertionTime);
        }
        if (outputParams == "-comp") {
            binaryInsertionSortCount(arr, n, InsertionComparisons, InsertionTime);
            cout << "Comparisons (if required): " << InsertionComparisons << endl;
        }
        if (outputParams == "-both") {
            binaryInsertionSortCount(arr, n, InsertionComparisons, InsertionTime);
            cout << "Comparisons (if required): " << InsertionComparisons << endl;
            cout << "Running time (if required): " << InsertionTime << " seconds\n";
        }
    }

    else if (algorithm == "LSD-radix-sort") {
        if (outputParams == "-time") {
            LSDradixSort(arr, n, RadixTime);
            cout << "Running time (if required): " << RadixTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            LSDradixSortCount(arr, n, RadixComparisons, RadixTime);
            cout << "Comparisons (if required): " << RadixComparisons << endl;
        }
        if (outputParams == "-both") {
            LSDradixSortCount(arr, n, RadixComparisons, RadixTime);
            cout << "Comparisons (if required): " << RadixComparisons << endl;
            cout << "Running time (if required): " << RadixTime << " seconds\n";
        }

    }

    else if (algorithm == "three-way-quick-sort") {
        if (outputParams == "-time") {
            basicThreeWayquicksort(arr, n, 0,QuickTime);
            cout << "Running time (if required): " << QuickTime << " seconds\n";
        }
        if (outputParams == "-comp") {
            ThreeWayquicksortCount(arr, n, QuickComparisons, QuickTime);
            cout << "Comparisons (if required): " << QuickComparisons << endl;
        }
        if (outputParams == "-both") {
            ThreeWayquicksortCount(arr, n, QuickComparisons, QuickTime);
            cout << "Comparisons (if required): " << QuickComparisons << endl;
            cout << "Running time (if required): " << QuickTime << " seconds\n";
        }

    }

    else {
            cout << "Unknown algorithm: " << algorithm << endl;
    }

   
}
void Condition_Comand4(string algorithm, string outputParams, int n, int* arr, double& time, long long& comparisons) {
    time = 0.0;
    comparisons = 0;

    if (algorithm == "bubble-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            basicBubbleSort(arr, n, time);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            basicBubbleSortCount(arr, n, comparisons, time);
        }
    }
    else if (algorithm == "shaker-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            basicShakerSort(arr, n, time);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            basicShakerSortCount(arr, n, comparisons, time);
        }
    }
    else if (algorithm == "heap-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            basicHeapSort(arr, n, time);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            basicHeapSortCount(arr, n, comparisons, time);
        }
    }
    else if (algorithm == "selection-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            selectionSort(arr, n, time);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            selectionSortCount(arr, n, comparisons, time);
        }
    }
    else if (algorithm == "insertion-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            insertionSort(arr, n, time);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            insertionSortCount(arr, n, comparisons, time);
        }
    }
    else if (algorithm == "merge-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            mergeSort(arr, n, time);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            mergeSortCount(arr, n, comparisons, time);
        }
    }
    else if (algorithm == "quick-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            QuickSort(arr, n, 0, n - 1, time);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            quickSortCount(arr, n, comparisons, time);
        }
    }
    else if (algorithm == "shell-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            shellSort(arr, n, time);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            shellSortCount(arr, n, comparisons, time);
        }
    }
    else if (algorithm == "counting-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            CountingSort(arr, n, time);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            CountingSortCount(arr, n, comparisons, time);
        }
    }
    else if (algorithm == "radix-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            RadixSort(arr, n, time);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            RadixSortCount(arr, n, comparisons, time);
        }
    }
    else if (algorithm == "flash-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            flashSort(arr, n, time);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            flashSortCount(arr, n, comparisons, time);
        }
    }
    else if (algorithm == "recursive-bubble-sort") {
        if (outputParams == "-time") {
            TimeRecursiveBubbleSort(arr, n, time);
        }
        if (outputParams == "-comp") {
            TimeRecursiveBubbleSortCount(arr, n,comparisons, time);
        }
        if (outputParams == "-both") {
            TimeRecursiveBubbleSortCount(arr, n, comparisons, time);
        }

    }

    else if (algorithm == "negative-counting-sort") {
        if (outputParams == "-time") {
            NegativeNumCountingSort(arr, n, time);
        }
        if (outputParams == "-comp") {
            NegativeNumCountingSortCount(arr, n, comparisons, time);
        }
        if (outputParams == "-both") {
            NegativeNumCountingSortCount(arr, n, comparisons, time);
            
        }
    }

    else if (algorithm == "optimized-bubble-sort") {
        if (outputParams == "-time") {
            optimizedBubbleSort(arr, n, time);
        }
        if (outputParams == "-comp") {
            optimizedBubbleSortCount(arr, n, comparisons,time);
        }
        if (outputParams == "-both") {
            optimizedBubbleSortCount(arr, n,comparisons, time);
            
        }
    }

    else if (algorithm == "inplace-merge-sort") {
        if (outputParams == "-time") {
            TimeInPlaceMergeSort(arr, n, time);
        }
        if (outputParams == "-comp") {
            TimeinplaceMergeSortCount(arr, n, comparisons, time);
        }
        if (outputParams == "-both") {
            TimeinplaceMergeSortCount(arr, n, comparisons, time);
        }
    }

    else if (algorithm == "floyd-heap-sort") {
        if (outputParams == "-time") {
            floydHeapSort(arr, n, time);
        }
        if (outputParams == "-comp") {
            floydHeapSortCount(arr, n, comparisons, time);
        }
        if (outputParams == "-both") {
            floydHeapSortCount(arr, n, comparisons, time);
        }
    }

    else if (algorithm == "brick-sort") {
        if (outputParams == "-time") {
                brickSort(arr, n, time);
        }
        if (outputParams == "-comp") {
                brickSortCount(arr, n, comparisons, time);
        }
        if (outputParams == "-both") {
            brickSortCount(arr, n, comparisons, time);
        }
    }

    else if (algorithm == "recursive-selection-sort") {
        if (outputParams == "-time") {
            TimeRecursiveSelectionSort(arr, n, time);
        }
        if (outputParams == "-comp") {
            TimeRecursiveSelectionSortCount(arr, n, comparisons, time);
        }
        if (outputParams == "-both") {
            TimeRecursiveSelectionSortCount(arr, n, comparisons, time);
            
        }
    }

    else if (algorithm == "binary-insertion-sort") {
        if (outputParams == "-time") {
            BinaryinsertionSort(arr, n, time);
        }
        if (outputParams == "-comp") {
            binaryInsertionSortCount(arr, n, comparisons,time);
        }
        if (outputParams == "-both") {
            binaryInsertionSortCount(arr, n, comparisons, time);
        }
    }

    else if (algorithm == "LSD-radix-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            LSDradixSort(arr, n, time);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            LSDradixSortCount(arr, n, comparisons, time);
        }
    }

    else if (algorithm == "three-way-quick-sort") {
        if (outputParams == "-time") {
            basicThreeWayquicksort(arr, n, 0, time);
        }
        if (outputParams == "-comp") {
            ThreeWayquicksortCount(arr, n, comparisons,time);
        }
        if (outputParams == "-both") {
            ThreeWayquicksortCount(arr, n, comparisons, time);
        }

     }

    else {
        cout << "Unknown algorithm: " << algorithm << endl;
    }
}

void ReadArrayFromFile(const string& filename, int*& arr, int& n) { 
    ifstream fin(filename);
    if (!fin) {
        cout << "Failed to open input file: " << filename << endl;
        return;
    }

    fin >> n;
    arr = new int[n]; 

    for (int i = 0; i < n; ++i) {
        fin >> arr[i];
    }

    fin.close();
}
void WriteArrayToFile(const string& filename, int* arr, int n) {
    ofstream fout(filename);
    if (!fout) {
        cout << "Failed to open output file: " << filename << endl;
        return;
    }

    fout << n << endl;
    for (int i = 0; i < n; ++i) {
        fout << arr[i] << " ";
    }
    fout.close();

}

void Comand1(string algorithm, string InputFile, string outputParams) {
    int n;
    int* arr;

    ReadArrayFromFile(InputFile, arr, n);


    cout << "Input size: " << n << endl;
    cout << "------------------------" << endl;
    double time = 0.0;
    long long comparisons = 0;
    Condition_Comand1(algorithm, outputParams, n, arr);
    WriteArrayToFile("output.txt", arr, n);

    delete[] arr;
}


// Hàm xử lý lệnh Command 2
void Comand2(string algorithm, string s, string order, string outputParams) {
    int n = stoi(s);
    int* arr = new int[n];

    
    if (order == "-rand") {
        GenerateData(arr, n, 0); // Random order
        cout << "Input order: Randomized Data" << endl;
        cout << "----------------------------------------" << endl;
    }
    else if (order == "-sorted") {
        GenerateData(arr, n, 1); // Sorted order
        cout << "Input order: Sorted Data" << endl;
        cout << "----------------------------------------" << endl;
    }
    else if (order == "-rev") {
        GenerateData(arr, n, 2);  // Reverse sorted order
        cout << "Input order: Reverse Sorted Data" << endl;
        cout << "----------------------------------------" << endl;
    }
    else if (order == "-nsorted") {
        GenerateData(arr, n, 3);  // Nearly sorted order
        cout << "Input order: Nearly Sorted Data" << endl;
        cout << "----------------------------------------" << endl;
    }
    else {
        cout << "Unknown data order: " << order << endl;
        delete[] arr;
        return;
    }

    double time = 0.0;
    long long comparisons = 0;
    WriteArrayToFile("input.txt", arr, n);

    Condition_Comand1(algorithm, outputParams, n, arr);

    WriteArrayToFile("output.txt", arr, n);

    delete[] arr;
}

void Command3(string algorithm, string s, string outputParams) {
    int n = stoi(s);
    int* arr = new int[n];

    GenerateData(arr, n, 0);  // Random order
    WriteArrayToFile("input_1.txt", arr, n);
    cout << "Input order: Randomized Data" << endl;
    cout << "----------------------------------------" << endl;
    Condition_Comand1(algorithm, outputParams, n, arr);
    cout << endl;

    GenerateData(arr, n, 3);  // Nearly sorted order
    WriteArrayToFile("input_2.txt", arr, n);
    cout << "Input order: Nearly Sorted Data" << endl;
    cout << "----------------------------------------" << endl;
    Condition_Comand1(algorithm, outputParams, n, arr);
    cout << endl;

    GenerateData(arr, n, 1);  // Sorted order
    WriteArrayToFile("input_3.txt", arr, n);
    cout << "Input order: Sorted Data" << endl;
    cout << "----------------------------------------" << endl;
    Condition_Comand1(algorithm, outputParams, n, arr);
    cout << endl;

    GenerateData(arr, n, 2);  // Reverse sorted order
    WriteArrayToFile("input_4.txt", arr, n);
    cout << "Input order: Reverse Sorted Data" << endl;
    cout << "----------------------------------------" << endl;
    Condition_Comand1(algorithm, outputParams, n, arr);

    delete[] arr;


}


void Command4(string algorithm1, string algorithm2, string InputFile) {
    int n;
    int* arr;

    ReadArrayFromFile(InputFile, arr, n);

    cout << "Input size: " << n << endl;
    cout << "------------------------" << endl;

    double time1, time2;
    long long comparisons1, comparisons2;

    int* arr_copy = new int[n];
    copy(arr, arr + n, arr_copy);

    Condition_Comand4(algorithm1, "-both", n, arr, time1, comparisons1);
    Condition_Comand4(algorithm2, "-both", n, arr_copy, time2, comparisons2);

    cout << "Running time (if required): " << time1 << " | " << time2 << endl;
    cout << "Comparisions (if required): " << comparisons1 << " | " << comparisons2 << endl;
    delete[] arr;
    delete[] arr_copy;
}

void Command5(string algorithm1, string algorithm2, string s, string order) {
    int n = stoi(s);
    int* arr = new int[n];

    double time1, time2;
    long long comparisons1, comparisons2;

    if (order == "-rand") {
        GenerateData(arr, n, 0); // Random order
        WriteArrayToFile("input.txt", arr, n);

        int* arr_copy = new int[n];
        copy(arr, arr + n, arr_copy);

        Condition_Comand4(algorithm1, "-both", n, arr, time1, comparisons1);
        Condition_Comand4(algorithm2, "-both", n, arr_copy, time2, comparisons2);

        cout << "Running time: " << time1 << " | " << time2 << endl;
        cout << "Comparisions: " << comparisons1 << " | " << comparisons2 << endl;
        delete[] arr;
        delete[] arr_copy;

    }
    else if (order == "-sorted") {
        GenerateData(arr, n, 1); // Sorted order
        WriteArrayToFile("input.txt", arr, n);

        int* arr_copy = new int[n];
        copy(arr, arr + n, arr_copy);

        Condition_Comand4(algorithm1, "-both", n, arr, time1, comparisons1);
        Condition_Comand4(algorithm2, "-both", n, arr_copy, time2, comparisons2);

        cout << "Running time: " << time1 << " | " << time2 << endl;
        cout << "Comparisions: " << comparisons1 << " | " << comparisons2 << endl;
        delete[] arr;
        delete[] arr_copy;
    }
    else if (order == "-rev") {
        GenerateData(arr, n, 2);  // Reverse sorted order
        WriteArrayToFile("input.txt", arr, n);

        int* arr_copy = new int[n];
        copy(arr, arr + n, arr_copy);

        Condition_Comand4(algorithm1, "-both", n, arr, time1, comparisons1);
        Condition_Comand4(algorithm2, "-both", n, arr_copy, time2, comparisons2);

        cout << "Running time: " << time1 << " | " << time2 << endl;
        cout << "Comparisions: " << comparisons1 << " | " << comparisons2 << endl;
        delete[] arr;
        delete[] arr_copy;
    }
    else if (order == "-nsorted") {
        GenerateData(arr, n, 3);  // Nearly sorted order
        WriteArrayToFile("input.txt", arr, n);

        int* arr_copy = new int[n];
        copy(arr, arr + n, arr_copy);

        Condition_Comand4(algorithm1, "-both", n, arr, time1, comparisons1);
        Condition_Comand4(algorithm2, "-both", n, arr_copy, time2, comparisons2);

        cout << "Running time: " << time1 << " | " << time2 << endl;
        cout << "Comparisions: " << comparisons1 << " | " << comparisons2 << endl;
        delete[] arr;
        delete[] arr_copy;
    }
    else {
        cout << "Unknown data order: " << order << endl;
        delete[] arr;
        return;
    }


}

int main(int argc, char* argv[]) {
    if (argc < 5 || argc > 6) {
        cout << "Usage for Command 1: " << argv[0] << " -a [Algorithm] [Input file] [Output param]" << endl;
        cout << "Usage for Command 2: " << argv[0] << " -a [Algorithm] [Input size] [Input order] [Output param]" << endl;
        cout << "Usage for Command 3: " << argv[0] << " -a [Algorithm] [Input size]  [Output parameter(s)]" << endl;
        cout << "Usage for Command 4: " << argv[0] << " -c [Algorithm1] [Algorithm2] [Input file]" << endl;
        cout << "Usage for Command 5: " << argv[0] << " -c [Algorithm1] [Algorithm2] [Input size] [Output param]" << endl;
        return 1;
    }

    string mode = argv[1];

    if (mode == "-a") {
        string algorithm = argv[2];
        if (argc == 5) {
            string input = argv[3];
            string outputParams1 = argv[4];

            if (input.find(".txt") != string::npos) {
                cout << "ALGORITHM MODE" << endl;
                cout << "Algorithm: " << algorithm << endl;
                cout << "Input file: " << input << endl;
                Comand1(algorithm, input, outputParams1);
            }
            else if (isdigit(input[0])) {
                // Command 3
                cout << "ALGORITHM MODE" << endl;
                cout << "Algorithm: " << algorithm << endl;
                cout << "Input size: " << input << endl;
                cout << endl;
                Command3(algorithm, input, outputParams1);
            }
            else {
                cout << "Invalid input: " << input << endl;
                return 1;
            }
        }
        else if (argc == 6) {
            string input = argv[3];
            string order = argv[4];
            string outputParams2 = argv[5];

            cout << "ALGORITHM MODE" << endl;
            cout << "Algorithm: " << algorithm << endl;
            cout << "Input size: " << input << endl;
            Comand2(algorithm, input, order, outputParams2);
        }
        else {
            cout << "Invalid number of arguments." << endl;
            return 1;
        }
    }
    else if (mode == "-c") {
        if (argc == 5) {
            string algorithm1 = argv[2];
            string algorithm2 = argv[3];
            string InputFile = argv[4];

            cout << "COMPARE MODE" << endl;
            cout << "Algorithm: " << algorithm1 << " | " << algorithm2 << endl;
            cout << "Input file: " << InputFile << endl;
            Command4(algorithm1, algorithm2, InputFile);

        }
        else if (argc == 6) {
            string algorithm1 = argv[2];
            string algorithm2 = argv[3];
            string inputSize = argv[4];
            string inputOrder = argv[5];

            cout << "COMPARE MODE" << endl;
            cout << "Algorithm: " << algorithm1 << " | " << algorithm2 << endl;
            cout << "Input size: " << inputSize << endl;
            cout << "Input order: " << inputOrder << endl;
            cout << "----------------------------------------" << endl;
            Command5(algorithm1, algorithm2, inputSize, inputOrder);
        }
        else {
            cout << "Invalid number of arguments for compare mode." << endl;
            return 1;
        }

    }
    else {
        cout << "Invalid mode: " << mode << endl;
        return 1;
    }

    return 0;
}

