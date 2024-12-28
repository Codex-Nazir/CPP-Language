//do while loop (Exit controlled loop)

#include<iostream>
using namespace std;

int main() {
	int n, i = 1, fact = 1;
	cout << "Enter the number : ";
	cin >> n;
	do {
		fact = fact * i;
		i++;
	} while (i<=n);
	cout << "Factorial : " << fact;
	return 0;
}