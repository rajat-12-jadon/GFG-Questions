#include <iostream>
using namespace std;
int main()
{
    int n, arr[500], target;
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target element: ";
    cin >> target;
    int ans = -1, start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
        }
        else if (arr[mid] >= target)
        {
            if (arr[start] <= target && arr[mid] >= target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target && arr[mid] >= target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    cout << ans;
}