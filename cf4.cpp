#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        vector<int>v;
        int k;
        for(int i=0;i<4;i++){
            cin>>k;
            v.push_back(k);
        }
        int a=max(v[0],v[1]);
        int b=max(v[2],v[3]);
        sort(v.begin(),v.end());
        if((a==v[3] || a==v[2]) && (b==v[3] || b==v[2])) {
                cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}