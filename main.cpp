#include "Algorithm.h"
#include "Data.h"

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
        if (outputParams == "-both" || outputParams == "-time") {
            basicBubbleSort(arr, n, BubbleTime);
            cout << "Running time (if required): " << BubbleTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            basicBubbleSortCount(arr, n, BubbleComparisons, BubbleTime);
            cout << "Comparisons (if required): " << BubbleComparisons << endl;
        }
    }
    else if (algorithm == "shaker-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            basicShakerSort(arr, n, ShakerTime);
            cout << "Running time (if required):  " << ShakerTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            basicShakerSortCount(arr, n, ShakerComparisons, ShakerTime);
            cout << "Comparisons (if required): " << ShakerComparisons << endl;
        }
    }
    else if (algorithm == "heap-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            basicHeapSort(arr, n, HeapTime);
            cout << "Running time (if required): " << HeapTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            basicHeapSortCount(arr, n, HeapComparisons, HeapTime);
            cout << "Comparisons (if required): " << HeapComparisons << endl;
        }
    }
    else if (algorithm == "selection-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            selectionSort(arr, n, SelectionTime);
            cout << "Running time (if required): " << SelectionTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            selectionSortCount(arr, n, SelectionComparisons, SelectionTime);
            cout << "Comparisons (if required): " << SelectionComparisons << endl;
        }

    }
    else if (algorithm == "insertion-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            insertionSort(arr, n, InsertionTime);
            cout << "Running time (if required): " << InsertionTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            insertionSortCount(arr, n, InsertionComparisons, InsertionTime);
            cout << "Comparisons (if required): " << InsertionComparisons << endl;
        }

    }
    else if (algorithm == "merge-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            mergeSort(arr, n, MergeTime);
            cout << "Running time (if required): " << MergeTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            mergeSortCount(arr, n, MergeComparisons, MergeTime);
            cout << "Comparisons (if required): " << MergeComparisons << endl;
        }

    }
    else if (algorithm == "quick-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            QuickSort(arr, n, 0, n - 1, QuickTime);
            cout << "Running time (if required): " << QuickTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            quickSortCount(arr, n, QuickComparisons, QuickTime);
            cout << "Comparisons (if required): " << QuickComparisons << endl;
        }

    }
    else if (algorithm == "shell-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            shellSort(arr, n, ShellTime);
            cout << "Running time (if required): " << ShellTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            shellSortCount(arr, n, ShellComparisons, ShellTime);
            cout << "Comparisons (if required): " << ShellComparisons << endl;
        }

    }
    else if (algorithm == "counting-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            CountingSort(arr, n, CountingTime);
            cout << "Running time (if required): " << CountingTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            CountingSortCount(arr, n, CountingComparisons, CountingTime);
            cout << "Comparisons (if required): " << CountingComparisons << endl;
        }

    }
    else if (algorithm == "radix-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            RadixSort(arr, n, RadixTime);
            cout << "Running time (if required): " << RadixTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            RadixSortCount(arr, n, RadixComparisons, RadixTime);
            cout << "Comparisons (if required): " << RadixComparisons << endl;
        }

    }
    else if (algorithm == "flash-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            flashSort(arr, n, FlashTime);
            cout << "Running time (if required): " << FlashTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            flashSortCount(arr, n, FlashComparisons, FlashTime);
            cout << "Comparisons (if required): " << FlashTime << endl;
        }

    }

    else {
        cout << "Unknown algorithm: " << algorithm << endl;
    }
}
void Condition_Comand4(string algorithm, string outputParams, int n, int* arr, double& time, long long& comparisons) {
    time = 0.0;
    comparisons = 0;

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
        if (outputParams == "-both" || outputParams == "-time") {
            basicBubbleSort(arr, n, BubbleTime);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            basicBubbleSortCount(arr, n, BubbleComparisons, BubbleTime);
        }
    }
    else if (algorithm == "shaker-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            basicShakerSort(arr, n, ShakerTime);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            basicShakerSortCount(arr, n, ShakerComparisons, ShakerTime);
        }
    }
    else if (algorithm == "heap-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            basicHeapSort(arr, n, HeapTime);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            basicHeapSortCount(arr, n, HeapComparisons, HeapTime);
        }
    }
    else if (algorithm == "selection-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            selectionSort(arr, n, SelectionTime);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            selectionSortCount(arr, n, SelectionComparisons, SelectionTime);
        }

    }
    else if (algorithm == "insertion-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            insertionSort(arr, n, InsertionTime);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            insertionSortCount(arr, n, InsertionComparisons, InsertionTime);
        }

    }
    else if (algorithm == "merge-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            mergeSort(arr, n, MergeTime);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            mergeSortCount(arr, n, MergeComparisons, MergeTime);
        }

    }
    else if (algorithm == "quick-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            QuickSort(arr, n, 0, n - 1, QuickTime);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            quickSortCount(arr, n, QuickComparisons, QuickTime);
        }

    }
    else if (algorithm == "shell-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            shellSort(arr, n, ShellTime);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            shellSortCount(arr, n, ShellComparisons, ShellTime);
        }

    }
    else if (algorithm == "counting-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            CountingSort(arr, n, CountingTime);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            CountingSortCount(arr, n, CountingComparisons, CountingTime);
        }

    }
    else if (algorithm == "radix-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            RadixSort(arr, n, RadixTime);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            RadixSortCount(arr, n, RadixComparisons, RadixTime);
        }

    }
    else if (algorithm == "flash-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            flashSort(arr, n, FlashTime);
        }
        if (outputParams == "-both" || outputParams == "-comp") {
            flashSortCount(arr, n, FlashComparisons, FlashTime);
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
int main(int argc, char* argv[]) {
    if (argc < 5 || argc > 6) {
        cout << "Usage for Command 1: " << argv[0] << " -a [Algorithm] [InputFile] [Output parameter(s)]" << endl;
        cout << "Usage for Command 2: " << argv[0] << " -a [Algorithm] [InputSize] [Order] [Output parameter(s)]" << endl;
        cout << "Usage for Command 4: " << argv[0] << " -c [Algorithm1] [Algorithm2] [InputFile] [Output parameter(s)]" << endl;
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

