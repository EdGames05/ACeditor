#include "ACadena.h"
#include <stdio.h>
#include <Windows.h>
#include <locale.h>

int main(int argc, char** argv) {
	// Poner todos los char en modo espa�ol
	setlocale(LC_ALL, "es_ES");

	ACadena str = "Algo de la c�dena \n";
	printf("%s \n", str[1].c_str());
	str.obtenerTamano();
	system("pause");
	return 0;
}