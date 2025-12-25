#include <iostream>
using namespace std;

int binary_search(vector<int> vec, unsigned short item) {
	int left = 0;
	int right = vec.size() - 1;

	while(left < right) {
		int mid = (left + right) / 2;
		int guess = vec[mid];
		if (item > guess) {
			left = mid + 1;
		} else if (item < guess) {
			right = mid - 1;
		} else {
			return mid;
		}
	}
	return -1; // not exist
}

int main() {
	vector<int> vec{1, 3, 5, 7, 9};
	int ret;
	int item = 5;
	ret = binary_search(vec, item);
	if (ret != -1) {
		cout << "found out: " << item 
			<< " , index is " << ret << endl;
	} else {
		cout << "not exist. " << endl;
	}
	return 0;
}