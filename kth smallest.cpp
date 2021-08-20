#include<iostream>
using namespace std;

void sort(int a[],int n,int k)
{
	int i,j,temp=0;
	for(i=0;i<n-1;i++)
	{
		int flag=0;
		for(j=0;j<n-1-i;j++)
		{
			
		 if(a[j]<a[j+1])
		 {
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			flag=1;
		 }
	    }
		if(flag==0)
		break;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	int m[10];
	for(i=0;i<n;i++)
	{
		
		m[i]=a[i];
		//i++;
	}
	cout<<"kth smallest"<<m[k-1];
}
int main()
{
	int n,i,a[10],k;
	cout<<"enter size";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter k";
	cin>>k;
sort(a,n,k);	
}

