#include "Header.h"

int calculateHowManyNuts(int squirrel, int nut) {
	return nut % squirrel;
}

int main() {
	/*int n;
	int k;

	cout << "Int number of squirrels: ";
	cin >> n;

	cout << "Int number of nuts: ";
	cin >> k;*/

	cout << (calculateHowManyNuts(3, 14) == 2 ? "Well done!" : "Something was wrong!") << endl;

	return 0;
}