#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> a;
    int n,ans=0;
    cin>>n;
    a.resize(n);
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(i==0){
            ans++;
            continue;
        }
        if(a[i]!=a[i-1])
            ans++;
    }
    cout<<ans;
}
