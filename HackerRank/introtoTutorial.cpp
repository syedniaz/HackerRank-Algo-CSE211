#include <bits/stdc++.h>

using namespace std;

int introTutorial(int V, vector<int> arr) 
{
    int index = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (V == arr[i]) index = i;
    }
    return index;
}

int main()
{
    vector <int> arr {1, 4, 5, 7, 9, 12};
    
    cout << "Index = " << introTutorial(4, arr) << endl;

    return 0;
}