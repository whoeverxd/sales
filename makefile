# Makefile harikesh

# Variables
CC = gcc
JOSH = -g
EXECUTABLE = main

# Programa Principal
all: lista.h nodo.h
	$(CC) $(JOSH) nodo.h lista.h main.cpp -o $(EXECUTABLE)

# Librerías



lista.h: lista.h 
	$(CC) $(JOSH) -c lista.h
nodo.h: nodo.h 
	$(CC) $(JOSH) -c nodo.h
	
# Borrar los Archivos Objeto y el Ejecutable
clean:
	rm -rf *.o $(EXECUTABLE) 
