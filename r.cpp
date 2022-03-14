#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<dos.h>
#include<conio.h>
#include<cstring>
#include<fstream>
using namespace std;
void birthday(char name[])
{
	fstream fp;
    string s1=" HAPPY BIRTHDAY TO YOU";
    string s2=" HAPPY BIRTHDAY DEAR ";
	string s3=s1+s1+s2+name+s1;
	cout<<"HIT THE FIRST CHARACTER OF YOUR NAME TO START YOUR BIRTHDAY CELEBRATIONS!!!!!";
	getch();
	system("Color D8");
	char audiofile_char[50]="birthday.wav";
	string audiofile_str;
	fp.open(audiofile_char, ios::in);
	if (fp != NULL)
	{
		string audiofile_str =audiofile_char;
		PlaySound(audiofile_str.c_str(),NULL,SND_SYNC);
	}
    for(int i=0;i<s3.length();i++)
    {
	 cout<<s3[i];
	 Sleep(100);
	 if(!isalpha(s3[i])){
	 cout<<endl;
	 for(int j=0;j<=i;j++)
	 {
	 	Sleep(10);
	 	cout<<" ";
	 }}
    }
    fp.close();
}
void message(char name[])
{
	string mes=", today you celebrate your another birthday & you i wish you only the best,"
	"lots of love, and healthy life ahead. Many this day bring lots of happiness in your life"
	",& may all of you dreams come true.\n I am so lucky to have a friend like you, wishing "
	"you the day filled with love & happiness :) \n'Tum Jiyo Hazaaron Saal"
    "Saal Ke Din Ho Pachaas Hazaar:)'";
	
	cout<<"\nHappy Birthday Dear "<<name<<" "<<mes;
}
int main()
{
	char name[10],color[10];
	cout<<"Please enter your name(First name only) :";
	cin>>name;
	cout<<"Nice, i saved your name.\n";
	birthday(name);
	cout<<"\nHIT ANY KEY TO VIEW THE MESSAGE! :)";
	getch();
	message(name);
	return 0;
}
