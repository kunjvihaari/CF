#include<iostream>
using namespace std;

 int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int ans;
        int j=1;
        int i=1;
        while(i<=k){
           if(j%3!=0 && j%10!=3){
               ans=j;
               i++;
           }
           j++;
        }
        cout<<ans<<endl;
    }
    return 0;
 }