#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char fourwheeler,city[40];
	int x;
	cout<<"\n\nEnter the City you are from : ";
	cin>>city;
	cout<<"\nDo you have a Four-Wheeler(Y:Yes OR N:No) ? ";
	cin>>fourwheeler;
	try
	{
		if(fourwheeler=='n' || fourwheeler=='N')
			throw(1);
		else if(strcmp(city,"Pune")==0 && strcmp(city,"Mumbai")==0 && strcmp(city,"Bangalore")==0 && strcmp(city,"Chennai")==0)
			throw(2);
//		else
//			throw(0);
	}
	catch(int x)
	{
		if(x==1)
		{
			cout<<"\nUser should have a Four-Wheeler Vehicle.\n";
			return 0;
		}
		if(x==2)
		{
			cout<<"\nUser should be living in Pune.\n";
			return 0;
		}
	}
	cout<<"\nUser passes the Criteria.\n";
	return(0);
}
