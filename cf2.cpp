#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
   
    cin>>t;
    while(t--){
        cin>>n;
        int e=0,o=0;
        for(int i=0;i<n*2;i++){
            cin>>k;
            // arr[i]=k;
             if(k%2==0){
            e++;
           }
           else{
            o++;
           }
            
        }
       
       
        if(e==o){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }


    return 0;
}