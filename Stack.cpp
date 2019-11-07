#include<iostream>
#include"Stack.h"

Stack::Stack(){
    first=-1;
    
}
Stack::~Stack(){}

void Stack::push(int element){
    if (isFull()) std::cout<<"overflow";
    else{ 
        first++;
        elements[first]=element;
    }
}

 int Stack::pop(){
     if (isEmpty()) std::cout<<"Stack underflow";
     else{
        std::cout<<elements[first];
        first--;
     }
 }
int Stack::top(){
     if (isEmpty()) std::cout<<"Stack underflow";
     else{
        std::cout<<elements[first];
     }
 }
bool Stack::isEmpty(){
    if (first< 0) return true;
    else return false;
}
bool Stack::isFull(){
    if (first>=MAX_STACK_SIZE) return true;
    else return false;
    
}