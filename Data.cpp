#include "Data.h"


void GettingData() {
	int n;
	int order;
	cout << "n: ";
	cin >> n;
	cout << "Chon 0 de tao mang ngau nhien\nChon 1 de tao mang co thu tu\nChon 2 de tao mang co thu tu nguoc\nChon 3 de tao mang gan nhu co thu tu\n";
	cout << "Chon cach: ";
	cin >> order;


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