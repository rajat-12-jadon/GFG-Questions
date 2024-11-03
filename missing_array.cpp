#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[500];
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter the elements of an array: ";
    for (int i = 0; i < n - 1; i++)
    {
        cin>>arr[i];
    }
    int expected_sum = 0;
    int actual_sum = 0;
    expected_sum = (n * (n + 1))/2;
    for (int i = 0; i < n - 1; i++)
    {
        actual_sum += arr[i];
    }
    int result = expected_sum - actual_sum;
    cout<<"Missing element is "<<result;    
}
