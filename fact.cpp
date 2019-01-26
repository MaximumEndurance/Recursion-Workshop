#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fact(ll n) {
	if(n == 1) {
		return 1;
	}	
	return n*fact(n-1);
}

int main() {
	freopen("fact-in.txt", "r", stdin);
	freopen("fact-out.txt", "w", stdout);

	int t;
	cin >> t;

	while(t--) {
		ll n;
		cin >> n;

		cout<<fact(n)<<endl;
	}
}