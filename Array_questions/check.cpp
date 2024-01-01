#include <iostream>
#include <climits>
using namespace std;

void threeMax(int arr[], int n)
{
    int firstMax, secondMax, thridMax;

    if (n < 3)
    {
        cout << "Invalid array";
        return;
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
    cout << "The 3 Largest values of the array are: " << firstMax << ", " << thridMax << ", " << secondMax;
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
