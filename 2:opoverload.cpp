#include<iostream>
using namespace std;

class Complex
{
	int real,imag;
	public:
	Complex()
	{
		real=0;
		imag=0;
	}
	Complex(int a,int b)
	{
		real=a;
		imag=b;
	}
	Complex(const Complex &c)
	{
		real=c.real;
		imag=c.imag;
	}

	Complex operator+(Complex c)
	{
		Complex c1;
		c1.real=real + c.real;
		c1.imag=imag + c.imag;
		return(c1);
	}
	
	Complex operator*(Complex c)
	{
		Complex c1;
		c1.real=(real * c.real) - (imag * c.imag);
		c1.imag=(real * c.imag) + (imag * c.real);
		return(c1);
	}
	
	void print()
	{
		cout<<endl<<real<<" + i"<<imag<<endl;
	}
	void getdata()
	{
		cout<<"\nEnter the Complex Number :";
		cin>>real>>imag;
	}
	
	friend ostream& operator<<(ostream &out,const Complex &c);
	friend istream& operator>>(istream &in,Complex &c);
};

ostream& operator<<(ostream &out,const Complex &c)
{
	out<<endl<<c.real<<" + i"<<c.imag<<endl;
	return(out);		//Return so that we can use Chaining
}

istream& operator>>(istream &in,Complex &c)
{	
	cout<<"\nEnter the Complex Number : ";
	in>>c.real>>c.imag;
	return(in);
}

int main()
{
	Complex c1;
	cout<<c1;
	Complex c2(5,10);
	cout<<c2;
	Complex c3(9,10);
	cout<<c3;
	cin>>c1;
	cin>>c2;
	c3=c1+c2;
	cout<<c3;	
	cin>>c1;
	cin>>c2;
	c3=c1*c2;	
	cout<<c3;	
		
	return 0;
}
