#ifndef property_h
#define property_h
#include <iostream>
#include "Agent.h"
#include <string>
using std::string;
class Property
{
	
	
	private :
		float sellingPrice;
		int PostalCode;
		float size;
		string Type;
		int roomtype;
		Agent agent;
		
		public : 
			Property(float s, int p , float size,string type ,Agent agent, int roomtype);
			void setSellingPrice(float x){this->sellingPrice=x;}
			void setPostalCode(int x){this->PostalCode=x;}
			void setsize(float x){this->size=x;}
			void setType(string x){this->Type=x;}
			void setroomtype(int x){this->roomtype=x;}
			void setAgent(Agent x){this->agent=x;}
			float getsellingPrice(){return this->sellingPrice;}
			int getPostalCode(){return this->PostalCode;}
			float getsize(){return this->size;}
			string getType(){return this->Type;}
			int getroomtype(){return this->roomtype;}
			Agent getagent(){return agent;}
};

Property::Property(float s, int p , float size,string type ,Agent agent, int roomtype)
{
	
	
	sellingPrice=s;
	PostalCode=p;
	this->size=size;
	this->Type=type;
	this->agent=agent;
	this->roomtype=roomtype;
	
	
}





#endif
