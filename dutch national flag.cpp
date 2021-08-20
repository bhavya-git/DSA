//DUTCH NATIONAL FLAG ALGO
#include<iostream>
using namespace std;
void dutch(int a[],int n)
{
	int i,mid=0;
	int low=0;
	int high=n-1 ;
	for(mid=0;mid<=high;i++)
	//while(mid<=high)
	{
		if(a[mid]==0)
		{
			swap(a[mid++],a[low++]);
		}
		else
		if(a[mid]==1)
		{
			mid++;
		}
		else
		if(a[mid]==2)
		{
			swap(a[mid],a[high--]);
		}
		
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
}
int main()
{
	int a[10], i,n;
	cout<<"enter size";
	cin>>n;
    for(i=0;i<n;i++)
    {
	 cin>>a[i];
    }
    dutch(a,n);
}
