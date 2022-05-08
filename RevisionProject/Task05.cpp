#include "Header.h"

int nextEvenNumber(int number) {
	return number + 2 - number % 2;
}

int main() {
	/*int n;
	int k;

	cout << "Int number of squirrels: ";
	cin >> n;

	cout << "Int number of nuts: ";
	cin >> k;*/

	cout << (nextEvenNumber(2) == 6 ? "Well done!" : "Something was wrong!") << endl;

	return 0;
}