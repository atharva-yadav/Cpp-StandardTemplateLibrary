#include <iostream>
#include <map>

using namespace std;
// Key value pairs, ek key will point to only one value. Value may have many pre images
// Map bhi sorted output deta hai
int main()
{
    map<int, string> m;

    m[1] = "Atharva";
    m[21] = "Vasant";
    m[13] = "Yadav";

    m.insert({5, "MORYA"});

    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << endl;
    }
// 
    cout << "Finding 13 -> " << m.count(13) << endl;
    cout << "Finding 21 -> " << m.count(21) << endl;
    cout << "Finding -21 -> " << m.count(-21) << endl;

// 
    cout << "Before Erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << endl;
    }
    cout << endl;

    m.erase(13);

    cout << "After Erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << endl;
    }
    cout << endl;

//  .find() returns iterator of that particular element

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout<<(*i).first<<" ";
    }
    

    return 0;
} 