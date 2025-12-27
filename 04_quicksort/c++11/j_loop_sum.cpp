#include <iostream>
using namespace std;

int sum(vector<int> vec) {
	int ret = 0;
	for(int n : vec) {
		ret += n;
	}
	return ret;
}

void p(vector<int> vec) {
	for(int n : vec) {
		cout << n << ' ';
	}
	cout << endl << endl;
}

int main() {
	vector<int> vec{1, 2, 3, 4, 5};
	p(vec);
	cout << sum(vec) << endl;
	return 0;
}