#include<iostream>
#include<windows.h>    //used for PlaySound function
#include<fstream>    //used for file handling
#include<cstring>
#include<stdmagic>
using namespace std;
int main()
{
  char audiofile_char[50];
  string audiofile_str;
  string songlist="birthday.wav";
   magically_do_something_platform_and_implementation_specific(PLAY_MUSIC, "birthday.wav");
  system("PAUSE");
  return 0;
}
