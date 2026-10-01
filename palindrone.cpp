#include <iostream>
using namespace std;
bool palindrone(int i,string s){
    if(i>=s.length()/2)
    return true;
    if(s[i]!=s[s.length()-i-1])//careful about the index of string
    return false;
    return palindrone(i+1,s);
}
int main(){
    string s="madam";

     
    cout<<palindrone(0,s);
}