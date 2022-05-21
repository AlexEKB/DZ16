#include <iostream>
#include <algorithm>

using namespace std;


int meanValue(int a, int b) {
	int c;
	c = (a + b) / 2;
	return c;
}


int arrMeanValue(int array[], int lenght) {
	int sum = 0;
	for (int i = 0; i < lenght; i++)
		sum += array[i];
	return sum / lenght;
}

void powers(int n, int m) {

	cout << "[1, ";
	int res = 1;
	for (int i = 0; i < m; i++) {
		res *= n;
		cout << res << ", ";
	}
	cout << "\b\b].\n";
}


int main() {
	setlocale(LC_ALL, "Russian");


	//������ 1
	cout << "������ 1.\n";
	cout << "������� �������������� ���������� �� ���� ���������: " << meanValue(4, 10) << endl;

	//������ 2
	cout << "������ 2.\n";
	int arr[9] = { 35,-51, 112, 70, 0, 16, 21, 84, 12 };
	cout << "������� �������������� �������: " << arrMeanValue(arr, 9) << endl;

	//������ 3
	cout << "������ 3.\n";
	powers(4, 5);


	return 0;
}