#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    //int c=0,temp;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int pass=0;pass<n;pass++){
        int last = n-1-pass;
        for(int j=0;j<=last-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
            // c++;
        }
        // for(int j=pass+1;j<n;j++){
        //     if(a[pass]>a[j]){
        //         temp=a[j];
        //         a[j]=a[pass];
        //         a[j]=temp;
        //     }
        //     c++;
        // }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    // cout<<endl<<c;
}
