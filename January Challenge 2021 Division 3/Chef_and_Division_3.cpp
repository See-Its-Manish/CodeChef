//Link: https://www.codechef.com/JAN21C/problems/DIVTHREE
#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--!=0){
		int n,k,d;
		cin>>n>>k>>d;			
		int sum=0;
		while(n--!=0){
			int ques;
			cin>>ques;
			sum+=ques;
		}	


		if((sum/k)>=d){
			cout<<d<<endl;
			continue;
		}
		else{
			cout<<(sum/k)<<endl;
			continue;
		}

	}

	return 0;
}