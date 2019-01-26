#include <bits/stdc++.h>
using namespace std;

int numTrucks(int numCrates, int loadSize) {
	if(numCrates <= loadSize) {
		return 1;
	}
	//cout<<numCrates<<" "<<loadSize<<endl;
	return numTrucks(numCrates/2, loadSize) 
		+ numTrucks(numCrates - (numCrates/2), loadSize);
}

int main() {
	freopen("trucks.in", "r", stdin);
	freopen("trucks.out", "w", stdout);
	int t;
	cin >> t;

	while(t--) {
		int numCrates, loadSize;
		cin >> numCrates >> loadSize;

		cout<<numTrucks(numCrates, loadSize)<<endl;

	}
}