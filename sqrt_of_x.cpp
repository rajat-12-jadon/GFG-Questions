#include<iostream> 
using namespace std;
int main(){
    int x, start = 0, mid, ans;
    cout<<"Enter the number: ";
    cin>>x;
    int end = x;
    if (x < 2)
    {
        cout<<x; // solve for error raised by '0' and '1'.
    }
    
    while (start <= end)
    {
        mid = start +(end - start) / 2;
        // if (mid*mid == x) // due to large multiplication, integer overflow.
        if (mid == x / mid)
        {
            ans = mid;
            break;
        }
        else if (mid < x / mid) // now face new error for '0' and '1'. 
        {
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout<<ans;
    
}