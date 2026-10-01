#include <iostream>
#include <vector>
using namespace std;
void Traverse(vector<int>C){
    for(auto i:C){
        cout<<i<<" ";
    }
}

void mergeArray(vector<int>A, vector<int>B) {
    vector<int>C;
    int m=A.size();
    int n=B.size();
    int i=0;
    int j=0;

    while(i<m&&j<n){
        if(A[i]<B[j]){

            C.push_back(A[i]);
            i++;
        }
        else{
            C.push_back(B[j]);;
            j++;
        }
    }
    while(i<m){
    C.push_back(A[i]);
    i++;

    }
    while(j<n){
        C.push_back(B[j]);
        j++;
    }
     Traverse(C);
}
void UnionArray(vector<int>A, vector<int>B){
    vector<int>C;
    int m=A.size();
    int n=B.size();
     int i=0;
    int j=0;

    while(i<m&&j<n){
        if(A[i]<B[j]){

            C.push_back(A[i]);
            i++;
        }
        else if(A[i]==B[j]){
            C.push_back(A[i]);
            i++;
            j++;

        }
        else{
            C.push_back(B[j]);;
            j++;
        }
    }
    while(i<m){
    C.push_back(A[i]);
    i++;

    }
    while(j<n){
        C.push_back(B[j]);
        j++;
    }
     Traverse(C);
}
void IntersectionArray(vector<int>A, vector<int>B){
    vector<int>C;
    int m=A.size();
    int n=B.size();
     int i=0;
    int j=0;

    while(i<m&&j<n){
        if(A[i]<B[j]){

            i++;
        }
        else if(A[i]==B[j]){
            C.push_back(A[i]);
            i++;
            j++;

        }
        else{
            j++;
        }
    }
     Traverse(C);
}
void DifferenceArrayAminusB(vector<int>A,vector<int>B){
     vector<int>C;
    int m=A.size(); 
    int n=B.size();
        int i=0;
    int j=0;
    while(i<m&&j<n){
        if(A[i]<B[j]){

            C.push_back(A[i]);//important
            i++;
        }
        else if(A[i]>B[j]){
            j++;
        }
        else{
            i++;
            j++;//no push back because we want A-B

        }
    }
    while(i<m){
    C.push_back(A[i]);
    i++;
    }
     Traverse(C);
}
void DifferenceArrayBminusA(vector<int>A,vector<int>B){
     vector<int>C;
    int m=A.size(); 
    int n=B.size();
        int i=0;
    int j=0;
    while(i<m&&j<n){
        if(A[i]<B[j]){

            i++;//sort of skipping A[i] because we want B-A
        }
        else if(A[i]==B[j]){
            i++;
            j++;//no push back because we want B-A

        }
        else if(A[i]>B[j]){
            C.push_back(B[j]);
            j++;
        }
    }
    while(j<n){
        C.push_back(B[j]);  
        j++;    
}

     Traverse(C);
}
void AsymmetricBDifferenceArray(vector<int>A,vector<int>B){
     vector<int>C;
    int m=A.size(); 
    int n=B.size();
        int i=0;
    int j=0;
    while(i<m&&j<n){
        if(A[i]<B[j]){

            C.push_back(A[i]);//important
            i++;
        }
        else if(A[i]==B[j]){
            i++;
            j++;//no push back because we want A-B

        }
        else{
            C.push_back(B[j]);
            j++;
        }
    }
     Traverse(C);
}


int main(){
    vector<int>A;
   A.push_back(2);
    A.push_back(6);
     A.push_back(8);
      A.push_back(9);

      vector<int>B;
      B.push_back(1);       
      B.push_back(3);
      B.push_back(6);
      B.push_back(7);

    cout<<"Merged Array: ";
    mergeArray(A, B);
    cout<<endl;
    cout<<"Union Array: ";
    UnionArray(A, B);
    cout<<endl;
    cout<<"Intersection Array: ";
    IntersectionArray(A, B);
    cout<<endl;
    cout<<"Difference Array of array A minus array B: ";
    DifferenceArrayAminusB(A, B);
    cout<<endl;
    cout<<"Difference Array of array B minus array A: ";
    DifferenceArrayBminusA(A, B);
    cout<<endl;
    cout<<"Asymmetric Difference Array: ";
    AsymmetricBDifferenceArray(A, B);
}
    
