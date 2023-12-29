#include <bits/stdc++.h>
using namespace std;

vector<int> s(int nums[], int &target) {
	vector<int> a(nums, nums + 4);
	unordered_map<int, int>m;
	unordered_map<int, int>::iterator it;
	for (int i = 0; i < a.size(); i++) {
		it = m.find(target - nums[i]);
		if (it != m.end()) {
			return {this->second, i};
		}
	}
	return{};
}

int main() {
	int nums[] = {2, 7, 11, 15};
	int target = 9;
	s(nums, target);
	return 0;
}