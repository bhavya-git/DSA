#include<iostream>
using namespace std;
void cons(int arr[],int n)
{ 
//int flag=0;
int res=0;
int i;
int c=0;
for(i=0;i<n;i++)
	{
	if(arr[i]==1) 
//	if( arr[i]==arr[i+1]==1)
		{
		c++;
		res=max(res,c);
		}
		else
		{
		c=0;
			//break;
			//continue;
		//	cout<<"no consective ones";
		}
		
	}
	//if(c>max)
	//{
	//	max=c;
	//}
	cout<<"max consecutive ones="<<res;
//	if(flag==1)
//	{
	//	cout<<"no consecutive 1s";
	//}
	//else 
//	{
	 //if(c>max)
	// {
	// max=c;	
	// }
	 //return max;
//	}
//	return max
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
	cons(arr,n);
}
