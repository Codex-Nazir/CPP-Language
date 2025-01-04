//sttring program  

#include<iostream>
#include<string>
using namespace std;

int main() {

	char grade ;
	string name ;

	cout << "Enter thhe name: ";
	getline(cin, name);
	cout << "Enter the grade: ";
	cin >> grade;
	cout << endl << "Name: " << name;
	cout << endl << "Garde : " << grade;

	return 0;
}