#include<iostream>
using namespace std;
int sum1(int i,int sum){
    if(i==0)
        return sum;
    return sum1(i-1,sum+i);
}
int main(){
    int n=5;
    cout<<sum1(n,0);

}