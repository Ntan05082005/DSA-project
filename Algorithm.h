#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
clock_t startTimer();
double stopTimer(clock_t start);


void basicBubbleSort(int arr[], int n, long long& comparisonCount);
void basicBubbleSort(int arr[], int n);


void cocktailSort(int arr[], int n, long long& comparisonCount);
void cocktailSort(int arr[], int n);

void recursiveCocktailSort(int arr[], int n, long long& comparisonCount);
void recursiveCocktailSort(int arr[], int n);

void basicHeapify(int arr[], int n, int i, long long* comparisonCount );
void basicHeapSort(int arr[], int n, long long& comparisonCount);
void basicHeapSort(int arr[], int n);


void basicShakerSort(int arr[], int n, long long& comparisonCount);
void basicShakerSort(int arr[], int n);



