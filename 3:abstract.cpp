#include<iostream>
using namespace std;

class base
{
	int x,y;
	public:
	virtual void getdata()=0;
	virtual void calcarea()=0;
/*	void getdata();		//If we use this instead of virtual functions, base pointer will call base functions
	void calcarea();
*/
};

class triangle:virtual public base
{
	int h,b;
	public:
	void getdata();
	void calcarea();
};

class rect:virtual public base
{
	int l,b;
	public:
	void getdata();
	void calcarea();
};
/*
void base::getdata()
{
	cout<<"\nEnter x and y :-\n";
	cin>>x>>y;
}

void base::calcarea()
{
	cout<<"\nArea is : "<<x*y<<endl;
}
*/
void triangle::getdata()
{
	cout<<"\nEnter Height and Breadth of Triangle :-\n";
	cin>>h>>b;
}

void triangle::calcarea()
{
	cout<<"\nArea of Triangle is : "<<(h*b)/2<<endl;
}

void rect::getdata()
{
	cout<<"\nEnter Length and Breadth of Rectangle :-\n";
	cin>>l>>b;
}

void rect::calcarea()
{
	cout<<"\nArea of Rectangle is : "<<l*b<<endl;
}


int main()
{
	int ch=0;
	base *ptr;
	triangle T;
	rect R;
	do
	{
		cout<<"\n\n1.Area of Triangle\n2.Area of Rectangle\n0.Exit\n\nEnter Your Choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			ptr=&T;
			ptr->getdata();
			ptr->calcarea();
			break;
		case 2:
			ptr=&R;
			ptr->getdata();
			ptr->calcarea();
			break;
		case 0:
			return 0;
		default:
			cout<<"\nPlease Enter a Valid Choice.\n";
		}
	}while(ch!=0);
	return 0;
}
