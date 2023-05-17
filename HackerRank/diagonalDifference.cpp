#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int diag1{0}, diag2 {0};

    
    for (int i = 0, j = 0; i < arr.size(), j < arr.size(); i++, j++)
    {
        diag1 = diag1 + arr[i][j];
    }
    
    for (int i = 0, j = arr.size() - 1; i < arr.size(), j >= 0; i++, j--)
    {
        diag2 = diag2 + arr[i][j];
    }
    int diff = diag1 - diag2;
    if (diff < 0) diff = diff * -1;

    return diff;
}

int main ()
{
    vector<vector<int>> arr;
    
    arr.push_back({11, 2, 4});
    arr.push_back({4, 5, 6});
    arr.push_back({10, 8, -12});

    int result = diagonalDifference(arr);

    cout << result << "\n";

    return 0;
}