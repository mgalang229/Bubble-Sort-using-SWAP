#include <bits/stdc++.h>
using namespace std;

typedef long long ll;	

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[] = {1,3,8,2,9,2,5,6};
	int n = sizeof(a)/sizeof(a[0]);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-1; j++){
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}
