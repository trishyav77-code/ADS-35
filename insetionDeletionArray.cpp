#include <iostream>
using namespace std;
//ascending order array priority queue deleting queue from beginning and inserting queue from end


void ArrayInsertion(vector<int> &arr, int i, int data){ 
    int N=arr.size();
    arr.push_back(0);
    for(int j=N-1;j>=0;j--){
        arr[j+1]=arr[j];

    }
    arr[i]=data;
}

void ArrayDeletion()
int main() {
}