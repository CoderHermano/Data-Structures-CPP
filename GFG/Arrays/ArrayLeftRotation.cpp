// Print left rotation of array in O(n) time and O(1) space
#include<bits/stdc++.h>
using namespace std;

// Function to left rotate array multiple times
void leftRotateArray(int arr[], int n, int d) {

	// To get the starting point of rotated array
	int mod = d % n;

	// Prints the rotated array from start position
	for (int i = 0; i < n; i++)
	{
		cout << (arr[(mod + i) % n]) << " ";
	}

	cout <<  "\n";
}

int main() {

	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);

	int d = 2;
	leftRotateArray(arr, n, d);

	d = 3;
	leftRotateArray(arr, n, d);

	d = 4;
	leftRotateArray(arr, n, d);

	d = 12;
	leftRotateArray(arr, n, d);

	return 0;
}