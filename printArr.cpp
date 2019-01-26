#include <bits/stdc++.h>
using namespace std;

void printArr(int a[], const int& n, int beg = 0) {
	if(beg == n) {
		cout<<endl;
		return;
	}

	cout<<a[beg]<<' ';
	printArr(a, n, beg + 1);
}

int main() {
	freopen("printArrIn.txt", "r", stdin);
	freopen("printArrOut.txt", "w", stdout);
	int t;
	cin >> t;

	while(t--) {

		int n;
		cin >> n;

		int a[n];

		for(int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		printArr(a, n);
	}
}