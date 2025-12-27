#include <iostream>
using namespace std;

int sum(vector<int> vec) {
	if (vec.size() == 0)
		return 0;
	cout << vec[0] << endl;
	vector<int> vvec(vec.begin() + 1, vec.end());
	return vec[0] + sum(vvec);
}

int main() {
	vector<int> vec{1, 2, 3, 4, 5, 6};
	int ret = sum(vec);
	cout << ret << endl << endl;
	return 0;
}