#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(0);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;


    cout << "Size of list " << l.size() << endl;


    list<int> m(l);      //Content of l gets copied in m
    list<int> n(5, 100); // size 5, each element is 100
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}