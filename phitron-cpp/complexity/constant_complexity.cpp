#include<bits/stdc++.h>
using namespace std;
/*
    1. here time complexity is O(1). Becuase each variable is contant. Varialbe values are always fixed.
    2. here space complexity is also O(1).
*/
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int maxi = max({a,b,c});
    int mini = min({a,b,c});
    int mul = a*b*c;
    cout<<"max: "<<maxi<<endl;
    cout<<"min: "<<mini<<endl;
    cout<<"mul: "<<mul<<endl;
}
