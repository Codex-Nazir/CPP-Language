//if......else statement

#include<iostream>
using namespace std;

int main()
{
	int n1, n2;
	cout << "Enter two number : ";
	cin >> n1 >> n2;
	if (n1 > n2) {
		cout << n1 << " is greater : ";
	}
	else {
		cout << n2 << " is greater : ";
	}
	return 0;
}