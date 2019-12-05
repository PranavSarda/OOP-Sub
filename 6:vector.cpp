#include<iostream>
#include<stdlib.h>
using namespace std;

template <typename T>
class Vector
{
	T *p;
	int n;
	public:
	Vector()
	{
		n=0;
		p=NULL;
	}
	Vector(T *a,int m)
	{
		p=a;
		m=n;
	}
	void add(T num);
	void modify(int pos,T num);
	void multiply(T mult);
	void display();
};

template <typename T>
void Vector<T>::add(T num)
{
	n=n+1;
	p=(T*)realloc(p,sizeof(T)*n);
	*(p+n-1)=num;
}

template <typename T>
void Vector<T>::modify(int pos,T num)
{
	*(p+pos-1)=num;
}

template <typename T>
void Vector<T>::multiply(T mult)
{
	int i;
	for(i=0;i<n;i++)
		*(p+i)=*(p+i)*mult;
}

template <typename T>
void Vector<T>::display()
{
	int i;
	cout<<"\nThe Vector Array is : ";
	for(i=0;i<n;i++)
		cout<<*(p+i)<<" ";
}

int main()
{
	Vector<int> varray;
	varray.add(93);
	varray.add(123);
	varray.add(324);
	varray.add(12);
	varray.add(345);
	varray.add(46);
	varray.add(97);
	varray.display();
	varray.multiply(2);
	varray.display();
	varray.modify(2,20);
	varray.display();
	return(0);
}
