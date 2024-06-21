#include "Data.h"


void GettingData(int n,int order) {
	

	ofstream fileName("input.txt");

	if (!fileName)
	{
		cout << "Error opening file" << endl;
		return;
	}


	int* arr = new int[n];
	GenerateData(arr, n, order);
	fileName << n << endl;
	for (int i = 0; i < n; i++)
	{
		fileName << arr[i] << " ";
	}

	fileName.close();
	delete[] arr;

}