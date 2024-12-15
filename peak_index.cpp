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


// method 2:
/*
class Solution {
public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        int start = 0, end = n - 1; 
        
        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Check if mid is a peak element
            if ((mid == 0 || arr[mid] > arr[mid - 1]) &&
                (mid == n - 1 || arr[mid] > arr[mid + 1])) {
                return mid; // Found the peak element
            }

            // If the left neighbor is greater, move to the left
            else if (mid > 0 && arr[mid - 1] > arr[mid]) {
                end = mid - 1;
            }

            // Otherwise, move to the right
            else {
                start = mid + 1;
            }
        }

        return -1; // Should never reach here if input guarantees a peak element
    }
};
*/
