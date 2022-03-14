//write and display
//mon 21 sep by sadam
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	char str[100];
	file.open("example.txt",ios::out|ios::in);
	cout<<"Write to the file:";
	cin.getline(str,sizeof(str));
	file<<str<<endl;
	cout<<"Your content has been written to file, & is as:"<<endl;
	file>>str;
	cout<<str<<endl;
	file.close();
	return 0;
}
