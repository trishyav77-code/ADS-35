#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *front,*rear;
Node *GetNode(){
    Node *temp;
    temp=new Node;
    return temp;
}
void Initialize(){
    rear=NULL;
    front=NULL;

}
bool IsEmpty()
{
    if(rear==NULL){
        return true;
    }
    return false;
}
void EnQueue(int x){
    Node *temp;
    temp=GetNode();
    temp->data=x;
    temp->next=NULL;
    if(rear!=NULL){
        rear->next=temp;
    }
    else{
        front=temp;
    }
    rear=temp;
}
 int DeQueue(){
    if(front==NULL){
        cout<<"Queue underflows";
        exit(1);
    }
    Node *temp;
    temp=front;
    front=front->next;
    int x= temp->data;
    delete (temp);
    return x;
}
int main(){
    Initialize();
    EnQueue(10);
    EnQueue(20);
    EnQueue(30);
    EnQueue(40);
    cout<<DeQueue()<<" ";
cout<<DeQueue()<<" ";
cout<<DeQueue()<<" ";
cout<<DeQueue()<<" ";
cout<<DeQueue()<<" ";

    
//     DeQueue();
//     DeQueue();
//     DeQueue();
//     if(IsEmpty()){
//         cout<<"Queue is empty";
//     }
//     else{
//         cout<<"Queue is not empty";
//     }
 }