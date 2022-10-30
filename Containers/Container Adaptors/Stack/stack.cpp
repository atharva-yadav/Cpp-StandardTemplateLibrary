#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Ganpati");
    s.push("Bappa");
    s.push("Morya");

    cout<<"Top element -> "<<s.top()<<endl;
    s.pop(); 
    cout<<"Element popped"<<endl;
    cout<<"Top element -> "<<s.top()<<endl;

    cout<<"Size of stack "<<s.size()<<endl;
    s.pop(); cout<<"Element popped"<<endl;
    cout<<"Size of stack "<<s.size()<<endl;

    cout<<"Empty or Not "<<s.empty()<<endl;
    
    return 0;
}