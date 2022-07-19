#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,n,s;
    int a1,a2;
    cin>>t;
    while(t--){
      cin>>n;
      s=n;
      a1=s/3;
      a2=s/3;
      if(s%3==1){
          a1++;
      }
      else if(s%3==2){
          a2++;
      }
      cout<<a1<<" "<<a2<<endl;
      
    }
    return 0;
}