#ifndef lista_h
#define lista_h
	#include <iostream>
	#include "nodo.h"	
using std::cout;
using std:: cin;	
template<class T>	
class Lista
	{
	private:
		Nodo<T> *primero;
		Nodo<T> *ultimo;
		int numelem;
		
	public:
		Lista();
		Lista(const Lista &a);
		bool vacia();
		void anadir(T x);
		void mostrar();
		void insertar(T n, int pos);
		void eliminar(int pos);
		T consultar(int pos);
		void invertir();
		void copiarF(const Lista &x);
		void crear(int num);
		void borrar();
		~Lista();
		
	};


template<class T>
Lista<T>::Lista()
{
	primero=NULL;
	numelem=0;
	
}

template<class T>
bool Lista<T>::vacia()
{
	return(primero==NULL);
	
}
template<class T>
void Lista<T>::anadir(T x)
{
	Nodo<T> *aux;
	aux=new Nodo<T>(x);
	
	if(vacia())
		primero=ultimo=aux;
	else 
		{
			ultimo->modificarsig(aux);
			ultimo=aux;
			
			
		}
	numelem++;
	
}
template<class T>
void Lista<T>:: mostrar()
{
	Nodo<T> *aux= primero;
	int i ;
	
	i=1;
	if(vacia())
	{
		cout<<"la lista esta vacia"<<std::endl;
		
	}else{
		while(aux!=NULL)
		{
			aux->print();
			
			aux=aux->consultarsig();	
			i++;	
		
		}
		cout<<"NULL"<<std::endl;
	}
	
}
template<class T>
void Lista<T>::insertar(T n , int pos)
{
	Nodo<T> *actual,*anterior,*aux,*temp;
	temp=new Nodo<T> (n);
	int i=1;
	actual=primero;
	
	if(pos==0 || pos==1 )
	{
		primero=temp;
		primero->modificarsig(actual);
		
	}else{
	
		while(i<pos)
			{
				anterior=actual;
				actual=actual->sig;
				i++;
			}
	
		
		if(pos==numelem)
		{
			ultimo->sig=temp;
			ultimo=ultimo->sig;
		
		}else{
				aux=actual;
				anterior->sig=temp;
				temp->sig=aux;
			}
	}
	
numelem++ ;
}
template<class T>
T Lista<T>:: consultar(int pos)/*funciona*/
{
	Nodo<T> *aux;
	int i=1;
	if(pos<=numelem){
	
		aux=primero;
		while(i<pos)
		{
			aux=aux->sig;
			i++;
		}
	}
	return(aux->consultare());
}
	
template<class T>	
Lista<T>::Lista(const Lista &a)
{
	Nodo<T> *aux,*creando;
	aux=a.primero;
	primero=new Nodo<T>(aux->consultare());
	aux=aux->consultarsig();
	creando=primero;
	while(aux)
	{
		creando->sig=new Nodo<T>(aux->consultare());
		creando=creando->consultarsig();
		aux=aux->consultarsig();
	}
	
}
	

template<class T>
void Lista<T>::crear(int n)/*funciona*/
{
	int i =1;
	int value;
	for (i=1 ; i<=n ;i++)
	{
		cout<<"inserte el valor a agregar al elemento "<<i<<std::endl;
		cin>>value;
		anadir(value);
	}
	
	
}
template<class T>
Lista<T>::~Lista()/*no probado aun */
{
	borrar();
}
template<class T>
void Lista<T>::borrar()
{
	Nodo<T> *liberando;

	while(primero!=NULL)
	{
		liberando=primero;
		primero=primero->consultarsig();
		delete liberando;
	}
	primero=NULL;
	numelem=0;
}

template<class T>
void Lista<T>::eliminar( int pos)
{
	Nodo<T> *actual,*anterior;
	int i=1;
	actual=primero;
	if (pos>numelem){
		cout<<"no hay tantos elementos en la lista"<<std::endl;
	}else{
		if(pos==1)
		{
		primero=primero->consultarsig();
		
		}else{
		
			while(i<pos)
			{
				anterior=actual;
				actual=actual->consultarsig();
				i++;
			}
			if(numelem==pos)
			{
				ultimo=anterior;
				ultimo->modificarsig(NULL);
		
			}else
				{
					anterior->modificarsig(actual->consultarsig());
				}
		
			}
		
		numelem --;
	}
	
}

template<class T>
void Lista<T>::copiarF(const Lista<T> &x)
{
	Nodo<T> *aux;
	aux=x.primero;
	
		while (aux)
		{
			anadir(aux->consultare());
			aux=aux->consultarsig();
		}
	
}


#endif
