#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fast
    int n, num;
    cin>>n; // size of the list.
    int arr[n]; // list of numbers.
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cin>>num; //The number we need to search for.
    int l = 0, r = n-1;
    while (l <= r)
    {
        int mid = (l+r)/2;
        if(arr[mid]== num)
        {
            cout<<mid;
            return 0;
        }
        else if(arr[mid] < num)
        {
            l = mid+1;
        }
        else if(arr[mid] > num)
        {
            r = mid-1;
        }
    }
    cout<<-1; //Element is not present in array.
}
