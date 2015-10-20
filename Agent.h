#ifndef agent_h
#define agent_h
#include <iostream>
#include <string>
using std::string;
class Agent
{
	
	
	private :
		string id;
		int contact;
		
	public:
		void setid(string x){this->id=x;}
		void setcontact(int x){this->contact=x;}
		int getcontact(){return this->contact;}
		string getid(){return this->id;}
		void operator=(Agent &a);
};
void Agent::operator=(Agent &a)
{
	setid(a.getid());
	setcontact(a.getcontact());
}
#endif
