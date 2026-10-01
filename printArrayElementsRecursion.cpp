#include <iostream>
#include <vector>
using  namespace std;
// Function to print elements of an array using recursion
void PrintElements(vector<int>&arr,int i){
    if(i<arr.size()){
        cout<<arr[i]<<" ";
        PrintElements(arr,i+1);


    }
    return ;
}
//function to print elements of an array in reverse using recursion
void PrintElementsReverse(vector<int>&arr,int i){
    if(i<arr.size()){
        PrintElementsReverse(arr,i+1);
        cout<<arr[i]<<" ";
    }
    return ;
}
int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);   
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(9);
    PrintElements(arr,0);
    cout<<endl;
    PrintElementsReverse(arr,0);
}

