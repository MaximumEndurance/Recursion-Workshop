#include <bits/stdc++.h>
using namespace std;

int wine(int arr[], int beg, int end, int year = 1) {
	if(beg > end) {
		return 0;
	}
	//cout<<"year "<<year<<endl;
	int case1 = year * arr[beg] + wine(arr, beg+1, end , year + 1);
	int case2 = year * arr[end] + wine(arr, beg, end-1 , year + 1);
	//cout<<case1<<' '<<case2<<endl;
	return max(case1, case2);
}

int main() {
	freopen("wine-in.txt", "r", stdin);
	freopen("wine-out.txt", "w", stdout);
	int t;
	cin >> t;

	while(t--) {

		int n;
		cin >> n;

		int a[n];

		for(int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		cout<<wine(a, 0, n-1)<<endl;
	}
}