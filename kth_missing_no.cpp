#include <iostream>
using namespace std;
int main()
{
    int n, k, arr[1000], result;
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "Enter elements of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the position of element to be found: ";
    cin >> k;
    int start = 0, end = n - 1, mid, ans = n;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] - mid - 1 >= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        result = ans + k;
    }
    cout <<k<<"th positive missing element is " << result;
}
