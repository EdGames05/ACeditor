#include "ACadena.h"
#include "ALista.h"
#include <stdio.h>
#include <Windows.h>
#include <locale.h>

int main(int argc, char** argv) {
	// Poner todos los char en modo espa�ol
	setlocale(LC_ALL, "es_ES");

	ACadena str = "Algo de la c�dena \n";
	ALista<ACadena> aCadenaLista{};
	//aCadenaLista->insertar_inicio("Algo");
	aCadenaLista.insertar_inicio(str);
	aCadenaLista.insertar_inicio("Otra");
	system("pause");
	return 0;
}