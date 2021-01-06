#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
	freopen("bsinput.txt", "r", stdin);
	freopen("bsoutput.txt", "w", stdout);
#endif

	char array[6];

	for (int i = 0; i < 6; i++)
	{
		cin >> array[i];
	}

	for (int i = 5; i >= 1; --i)
	{
		cout << array[i] << endl;
	}

	return 0;
}