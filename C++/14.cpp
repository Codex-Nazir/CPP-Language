//Switch statement
/*switch(num) {
    case1:(____________)
	case2:(____________)
	default:cout <<"invalid";
	}
*/

#include<iostream>
using namespace std;

int main() {

	int exit;
	char N;
	cout << "Enter the character from [A-F]: ";
	cin >> N;

	switch (N) {
	case 'A':cout << "outstanding"<<endl; break;
	case 'B':cout << "excellent"<<endl;break;
	case 'C':cout << "very good"<<endl;break;
	case 'D':cout << "good"<<endl;break;
	case 'E':cout << "average"<<endl;break;
	case 'F':cout << "fail"<<endl;break;
	default:cout << "invalid input"<<endl;
	}
	cout << "type exit...." << endl;
	cin >> exit;
	return 0;
}