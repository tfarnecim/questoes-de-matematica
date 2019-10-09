#include <bits/stdc++.h>
using namespace std;

int main(){

	long long n;

	cin >> n;

	int max = -1;

	int s = sqrt(n);

	for(int i=2;i<=s;i++){
		while(n%i==0){
			max = i;
			n = n/i;
		}
	}

	cout << max << endl;

	return 0;
}