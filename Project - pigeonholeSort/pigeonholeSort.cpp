#include <iostream>
#include <list>
#include <stdlib.h>
#include <time.h>

using namespace std;

// void printHoles(list<int> arr[], int size){
//     for (int i = 0 ; i < size; i++){
//         cout<<"Index "<<i<<" : ";
//         for (int x : arr[i]){
//             cout<<x<<" ";
//         }
//         cout<<endl;
//     }
// }

void pigeonHoleSort(int arr[], int size)
{
    int minimum = arr[0];
    int maximum = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximum)
            maximum = arr[i];
        if (arr[i] < minimum)
            minimum = arr[i];
    }

    int range = maximum - minimum + 1;
    list<int> holes[range];
    for (int i = 0; i < size; i++)
    {
        holes[arr[i] - minimum].push_back(arr[i]);
    }

    // printHoles(holes, range);
    // cout<<endl;

    int mainArrayIterator = 0;
    for (int i = 0; i < range; i++)
    {
        for (int x : holes[i])
        {
            arr[mainArrayIterator++] = x;
        }
    }
}

int main()
{
    srand(time(NULL)); //to prevent generating same random numbers
    int arr[15];
    for (int i = 0; i < 15; i++)
    {
        arr[i] = rand() % (50 - 35 + 1) + 35;
    }
    pigeonHoleSort(arr, 15);
    for (int i = 0; i < 15; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}