#include<iostream>
using namespace std;
void kadane(int arr[],int n)
{
	int i;
	//int h;
	int maxSum=arr[0];   //everything starts with first element
	int k=arr[0];    //everything starts with first element
	//int s=0;
	for(i=1;i<n;i++)           //from second element
	{
	//	s=s+arr[i];
		maxSum=max(maxSum+arr[i],arr[i]);
		//h=max(s,arr[i]);
		k=max(k,maxSum);
	}
	cout<<"max subarray sum"<<k;
//	k=max(arr[])
}
int main()
{
	int arr[10],n,i;
	cout<<"enter n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	kadane(arr,n);
}
