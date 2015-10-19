#ifndef nodo_h
	#define nodo_h
	#include <iostream>
template <class T>
class Nodo
{
	
	private:
		T x;
		Nodo *sig;
	public:
	
	Nodo();
	Nodo(T x);
	void print();
	void modificarelem(T e);
	void modificarsig(Nodo *n);
	Nodo& operator=(const Nodo &p);
	T consultare();
	Nodo *consultarsig();
//	friend class Lista;
};
template <class T>
Nodo<T>::Nodo(){	x=0;	sig=NULL;}
template <class T>
Nodo<T>::Nodo(T x)
{
	this->x=x;
	sig=NULL;
}

template <class T> 
void Nodo<T>::print(){
	std::cout<<"||"<<x<<"||"<<"->";
}


template <class T> 
T Nodo<T>::consultare()
{
	return(x);
}

template <class T> 
Nodo<T> *Nodo<T> ::consultarsig()
{
	return(sig);
	
}
template <class T> 
void Nodo<T> ::modificarelem(T e){
	x=e;
	
	
}

template <class T> 
void Nodo<T>::modificarsig(Nodo<T> *n){
	sig=n;
	
}












#endif

