#include<iostream>
using namespace std;
int main(){
    //allocate space
    int *x = new int;
    *x = 10;
    cout<<*x<<endl;
    //free allocate space
    delete x;

    int n;
    cin>>n;
    //allocate dynamic array
    int *y = new int[n];
    for(int i=0;i<n;i++)
        cin>>y[i];
    for(int i=0;i<n;i++)
        cout<<y[i]<<" ";
    //free allocate space
    delete[] y;
}