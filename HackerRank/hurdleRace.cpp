#include <bits/stdc++.h>

using namespace std;

int hurdleRace(int k, vector<int> height) 
{
    sort (height.begin(), height.end());
    int size = height.size();
    int doses = height[size-1] - k;
    if (doses < 0) doses = 0;
    return doses;
}

int main ()
{
    int k = 7;
    vector<int> height {2,5,4,5,2};

    cout << hurdleRace(k, height) << endl;

    return 0;
}