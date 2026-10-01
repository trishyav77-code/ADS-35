#include <iostream>
using namespace std;
int i=1;
void TOH(int  n,char S,char M,char D){
    if(n==1)
    cout<<i++<<" "<<S<<"-->"<<D<<endl;
    else{
    TOH(n-1,S, D, M);
    cout<<i++<<" "<<S<<"-->"<<D<<endl;
     TOH(n-1,M, S, D);
    }
}
int main(){
    TOH(5,'S','M','D');
    return 0;

}