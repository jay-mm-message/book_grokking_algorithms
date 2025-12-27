#include <iostream>
using namespace std;

void count_down(int v) {
	if (v >= 0) {
		cout << v << ' ';
		return count_down(--v);
	}
	return;
}

int main(void) {
	count_down(5);
	cout << endl;
	return 0;
}