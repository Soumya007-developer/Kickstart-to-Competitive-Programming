#include<iostream>
using namespace std;
//remove consecutive duplicate characters from a string
//ccoooding -- > coding


void removeDuplicates(char a[]) {

	int l = strlen(a);
	if (l == 1 or l == 0) {
		return;
	}

	int prev = 0;
	for (int current = 1; current < l; current++) {
		if (a[current] != a[prev]) {
			prev++;
			a[prev] = a[current];
		}
	}
	a[prev + 1] = '\0';
	return;
}

int main() {

	char a[1000];
	cin.getline(a, 1000);
	removeDuplicates(a);
	cout << a << endl;




	return 0;
}