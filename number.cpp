#include<iostream>
using namespace std;
int main()
{
	int i,sum,n;
	cout<<"enter the value of n";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<i<<" ";
			sum=sum+i;
		}
	}
		cout<<endl;
        cout<<sum;
		return 0;    
}
