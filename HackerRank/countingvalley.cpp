#include <bits/stdc++.h>

using namespace std;

int countingValleys(int steps, string path) 
{
    int sum = 0;
    int count = 0;
    for(int i=0;i<path.size();i++)
    {
        if(path[i]=='U')
    {
        if(++sum==0)
        count++;
    }
    else sum--;
    }
    return count;
}

int main()
{
    int steps = 8;
    string path = "UDDDUDUU";
    cout << countingValleys(steps, path) << endl;
    return 0;
}