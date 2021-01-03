//Link: https://www.codechef.com/JAN21C/problems/DECODEIT
#include <bits/stdc++.h>
using namespace std;


vector<int> sta(string s){
	vector<int> v;
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='0'){
			v.push_back(0);
		}
		else{
			v.push_back(1);
		}
	}
	//reverse(v.begin(),v.end());
		return(v);

}

char ntc(int n){
    int i=0;
    char ch[16];
    for(char c='a';c<='p';c++){
        ch[i++]=c;
    }
    return(ch[n]);
    
    
}

int main() {
    int t;
    cin>>t;
    
    while(t--!=0){
        int s;
        cin>>s;
        string n;
        cin>>n;
        
        vector<int> v=sta(n);
          vector<char> c;
        
        for(int i=0;i<(s/4);i++){
        
               int sum=0;
               int k=3;
              
               
            for(int j=0;j<4;j++){
                if(v[k+(i*4)]==1){
                    sum+=pow(2,j);
                }
                k--;
            }
            cout<<(ntc(sum));
               
        }
       
        
        cout<<endl;
        
    }
	
	return 0;
}
