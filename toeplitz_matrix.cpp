#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int row, column, arr[500][500];
    bool ans;
    cout << "Enter the size of a row: ";
    cin >> row;
    cout << "Enter the size of a column: ";
    cin >> column;
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < column; j++)
        {
            if (arr[i][j] == arr[i - 1][j - 1])
            {
                ans = true;
            }
            else
            {
                ans = false;   
            }
        }
    }
    cout<<ans;
}

