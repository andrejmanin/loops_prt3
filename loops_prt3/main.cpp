#include <iostream>
 
using namespace std;

int main() {
	int number, a, b;
	cout << "Enter range: ";
	cin >> a >> b;
	do {
		cout << "Enter a number: ";
		cin >> number;
		if (a > b) {
			if (number >= b && number <= a) {
				break;
			}
		}
		else if (a < b) {
			if (number >= a && number <= b) {
				break;
			}
		}
		else {
			if (number == a) {
				break;
			}
		}
		cout << "please enter number again." << endl;
	} while (true);
	cout << "Bye!" << endl;
	return 0;
}