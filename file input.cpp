//write something to file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	char str[500];
	fout.open("abc.txt",ios::app);
	cout<<"Dear user, what do u want to write, please enter:"<<endl;
	cin.getline(str,sizeof(str));
	fout<<str;
	fout.close();
	return 0;	
}
