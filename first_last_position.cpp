//? <--- First and Last Position of an Element --->
#include <iostream>
using namespace std;
int main()
{
    int target, n, arr[500], first = -1, last = -1;
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target value: ";
    cin >> target;

    //* for first occurrence
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    //* for last occurrence
    start = 0, end = n - 1;
    while (start <= end)
    {

        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << first << " " << last;
}
