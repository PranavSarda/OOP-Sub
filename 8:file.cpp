#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ofstream outfile;
	string line;
	outfile.open("file.txt",ios::app);
	if(outfile.is_open())
		outfile<<"This is written into file.\n";
	outfile.close();
	ifstream infile;
	infile.open("file.txt");
	if(infile.is_open())
	{
		while(getline(infile,line))
		{
			cout<<line<<endl;
		}
	}
	outfile.open("file1.cpp",ios::app | ios::trunc);
	if(outfile.is_open())
		outfile<<"#include<iostream>\nusing namespace std;\nint main()\n{\ncout<<\"This is a CPP File.\";\nreturn(0);\n}\n";
	outfile.close();
	return 0;
}
