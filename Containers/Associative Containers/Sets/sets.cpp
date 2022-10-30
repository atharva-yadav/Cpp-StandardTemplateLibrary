#include <iostream>
#include <set>
using namespace std;

// All elements in sets are unique & they comes out in sorted manner

int main()
{
    set<int> s;
    s.insert(0);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(3);
    s.insert(1);
    s.insert(2);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it); //delete 2nd element from set
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "5 is present or not..? -> " << s.count(5) << endl;
    cout << "-5 is present or not..? -> " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(3);
    // set<int> ::iterator itr2 = s.find(4);
    // set<int> ::iterator itr3 = s.find(1);

    cout << " itr -> " << *itr << endl;
    // cout<<" itr -> "<<*itr2<<endl;
    // cout<<" itr -> "<<*itr3<<endl;

    // this loop will print elements next from itr element
    for (auto i = itr; i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}