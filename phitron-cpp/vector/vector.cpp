#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
    for(int i=0;i<10;i++)
        //push element one by one
        a.push_back(i);
    //insert element in specific position
    a.insert(a.begin()+2,20);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<endl<<endl;
    //delete element from specific position
    a.erase(a.begin()+3);
    //delete one from the end
    a.pop_back();
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<endl<<endl;
    //resize array size
    a.resize(4);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<endl;

}