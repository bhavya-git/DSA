 #include<iostream>
 using namespace std;
 int sumOfDigits(int n)
    {
        int s=0;
        if (n==1)
        {
            cout<<n;
        }
        else
        cout<<s+sumOfDigits(n/10);//Your code here
    }
  int main()
  {
  	int n;
  	cout<<"enter n";
  	cin>>n;
  	sumOfDigits(n);
	}  
