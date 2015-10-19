#include <iostream>
using std::cout;
using std:: cin;
using std::endl;

char menu ()
	{
		char option;
		
		cout<<"Menu"<<endl;
		cout<<"(a) Add new property"<<endl;
		cout<<"(b) Remove property "<<endl;
		cout<<"(c) Edit sales entries"<<endl;
		cout<<"(d) Inquire or search property sales"<<endl;
		cout<<"(e) Monthly property sales transaction report"<<endl;
		cout<<"(f) List property sale items in ascending or descending order"<<endl;
		cout<<"(g) Administration - add / remove property agent"<<endl; 
		cout<<"(h) Administration - change password"<<endl;
		cout<<"(i) Quit"<<endl;
		cin>>option;	
		return (option);
	}
int main()
	{
		char option ; // the variable used for storing the users option data 
		do{
		option=menu();
		switch (option)
			{
			case 'a':
				break;
			case 'b':
				break;
			case 'c':
				break;
			case 'd':
				break;
			case 'e':
				break;
			case 'f':
				break;
			case 'g':
				break;
			case 'i': cout<<"good bye"<<endl;
				break;
			default:cout<<"wrong selection"<<endl;
				
				
			}
		
		
		}while(option!='i');
		return (0);

}

void addProperty()
	{
		
		
		
		
		
		
		
		
		
	}
