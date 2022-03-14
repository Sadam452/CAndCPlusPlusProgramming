//display file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	char text;
	file.open("profile.html");
	while(!file.eof())
{
	text=file.get();
	cout<<text;
}
    file.close();
	return 0;
}
