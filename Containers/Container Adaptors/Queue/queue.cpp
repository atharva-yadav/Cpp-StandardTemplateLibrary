#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Ganpati");
    q.push("Bappa");
    q.push("Morya");


    cout<<"First element before pop -> "<<q.front()<<endl;
    cout<<"Size before pop -> "<<q.size()<<endl;
    q.pop();
    cout<<"First element afetr pop -> "<<q.front()<<endl;
    cout<<"Size afetr pop -> "<<q.size()<<endl;

    
    return 0;
}