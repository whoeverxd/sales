// written by Cipherence
// compiled with Dev-C++
// use, re-write, claim as your own. whatever
// he you learn, it lacks comments
//sprintf(cmd,"grep %s apptmt.txt | cut -f1,3 -d \",\" | sort -t , -k 2 | tee log",name);
#include<iostream>
#include<fstream>
//#include<conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void Auth();
void Members();
void Userchange();
void Passchange();

string inuser;
string inpass;
string user;
string pass;
int num = 0;
string com;

main()
{
      //system("clear");
      cout<<"\nPls login\n-------------------------------\n\n";
	Auth();
     
}
void menu()
{
while(num==0)
      {
      //system("clear");
      cout<<"\nCommand: [1)change-pass/2)change-user/3)search/4)exit]-Type number option to go :";
      cin>>com;
      if(com=="1")
      {
           Passchange();
           }
      else if(com=="2")
      {
           Userchange();
           }
      else if(com=="3")
      {
           //cout<<"written by Jason Parker"; // cuz it was
	Members();           
	}
      else if(com=="4")
      {
           num==1;
	   system("clear");
	   cout << "See you again soon!" << endl << endl;
	   exit (0);
           break;
           }
      else if(com==com)
      {
           cout<<"Unknown command\n";
           }
      }
}
void Auth()
{
     ifstream Passfile("password.txt", ios::in);
     Passfile>>inpass;
     ifstream Userfile("username.txt", ios::in);
     Userfile>>inuser;
     //system("clear");
     cout<<"USERNAME: ";
     cin>>user;
     cout<<"PASSWORD: ";
     cin>>pass;
     Userfile.close();
     Passfile.close();
     if(user==inuser&&pass==inpass)
     {
     cout<<"\nLogin Success!!\n";
     cin.get();
     menu();
     }
     else
     {
         cout<<"\nLogin Failed!!\n";
         main();
         }
}
void Userchange()
{
     string tempass;
     //system("clear");
     cout<<"Enter current password to authorize change: ";
     cin>>tempass;
     if(tempass==inpass)
     {
     cout<<"utility to change username stored in file\n";
     cout<<"CHANGE USER TO: ";
     cin>>user;
     ofstream Userfile("username.txt", ios::out);
     Userfile<<user;
     Userfile.close();
     cout<<"Username successfully changed";
     cin.get();
     menu();
}
else
{
    cout<<"Invalid Password";
    cin.get();
    main();
}
}
void Passchange()
{
     string tempass;
     system("clear");
     cout<<"enter current password to authorize change: ";
     cin>>tempass;
     if(tempass==inpass)
     {
     cout<<"utility to change password stored in file\n";
     cout<<"CHANGE PASS TO: ";
     cin>>user;
     ofstream Passfile("password.txt", ios::out);
     Passfile<<user;
     Passfile.close();
     cout<<"password successfully changed";
     cin.get();
     menu();
}
else
{
    cout<<"Invalid Password: ";
    cin.get();
    main();
}
}
void Members()
{
     	char cmd[50],name[50];
	cout<<"\nMember's MENU";// put members code here

	printf("\nEnter name to search : ");
	cin>>name;
	sprintf(cmd,"grep %s apptmt.txt | cut -f 1,3 -d \",\" | sort -t , -k 3 | tee log",name);
	system(cmd);
	menu();

	//system('grep "Jane" apptmt.txt');
     // like a while(){} loop or somethin like that
     // comment please
}

