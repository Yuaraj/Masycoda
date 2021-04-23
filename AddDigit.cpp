#include<bits/stdc++.h>
using namespace std;

int main(){
	cout <<"Input:";
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	if(n%9 == 0) {
		cout << "9\n";
	}
	else {
		cout << (n%9) << '\n';
	}
	return 0;
}
