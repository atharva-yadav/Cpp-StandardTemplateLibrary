#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // Another method of declaration -->
    vector<int> v1(5, 1); // vector of 5 size , all elements initialised with 1
    cout << "Vector v1 of 5 size , all elements gets initialised with 1 -> ";
    for (int j : v1)
    {
        cout << j << " ";
    }
    cout << endl;

    // All elements of v1 gets copied into copy vector
    vector<int> copy(v1);
    cout << "Vector copy, all elements of v1 are copied in this -> ";
    for (int k : v1)
    {
        cout << k << " ";
    }
    cout << endl;
    cout << endl;

    // Operations (on v)

    cout << "Original Capacity -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity after push_back-1 -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity after push_back-2 -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity after push_back-3 -> " << v.capacity() << endl; // capacity of vector get doubled here
    cout << "Size of vector -> " << v.size() << endl;                 // Size tells how much elements are present in vec. while capacity shows total capacity of vector

    cout << "Element at 2nd index is -> " << v.at(2) << endl;
    cout << "front is -> " << v.front() << endl;
    cout << "back -> " << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Clear size clears all the vector but capacity remains as it is
    cout << "Before Clear, size -> " << v.size() << " Capacity -> " << v.capacity() << endl;
    v.clear();
    cout << "After Clear, size -> " << v.size() << " Capacity -> " << v.capacity() << endl;

    return 0;
}