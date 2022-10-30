#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(0);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    } 
    cout << endl;

    cout << "First index element  " << d.at(1) << endl;
    cout << "Front element  " << d.front() << endl;
    cout << "Back element  " << d.back() << endl;

    cout << "Empty or Not -> " << d.empty() << endl;

    cout<<"Before erase: size = "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase: size = "<<d.size()<<endl;

    return 0;
}