#include <iostream>
#include <string>

using namespace std;

int main() {
	unsigned whiteCaps = 0;
	string in;
	for (int i = 0; i < 100; i++) {
		cin >> in;
		if (in == "WHITE") whiteCaps++;
	}
	unsigned countOfLostGnomes = 0;
	if (whiteCaps % 2 != 0 && in == "BLACK" || whiteCaps % 2 == 0 && in == "WHITE") countOfLostGnomes = 1;
	cout << countOfLostGnomes;
	return 0;
}