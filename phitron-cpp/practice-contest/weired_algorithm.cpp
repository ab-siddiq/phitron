#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while (1)
    {
        cout<<n<<" ";
       if(n==1) return 0;
        else if(n%2==0)
            n=n/2;
        else if(n%2!=0)
            n = (n*3)+1;
        
    }
    
}