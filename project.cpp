#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Data.h"
#include <list>
using std::cout;
using std:: cin;
using std::endl;
using std::ofstream;


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

void load(std::list<Data> l)
{
	Data datos;
	
	int i=0;
	unsigned int encontro,anterior;
	std::string STRING,agentid,contact,size,roomtype,location,sellingprice;
	std::ifstream infile;
	infile.open ("data.in");
	while(!infile.eof()) // To get you all the lines.
	{
		getline(infile,STRING); // Saves the line in STRING.
		encontro = STRING.find(':', 0); 
		if(encontro != std::string::npos )
		{
			agentid = STRING.substr(0, encontro);
			datos.setAgentId(agentid);
			
		} 
		anterior=encontro+1;
		encontro= STRING.find(':', anterior);
		
		if(encontro != std::string::npos )
		{
			contact = STRING.substr(anterior, encontro-anterior);
			datos.setContact(contact);
		} 
		anterior=encontro+1;
		encontro= STRING.find(':', anterior);
		
		if(encontro != std::string::npos )
		{
			size = STRING.substr(anterior, encontro-anterior);
			datos.setPropertySize(size);
		} 
		
		anterior=encontro+1;
		
		encontro= STRING.find(':', anterior+1); 
		
		if(encontro != std::string::npos )
		{
			roomtype = STRING.substr(anterior, encontro-anterior);
			datos.setRoomType(roomtype);
		} 
		
		anterior=encontro+1;
		
		encontro= STRING.find(':', anterior+1); 
		
		if(encontro != std::string::npos )
		{
			location = STRING.substr(anterior, encontro-anterior);
			datos.setLocation(location);
		} 
		
		anterior=encontro+1;
		
		
		
		
		
		sellingprice= STRING.substr(anterior, STRING.length()-anterior);
		datos.setSellingPrice(sellingprice);
		
		l.push_back(datos); //Saved each data from "data.in" to the end of the list
		
		
		cout<<" "<<agentid<<" "<<contact<<" "<<size<<" "<<roomtype<<" "<<location<<" "<<sellingprice<<endl;
		
		
		i++;
	}
	infile.close();
	
	
}

void ascendent(std::list<Data> l)
	{
		
		std::list<Data> mylist;
		std::list<Data>::iterator it;	
		
		mylist=l;
		
	
		

			
	}
	

void show()
{
	char option;
	
	do{ 
		cout<<"please insert (a) to see the list in ascending order"<<endl;
		cout<<"please insert (b) to see the is in 	descending order"<<endl;
		cout<<"else for returning to main menu"<<endl;
		cin>>option;
		switch (option)
		{
		case 'a':
			break;
		case 'b':
			break;
		default:option=' ';	
		}
		
	}while(option!=' ' &&option !='a' &&option!='b');
	
	
	
	
}

int main()
{
	std::list<Data> l;
	load(l);
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
			show();
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
	cout<<"welcome to the propperty adding menu"<<endl;
	
	cout<<"please insert"<<endl; 
		
		
		
		
		
		
		
		
}


