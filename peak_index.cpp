#include <iostream>
using namespace std;
int main()
{
    int n, ans = -1, arr[1000];
    cout << "Enter the size of an array: ";
    cin >> n;
    int start = 0, end = n - 1;
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // peak element
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            ans = mid;
            break;
        }
        // right side move
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        // left side move
        else
        {
            end = mid - 1;
        }
    }
    cout << ans;
}