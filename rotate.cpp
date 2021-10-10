#include<iostream>
using namespace std;
  void rotate(int arr[], int n)
{
  int temp=0;
  int ni=arr[n-1];
  int i;
  if(n>2)
  {
   for(i=n;i>=0;i--)
   {
      if(i>0)
      {
       temp=arr[i];
       arr[i]=arr[i-1];
      }
      else 
  //if(i==0)
      {
      arr[i]=ni;
      }
   }
  }
  else if(n==2)
  {
      swap(arr[i],arr[i+1]);
      //if(i>0)
      //{
      //temp=arr[1];
      //arr[1]=arr[0];
      //}
      //else
      //{
        //  arr[0]=temp;
      //}
      
  }
  else if(n==1)
  {
      cout<<arr[i]<<endl;
  }
  else
  {
      cout<<" ";
  }
  //else
  //{
    //  cout<<arr[i];
  //}
if(n>=2)
{
for(i=0;i<n;i++)
{
   cout<<arr[i]<<endl;
}
}
}
int main()
{
	int n ,i;
	int arr[n];
	cout<<"enter n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rotate(arr,n);
}
