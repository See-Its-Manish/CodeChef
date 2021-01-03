//Link : https://www.codechef.com/JAN21C/problems/FAIRELCT
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--!=0){
	    
	    int n,m,sum1,sum2;
	    sum1=sum2=0;
	   cin>>n>>m;
	   vector<int> v1; v1.reserve(n);
	   vector<int> v2; v2.reserve(m);
	   while(n--!=0){
	       int n1;
	       cin>>n1;
	       v1.push_back(n1);
	       sum1+=n1;
	   }
	   while(m--!=0){
	       int m1;
	       cin>>m1;
	       v2.push_back(m1);
	       sum2+=m1;
	   }
	   
	   if(sum1==0 && sum2==0){
	       cout<<-1<<endl;
	       continue;
	   }
	   
	   if(sum1>sum2){
	       cout<<0<<endl;
	       continue;
	   }
	  
	   sort(v1.begin(),v1.end());
	   sort(v2.begin(),v2.end());
	   int i=0;
	   int j=v2.size()-1;
	   int swaps=0;
	   bool notPossible=false;
	   while(sum2>=sum1){
	       if(i>v1.size()-1){
	           notPossible=true;
	           break;
	       }
	       swaps++;
	       int temp1=v1[i];
	       int temp2=v2[j];
	       v1[i++]=temp2;
	       v2[j--]=temp1;
	       sum1+=temp2-temp1;
	       sum2+=temp1-temp2;
	   }
	   
	   if(notPossible){
	       cout<<-1<<endl;
	       continue;
	   }
	   
	   cout<<swaps<<endl;

	 
	    
	}

	return 0;
}