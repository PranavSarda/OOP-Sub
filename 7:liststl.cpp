#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l1;
	list<int>::iterator it;
	
	if(l1.empty())
		cout<<"\nList is Empty.\n";
	
	l1.push_back(30);
	l1.push_back(12);
	l1.push_back(234);
	l1.push_back(30);
	l1.push_back(2);
	l1.push_back(2);
	l1.push_back(24);
	l1.push_back(234);
	l1.push_back(234);
	l1.push_back(45);
	l1.push_back(64);
/*	if(l1.empty())
		cout<<"\nList is Empty.";
	else
		cout<<"\nList is not Empty.";
*/	
	cout<<"\nList before applying unique() function : ";
	for (it=l1.begin();it!=l1.end();it++)
		cout<<' '<<*it;
	cout<<endl;
	
	l1.unique();
	cout<<"\nList after applying unique() function  : ";
	for (it=l1.begin();it!=l1.end();it++)
		cout<<' '<<*it;
	cout<<endl;
	
	l1.sort();
	cout<<"\nList after applying sort() function    : ";
	for (it=l1.begin();it!=l1.end();it++)
		cout<<' '<<*it;
	cout<<endl;
	
	l1.unique();
	cout<<"\nList after applying unique() function  : ";
	for (it=l1.begin();it!=l1.end();it++)
		cout<<' '<<*it;
	cout<<endl;
	
	l1.reverse();
	cout<<"\nList after applying reverse() function : ";
	for (it=l1.begin();it!=l1.end();it++)
		cout<<' '<<*it;
	cout<<endl;
	
	cout<<endl;
	return 0;
}
