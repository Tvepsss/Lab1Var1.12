#include <iostream>

using namespace std;

void vvod(double m[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "������� " << i + 1 << " ������� ������" << endl;
		cin >> m[i];
	}
};
void vivod(double m[], int n) {
	cout << " "<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << " ������� ������� ������ =  " << m[i] << endl;
	}
	cout << " "<< endl;
};