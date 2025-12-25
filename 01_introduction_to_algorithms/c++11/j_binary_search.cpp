#include <iostream>
using namespace std;

int binary_search(vector<int> vec, unsigned short item
		, unsigned int &step_cnt) {
	int left = 0;
	int right = vec.size() - 1;

	while(left <= right) {
		++step_cnt;

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
	unsigned int size = 256;
	vector<int> vec(size);
	for(int i = 0 ; i < size ; ++i) {
		vec.push_back(i + 1);
	}
	unsigned int ret;
	unsigned int item = 29;
	unsigned int step_cnt = 0;
	ret = binary_search(vec, item, step_cnt);
	if (ret != -1) {
		cout << "found out: " << item 
			<< " , index is " << ret
			<< ", total step: " << step_cnt
			<< endl;
	} else {
		cout << "not exist. " << endl;
	}
	return 0;
}