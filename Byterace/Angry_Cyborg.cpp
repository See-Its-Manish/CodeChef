//Link: https://www.codechef.com/problems/AGCY
#include<bits/stdc++.h>
using namespace std;


int main(){

	int t;
	cin>>t;

	while(t--!=0){
		int n,q;
		cin>>n>>q;

		vector<int> v;
		v.assign(n,0);

		while(q--!=0){

			int l,r;
			cin>>l>>r;
			int toFill=1;

			for(int i=l-1;i<r;i++){
				v[i]=toFill++;
			}

		}

		for
			(int n:v){
				cout<<n<<" ";
			}

			cout<<endl;


	}



	return 0;
}