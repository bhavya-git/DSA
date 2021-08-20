#include<iostream>
using namespace std;
void neg(int a[],int n)
{
int i=-1;
int j;
for(j=0;j<n;j++)
{
	if(a[j]<0)
	{
		i++;
		swap(a[j],a[i]);
	}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		}	
}
int main()
{
	int a[10],i,n;
	cout<<"enter n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	neg(a,n);
}
