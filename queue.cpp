#include <iostream>
#include <queue>
using namespace std;

void printqueue(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop(); 
    }
}   
void printprioritymax(priority_queue<int> p){
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
}
void printprioritymin(priority_queue<int,vector<int>,greater<int> > h){
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
}

int main(){
    queue<int> q;
    q.push(5);
    q.push(10);
    cout<<"[";
    printqueue(q);
    cout<<"]";
    cout<<" first element: "<<q.front()<<endl; //prints first element
    cout<<"element poped from the queue\n";
    q.pop(); //removes last element
    cout<<"Queue:\n[ ";
    printqueue(q);
    cout<<" ]"<<endl;

    //MAX HEAP
    cout<<"Max heap:"<<endl;
    priority_queue<int> max_heap;
    max_heap.push(5);
    max_heap.push(3);
    max_heap.push(8);
    max_heap.push(7);
    cout<<"[";
    printprioritymax(max_heap);
    cout<<"]";
    cout<<" top element : "<<max_heap.top()<<endl;

    //MIN HEAP
    cout<<"Min heap:"<<endl;
    priority_queue <int, vector<int>, greater<int> > min_heap;
    min_heap.push(5);
    min_heap.push(3);
    min_heap.push(8);
    min_heap.push(7);
    cout<<"[";
    printprioritymin(min_heap);
    cout<<"]";
    cout<<" top element : "<<min_heap.top()<<endl;
    return 0;
}

