#include <iostream>
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    rep(i, 0, n)
    {
        cin >> arr[i];
    }
    rep(i, 1, n)
    {
        int current = arr[i];
        int j = i - 1;
        while ( current < arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current; 
    }

    rep(i, 0, n)
    {
        cout << arr[i] << " ";
    }

    return 0;
}