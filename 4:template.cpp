#include<iostream>
using namespace std;

template <class T>
T* sort(T *a,int n)
{
	int i,j,swap=1;
	T temp;
	for(i=0;i<n-1 && swap==1;i++)
	{
		swap=0;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	return(a);
}

template <class T>
class Array
{
	private:
	int n;
	T *arr;
	public:
	Array(){}
	Array(int m)
	{
		n=m;
		arr=new T[m];
	}
	~Array()
	{
		delete[] arr;
	}
	void accept()
	{
		int i;
		cout<<"\nEnter the Elements of the Array :- \n";
		for(i=0;i<n;i++)
			cin>>arr[i];
	}
	void sort()
	{
		int i,j,temp;
		for(i=1;i<n;i++)
		{
			temp=arr[i];
			j=i;
			while(arr[j-1]>arr[j] && j>0)
			{
				arr[j]=arr[j-1];
				arr[j-1]=temp;
				j--;
			}
		}
	}
	void display()
	{
		int i;
		cout<<"\nThe Elements of the Array are :- \n";
		for(i=0;i<n;i++)
			cout<<arr[i]<<" ";
	}
};

int main()
{
/*	int *a,n,m,i;
	float *b;
	cout<<"\nEnter the Number of Elements in the Integer Array : ";
	cin>>n;
	a=new int[n];
	cout<<"\nEnter the Elements :- ";
	for(i=0;i<n;i++)
		cin>>a[i];
	a=sort(a,n);
	cout<<"\nThe Sorted Integer Array is :-\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	cout<<"\nEnter the Number of Elements in the Float Array : ";
	cin>>m;
	b=new float[m];
	cout<<"\nEnter the Elements :- ";
	for(i=0;i<m;i++)
		cin>>b[i];
	b=sort(b,m);
	cout<<"\nThe Sorted Float Array is :-\n";
	for(i=0;i<m;i++)
		cout<<b[i]<<" ";
	
	delete[] a;
	delete[] b;
*/	
	Array <int> IntArr(10);
	IntArr.accept();
	IntArr.sort();
	IntArr.display();
	
	Array <float> FltArr(10);
	FltArr.accept();
	FltArr.sort();
	FltArr.display();
	
	return(0);
}
