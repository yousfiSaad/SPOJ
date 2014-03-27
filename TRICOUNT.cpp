//	yousfi.saad@gmail.com
//  www.spoj.com/problems/TRICOUNT/

#include<iostream>
long long res[1000001];
long long ht
		, ma
		, i;
using namespace std;
int main(){
	res[0] = 1;
	for(int h = 2; h <= 1000001; ++h){
		i = h-1;
		res[i] = res[i-1];
		res[i] += h;
		ht = h-1;
		res[i] += ht*(ht+1)/2;
		if (ht % 2) {
			ma = (ht + 1) / 2;
			res[i] += ma;
			res[i] += ma * (ma - 1);
		} else {
			res[i] += (ht/2 * (ht/2 + 1));
		}
	}
	int T;
	cin>>T;
	int N;
	for(int i = 0; i<T; ++i){
		cin>>N;
		cout<<res[N-1]<<endl;
	}
	return 0;
}
