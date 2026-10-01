#include <bits/stdc++.h>
using namespace std;
int main(){
//     stack<int>s;
//     s.push(1);
//      s.push(2);
//     s.push(5);
//     s.push(6);
//      s.push(7);
//      while(!s.empty()){
     
//     cout<<s.top()<<endl;
//           s.pop();

//      }


// }
// stack<char>s;
//     s.push('a');
//      s.push('b');
//     s.push('c');
//     s.push('d');
//      s.push('e');
//      while(!s.empty()){
     
//     cout<<s.top()<<endl;
//           s.pop();

//      }

// }
stack<int>s;
int n=19;
while(n!=0){
    int r=n%2;
    s.push(r);
    n=n/2;

}
while(!s.empty()){
    cout<<s.top();
    s.pop();
}
}