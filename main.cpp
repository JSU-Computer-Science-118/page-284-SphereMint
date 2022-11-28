//Gannon Moore J00965925 11-28-2022

#include <iostream>
using namespace std;

int main() {

	int randCount;
	cin >> randCount;

	while (randCount > 0) {
		cout << (rand() % 100) + 1 << endl;
		randCount--;
	}
}
