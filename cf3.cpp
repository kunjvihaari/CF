#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t,n,k;
    
    cin>>t;
    while(t--){
    cin>>n;
    int s=0;
    for(int i=0;i<n;i++){
        cin>>k;
        s+=k;
    }
    int diff=s-n;
    if(diff==0){
      cout<<0<<endl;
    }
    else if(diff>0){
        cout<<diff<<endl;
    }
    else cout<<1<<endl;
    }
    return 0;
 }