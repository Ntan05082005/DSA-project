#include "Algorithm.h"


void Comand1(string algorithm, string InputFile, string outputParams) {
    long long BubbleComparisons = 0;
    long long ShakerComparisons = 0;
    long long HeapComparisons = 0;

    double BubbleTime = 0.0;
    double ShakerTime = 0.0;
    double HeapTime = 0.0;
    int n;
    int* arr;

    ifstream fin(InputFile,ios::in);
    if (!fin) {
        cout << "Failed to open input file: " << InputFile << endl;
        return;
    }

    fin >> n;
    arr = new int[n];
    for (int i = 0; i < n; ++i) {
        fin >> arr[i];
    }
    fin.close();

    cout << "Input size: " << n << endl;
    cout << "------------------------" << endl;
    if (algorithm == "bubble-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            basicBubbleSort(arr, n, BubbleTime);
            cout << "Running time: " << BubbleTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comparison") {
            basicBubbleSortCount(arr, n, BubbleComparisons, BubbleTime);
            cout << "Comparisons: " << BubbleComparisons << endl;
        }
    }
    else if (algorithm == "shaker-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            basicShakerSort(arr, n, ShakerTime );
            cout << "Running time: " << ShakerTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comparison") {
            basicShakerSortCount(arr, n, ShakerComparisons, ShakerTime);
            cout << "Comparisons: " << ShakerComparisons << endl;
        }
    }
    else if (algorithm == "heap-sort") {
        if (outputParams == "-both" || outputParams == "-time") {
            basicHeapSort(arr, n, HeapTime);
            cout << "Running time: " << HeapTime << " seconds\n";
        }
        if (outputParams == "-both" || outputParams == "-comparison") {
            basicHeapSortCount(arr, n, HeapComparisons, HeapTime);
            cout << "Comparisons: " << HeapComparisons << endl;
        }
    }
    else {
        cout << "Unknown algorithm: " << algorithm << endl;
    }

    delete[] arr;
}

int main(int argc, char* argv[]) {
    if (argc != 5) {
        cout << "Usage: " << argv[0] << " -a [Algorithm] [InputFile] [Output parameter(s)]" << endl;
        return 1;
    }

    string mode = argv[1];
    string algorithm = argv[2];
    string InputFile = argv[3];
    string outputParams = argv[4];
    

    if (mode == "-a") {
        cout << "ALGORITHM MODE:" << endl;
        cout << "Algorithm: " << algorithm << endl;
        cout << "Input file: " << InputFile << endl;

        Comand1(algorithm, InputFile, outputParams);
    }
    else {
        cout << "Invalid mode: " << mode << endl;
        return 1;
    }
    return 0;
}

