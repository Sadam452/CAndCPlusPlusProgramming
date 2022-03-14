//form by sadam 21 sep 2020
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream form;
	char str[30];
	form.open("form_example",ios::app);
	cout<<"REGISTRATION FORM FOR SEMINAR 2023"<<endl;
	cout<<"Name of the student:"<<endl;
	cin.getline(str,sizeof(str));
	form<<str<<"\n";
	char par[30];
	cout<<"Parentage of the student:"<<endl;
	cin.getline(par,sizeof(par));
	form<<par<<"\n";
	char rno[15];
	cout<<"Registration number of the student:"<<endl;
	cin.getline(rno,sizeof(rno));
	form<<rno<<"\n";
	char email[30];
	cout<<"Email id of the student:"<<endl;
	cin.getline(email,sizeof(email));
	form<<email<<"\n";
	char contact[15];
	cout<<"Contact number of the student:"<<endl;
	cin.getline(contact,sizeof(contact));
	form<<contact<<"\n";
	char dob[12];
	cout<<"DOB of the student:"<<endl;
	cin.getline(dob,sizeof(dob));
	form<<dob<<"\n";
	char gen[7];
	cout<<"Gender of the student:"<<endl;
	cin.getline(gen,sizeof(gen));
	form<<gen<<"\n";
	char br[10];
	cout<<"Branch of the student:"<<endl;
	cin.getline(br,sizeof(br));
	form<<br<<"\n";
	char dis[12];
	cout<<"District of the student:"<<endl;
	cin.getline(dis,sizeof(dis));
	form<<dis<<"\n";
	form<<"***********now next record**********"<<endl;
	cout<<"***************"<<endl;
	cout<<"Dear user your submitted information in this form is:"<<endl;
	form>>str;
	cout<<str<<"\n";
	form>>par;
	cout<<par<<"\n";
	form>>rno;
	cout<<rno<<"\n";
	form>>email;
	cout<<email<<"\n";
	form>>contact;
	cout<<contact<<"\n";
	form>>dob;
	cout<<dob<<"\n";
	form>>gen;
	cout<<gen<<"\n";
	form>>br;
	cout<<br<<"\n";
	form>>dis;
	cout<<dis<<"\n";
	form.close();
	return 0;	
		
}
