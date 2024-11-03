#include <iostream>
using namespace std;
int main()
{
    int n, mid, arr[500];
    cout << "Enter the size of an array: ";
    cin >> n;
    int start = 0, end = n - 1;
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = arr[0];
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            ans = arr[mid];
            end = mid - 1;
        }
    }
    cout<<ans;
}