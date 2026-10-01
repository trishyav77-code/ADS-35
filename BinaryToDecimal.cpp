#include <iostream>
using namespace std;
void DecimalToBinary(int n){
    if(n>0){
        DecimalToBinary(n/2);
        cout<<n%2;

        
    }
}
int main(){
    int n=19;
    DecimalToBinary(n);
    return 0;
}