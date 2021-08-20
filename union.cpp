#include <iostream>

using namespace std;
void unioned(int arr1[], int arr2[], int m, int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i++]<<" ";
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j++]<<" ";
        }
        else
        {
            cout<<arr1[i++]<<" ";
            j++;
        }
    }
    while(i<m)
    {
        cout<<arr1[i++]<<" ";
    }
    while(j<n)
    {
        cout<<arr2[j++]<<" ";
    }
}

int main()
{
    int arr1[5]={4,5,6,3,7};
    int arr2[8]={3,4,5,11,23,2,13};
    unioned(arr1,arr2,5,7);

    return 0;
}

