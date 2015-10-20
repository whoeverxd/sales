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
