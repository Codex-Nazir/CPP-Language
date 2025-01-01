//One Dimensional Array

#include<iostream>
using namespace std;

int main() {

	int Num[100], N, i, Max = 0;
	cout << "How many numbers you want to enter: ";
	cin >> N;
	cout << "Please Enter" << N << " Numbers : ";
	for (i = 0;i < N;i++) {
		cin >> Num[i];
		if (Num[i] > Max)
			Max = Num[i];
	}
	cout << "Greatest Number is: " << Max;
	
	return 0;
}