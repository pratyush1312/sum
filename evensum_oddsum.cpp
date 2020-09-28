#include<iostream>
using namespace std;
main()
{
	int n;
	int evensum=0;
	int oddsum=0;
	int r;
	
	cin>>n;
	
	while(n>0)
	{
		r=n%10;
		if(r % 2==0)
		{
			evensum=evensum+r;
		}
		else{
			oddsum=oddsum+r;
		}
		n=n/10;
	}
	cout<<evensum<<" "<<oddsum;
}

