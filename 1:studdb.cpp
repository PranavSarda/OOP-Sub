#include<iostream>
using namespace std;

class Student
{
	char fname[20],lname[20],div,blood[4],block[4],city[20],pin[7],telno[11];
	int rno,cl,dd,mm,yy;
	public:
	static int count;	//Static
	static void cnt()	//Inline & Static
	{
		cout<<"\nThe No. of Student Records is : "<<count<<endl;
	}
	friend void display(Student s);		//Friend Function
	Student()		//Constructor
	{count++;}
	~Student()
	{count--;}
	void accept();
};

int Student::count=0;

void display(Student s)
{
	cout<<"\nThe Student Data is :- \n";
	cout<<"\nName : "<<s.fname<<" "<<s.lname;
	cout<<"\nRoll Number : "<<s.rno;
	cout<<"\nClass : "<<s.cl;
	cout<<"\nDivision : "<<s.div;
	cout<<"\nDate of Birth : "<<s.dd<<"/"<<s.mm<<"/"<<s.yy;
	cout<<"\nBlood Group : "<<s.blood;
	cout<<"\nAddress : "<<s.block<<", "<<s.city<<" - "<<s.pin;
	cout<<"\nTelephone Number : "<<s.telno<<endl;
}

void Student::accept()
{
	cout<<"\nEnter the Details of the Student : \n";
	cout<<"\nFirst Name : ";
	cin>>this->fname;
	cout<<"\nLast Name : ";
	cin>>this->lname;
	cout<<"\nRoll Number : ";
	cin>>this->rno;
	cout<<"\nClass : (Number of Year:1,2,3,4) ";
	cin>>this->cl;
	cout<<"\nDivision : (Capital Division:A,B,C,D) ";
	cin>>this->div;
	
	cout<<"\nDate of Birth : ";
	cout<<"\nDate of Month : (0-31 as per the month) ";
	cin>>this->dd;
	cout<<"Month of Year : (1-12) ";
	cin>>this->mm;
	cout<<"Year : (1955-2001) ";	//64 year old guy in 4th year would be born in 1955
	cin>>this->yy;
	
	cout<<"\nBlood Group : (A+ to O-) ";
	cin>>this->blood;
	cout<<"\nAddress : ";
	cout<<"\nBlock No. : (000 - 999) ";
	cin>>this->block;
	cout<<"\nCity : ";
	cin>>this->city;
	cout<<"\nPin Code : (6-Digit Pin Code) ";
	cin>>this->pin;
	
	cout<<"\nTelephone Number : (10-digit Tel No.) ";
	cin>>telno;

}

int main()
{
	int i,n;
	Student *s;
	cout<<"\nEnter the Number of Records you want to save : ";
	cin>>n;
	s=new Student[n];
	for(i=0;i<n;i++)
		s[i].accept();
	Student::cnt();
	cout<<"\nThe Student Records are :- \n";
	for(i=0;i<n;i++)
		display(s[i]);
	delete[] s;
	return 0;
}
