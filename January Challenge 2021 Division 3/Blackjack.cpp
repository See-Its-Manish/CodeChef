//Link : https://www.codechef.com/JAN21C/problems/BLKJK
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--!=0){

		int n,x,y;
		cin>>n>>x>>y;

		vector<int> v(n,0);

		while(n--!=0){
			int m;
			cin>>m;
			v.push_back(m);
		}

		if(v[0]>=x && v[0]<=y){		// if 1st element is the one
			cout<<0<<endl;
			continue;
		}



	}

	return 0;
}