#include <iostream>
#include <climits>
using namespace std;

int threeMax(int arr[], int n)
{
    int firstMax, secondMax, thridMax;
    if (arr[n] < 3)
    {
        cout << "Invalid array";
    }
    thridMax = secondMax = firstMax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > firstMax)
        {
            thridMax = secondMax;
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if (arr[i] > secondMax)
        {
            thridMax = secondMax;
            secondMax = arr[i];
        }
        else if (arr[i] > thridMax)
        {
            thridMax = arr[i];
        }
    }
    cout << "The  3 Largest value of array is :" << firstMax << " " << secondMax << " " << thridMax << endl;
}
int main()
{
    int arr[] = {9, 8, 5, 3, 10, 30, 4, 2, 11, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    threeMax(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}