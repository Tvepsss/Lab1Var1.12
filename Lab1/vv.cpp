#include <iostream>

using namespace std;

void vvod(double m[],int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "������� " << i + 1 << " ������� ������" << endl;
		cin >> m[i];
	}
};
void vivod(double m[], double m2[], int n, int drob) {
	cout << " "<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << " ������� ������� ������ =  " << m[i] << endl;
	}
	cout << " "<< endl;
	if (drob > 0) {
		for (int i = 0; i < n; i++)
		{
			cout << i + 1 << " ������� ������ ������ =  " << m2[i] << endl;
		}
	}
};