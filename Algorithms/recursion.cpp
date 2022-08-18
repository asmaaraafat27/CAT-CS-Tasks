#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int solution;
int binary_Search(int arr[], int left, int right, int value)
{
    //Base Case.
    if(left > right)
    {
        return -1;
    }
    else
    {
        int mid = (left+right)/2;
        if(arr[mid] == value)
        {
            solution = mid;
        }
        else if(arr[mid]> value)
        {
            solution = binary_Search(arr ,left, mid-1, value);
        }
        else
        {
            solution = binary_Search(arr, mid+1, right, value);
        }
    }
}
int main()
{
    fast;
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int q; //Queries
    cin>>q;
    while(q--)
    {
       int m; // the number we search for
       cin>>m;
       cout<<binary_Search(arr, 1, n, m);
    }
    return 0;
}
