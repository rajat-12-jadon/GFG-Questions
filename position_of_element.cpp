#include <iostream>
using namespace std;
int main()
{
    int target, ans, n, arr[500], first = -1, last = -1;
    cout << "Enter the size of an array: ";
    cin >> n;
    int start = 0, end = n - 1;
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target value: ";
    cin >> target;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }
   //     9 5

// 1 3 5 5 5 5 67 123 125
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    cout << ans;
}