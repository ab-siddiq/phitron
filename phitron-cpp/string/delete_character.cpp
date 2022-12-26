#include<iostream>
using namespace std;
int main(){
    string s="i am a programmer";
    //delete last character
    s.pop_back();
    //delete specific character
    s.erase(s.begin()+1);
    cout<<s;
}