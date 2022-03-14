//string manipulation full chapter
//by sadam hussain
//sep 2020
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	string s2("i am string 2");
	cout<<"enter string 1:"<<endl;
	getline(cin,s1);                   //getline for taking more than one word
	cout<<s1<<endl;
	cout<<s1.length()<<"\t"<<s1.capacity()<<"\t"<<s1.size()<<"\t"<<s1.max_size()<<endl;//length,capacity,size,maz_size of string
	string s3=s2; //putting string equal to other
	cout<<s2<<endl;
	cout<<s3<<endl;
	int x=s2.compare(s1); //comparison
	if(x==0)
	cout<<"s2 and s1 are equal";
	else if(x>0)
	cout<<"s2 > s1"<<endl;
	else if(x<0)
	cout<<"S2 < s1"<<endl;
	int y=s1.empty(); //checking whether empty or not
	if(y==1)
	cout<<"s1 is empty"<<endl;
	else
	cout<<"s1 is not empty"<<endl;
	string s4("here is the light");
	cout<<"s4 is :"<<s4<<endl;
	s4.erase(6,10); //erase ; 6 means index at which to start, 10 means no of characters to trim
	cout<<"s4 now"<<s4<<endl;
	s4.insert(4,"inserting...interted."); //insert into string
	cout<<"s4 after insertion:"<<s4<<endl;
	s1.replace(2,2,"replacing...replaced"); //replacing at index 2 , two chars with specified str
	cout<<"s1 after replacement:"<<s1<<endl;
	cout<<s1.at(5)<<endl; // finding char at index 5
	cout<<s1.find_first_of("s")<<"\t"<<s1.find_last_of("s")<<"\t"<<s1.find("hus")<<endl;//finding first instance,last instance,occurance
	string s5("are u shocked to see me in s1");
	s5.swap(s1); // swappimg strings, s1 and s5 here
	cout<<"s1="<<s1<<"\t"<<"s5="<<s5<<endl;
	return 0;
}
