#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // max heap --> maximum element will pop out first
    priority_queue<int> maxi;

    // min-heap --> minimum element will pop out first
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(0);
    maxi.push(2);

    cout << "Size of maxi is -> " << maxi.size() << endl;

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    
    cout<<"Is empty -> "<<maxi.empty()<<endl;

    cout<<"\n";

    mini.push(0);
    mini.push(2);
    mini.push(5);
    mini.push(4);
    mini.push(1);

    cout << "Size of mini is -> " << mini.size() << endl;

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

        cout<<"Is empty -> "<<mini.empty()<<endl;


    return 0;
}