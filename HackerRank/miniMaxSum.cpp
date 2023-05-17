#include <bits/stdc++.h>
using namespace std;


void miniMaxSum(vector<int> arr) {
    vector<long long int> arr1;
    long long int sum {0};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            sum = sum + arr[j];
        }
        sum = sum - arr[i];
        arr1.push_back(sum);
        sum = 0;
    }
    
    int n = arr1.size();
    
    sort(arr1.begin(), arr1.end());
    
    long long int max = arr1[n-1];
    long long int min = arr1[0];
    
    cout << min << " " << max;
}



int main()
{
    vector <int> arr {1, 2, 3, 4, 5};

    miniMaxSum(arr);

    return 0;
}