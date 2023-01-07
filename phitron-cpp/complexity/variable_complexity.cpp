#include<bits/stdc++.h>
using namespace std;
/*
time complexity
    1st step O(1)
    2nd step O(n)
    3rd step O(1)
    4th step O(n)
    5th step O(1)
    =O(1+n+1+n+1)=O(2n)=O(c*n)
    Here O(n) dominate over o(1)
space complexity
    int n => O(1)
    vector <int> a(n) => O(n)
    int maxi=a[0]; => O(1)
    int mini=a[0]; => O(1)
    int sum=0; => O(1)
    =O(1+n+1+1+1)=O(n)
*/
int main(){
    int n;
    //1st step
    cin>>n;
    vector <int> a(n);
    //2nd step
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //3rd step
    int maxi=a[0];
    int mini=a[0];
    int sum=0;
    //4th step
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
        sum+=a[i];
    }
    //5th step
    cout<<maxi<<endl;
    cout<<mini<<endl;
    cout<<sum<<endl;
}