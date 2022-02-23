#pragma once
#ifndef ALISTA_H
#define ALISTA_H

template <class T>
class ALista {
private:
	struct ANodo
	{
		T objeto;
		ANodo* sig = NULL;
		unsigned int posicion = 0;
	};
	ANodo* anodo;
	// Tamaño de la lista
	unsigned int tamano = 0;
	void _insertar_inicio(ANodo *& nodo, T objeto);
public:
	ALista();

	void insertar_inicio(T objeto);
};

// Constructor
template <class T>
ALista<T>::ALista() {
	this->anodo = NULL;
	this->tamano = 0;
}

/*
	Agrega un nuevo item a la lista
*/
template <class T>
void ALista<T>::_insertar_inicio(ANodo*& nodo, T objeto) {
	ANodo* nuevo_nodo = new (struct ANodo);
	nuevo_nodo->objeto = objeto;
	nuevo_nodo->posicion = this->tamano + 1;
	nuevo_nodo->sig = nodo;
	this->tamano += 1;
	nodo = nuevo_nodo;
}

/*
	Agrega un nuevo item a la lista
	funcion publica de la clase
*/
template <class T>
void ALista<T>::insertar_inicio(T objeto) {
	this->_insertar_inicio(this->anodo, objeto);
}

#endif /* ALISTA_H */