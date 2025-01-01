#include<iostream>
using namespace std;

int main() {

	int m1[3][2], m2[3][2], sum[3][2], i, j;
	cout << "Enter the elements of matrix m1:" << endl;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 2;j++)
		{
			cin >> m1[i][j];
		}
	}
	cout << "Enter the elements of matrix m2: " << endl;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 2;j++)
		{
			cin >> m2[i][j];
			sum[i][j] = m1[i][j] + m2[i][j];
		}
	}
	cout << endl << "Sum of matrix m1 and m2:" << endl;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 2;j++)
		{
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}