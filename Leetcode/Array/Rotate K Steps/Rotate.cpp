// Rotate Array
// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		while (k--) {
			int val = nums.back();
			nums.insert(nums.begin(), val);
			nums.pop_back();
		}
	}
};

int main() {

	vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

	// Rotate by
	int d = 3;

	Solution().rotate(arr, d);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}