# Makefile de Lista

# Variables
CC = g++
JOSH = -g
EJECUTABLE = main

# Programa Principal
all: lista.h nodo.h
	$(CC) $(JOSH) nodo.h lista.h main.cpp -o $(EJECUTABLE)

# Librerías



lista.h: lista.h 
	$(CC) $(JOSH) -c lista.h
nodo.h: nodo.h 
	$(CC) $(JOSH) -c nodo.h
	
# Borrar los Archivos Objeto y el Ejecutable
clean:
	rm -rf *.o $(EJECUTABLE) 
