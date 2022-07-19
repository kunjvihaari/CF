#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        double ans=0.0;
        int i=0;
        int x=m-1;
        while(x--){
            ans+=arr[n-1-i];
            i++;
        }
        
          if((n-m+1)%2!=0){
            ans+=(double(arr[(n-m+1)/2]));
        }
        else{
            ans+=(double(arr[(n-m)/2]+arr[(n-m+1)/2])/2);
        }
        
        
        cout<<fixed<<setprecision(1)<<ans<<endl;
    }
    return 0;
}