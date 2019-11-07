/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include"Stack.h"

int main()
{
    Stack s;
    int num;
    char opt;
    Label:
    std::cout<<"Enter an element";
    std::cin>>num;
    s.push(num);
    enter:
    std::cout<<"Again want to enter element(Y or N)";
    std::cin>>opt;
    if (opt=='y' || opt=='Y') goto Label;
    else if (opt=='n'|| opt== 'N') goto end;
    else {
        std::cout<<"Enter correct input";
        goto enter;
    }
    end:
    s.pop();
    cout<<"\n";
    s.pop();

    
}
