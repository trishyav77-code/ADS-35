#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int>& A, int low, int high) {
    int i = low;
    int j = high + 1;
    int pivot = A[low];

    do {
        do {
            i++;
        } while (A[i] < pivot);

        do {
            j--;
        } while (A[j] > pivot);

        if (i < j)
            swap(A[i], A[j]);

    } while (i < j);

    swap(A[j], A[low]);
    return j;
}

void QuickSort(vector<int>& A, int low, int high) {
    if (low < high) {
        int j = Partition(A, low, high);
        QuickSort(A, low, j - 1);
        QuickSort(A, j + 1, high);
    }
}

int main() {
    vector<int> arr;

    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(INT_MAX);

    QuickSort(arr, 0, arr.size()-1);
    arr.pop_back();

for(auto i:arr)
        cout <<i<<endl;

    return 0;
}