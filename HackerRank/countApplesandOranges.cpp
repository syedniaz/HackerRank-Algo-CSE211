#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) 
{   
    int applecount {0};
    for(int i=0; i < apples.size(); i++)
    {
        apples[i] += a;
        if (apples[i] >= s && apples[i] <= t) applecount++;
    }
    
    int orangecount {0};
    for(int i=0; i < oranges.size(); i++)
    {
        oranges[i] += b;
        if (oranges[i] >= s && oranges[i] <= t) orangecount++;
    }
    cout << applecount << endl;
    cout << orangecount << endl;
}

int main()
{
    // s = 7, t = 11, a = 5, b = 15, m = 3, n = 2
    vector<int> apples {-2, 2, 1}; 
    vector<int> oranges {5, -6};
    countApplesAndOranges(7, 11, 5, 15, apples, oranges);

    return 0;
}