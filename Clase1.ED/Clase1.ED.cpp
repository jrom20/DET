// Clase1.ED.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Person.h"
#include <iostream>
#include "Acumulador.h"
#include "MiLista.h"
#include "MiListaDoble.h"
#include "MyStack.h"
#include "MyQueue.h"
#include "HashTableVectorNodo.h"
#include "MyHashTable.h"
#include "ArbolBinario.h"

using std::string;
using std::cout;
using std::endl;

template<class T>
T max(T const& t1, T const& t2) {
	return t1 < t2 ? t2 : t1;
}

int main()
{
	//int valor1 = 1;
	//int valor2 = 2;
	//cout << "mayor de 2 y 1 es " << max(valor1, valor2) << endl;
	//double dValor1 = 1.0;
	//double dValor2 = 2.0;
	//cout << "mayor de 2 y 1 es " << max(dValor1, dValor2) << endl;

	//Person persona1("Selvin", "Rodriguez", 50);
	//Person persona2("Gabriela", "Diaz", 60);

	//cout << "El mayor entre " << persona1.GetNombre()
	//	<< " y " << persona2.GetNombre() << " es " 
	//	<< max(persona1, persona2).GetNombre() << endl;

	//
	//Acumulador<int> numeros(10);
	//cout << "valor inicial: " << numeros.GetTotal() << endl;
	//numeros += 9;
	//numeros += 9;
	//cout << "valor despues de sumar 18: " << numeros.GetTotal() << endl;

	//Acumulador<string> cadena("");
	//cadena += "Hola ";
	//cadena += "Mundo";

	//cout << "Valor de variable cadena: " << cadena.GetTotal() << endl;

	//Acumulador<Person> personas(0);
	//personas += persona1;

	//cout << "Valor despues de sumar persona1: " << personas.GetTotal() << endl;
	////personas += persona2;

	//personas += persona2;

	//cout << "Valor despues de sumar persona2: " << personas.GetTotal() << endl;
	////personas += persona2;

	//MiLista<string> listaAlumnos;
	//listaAlumnos.Add("Selvin");
	//listaAlumnos.Add("Gabriela");
	//listaAlumnos.Add("Delia");
	//listaAlumnos.Add("Bilander");

	//Nodo<string>* cursor = listaAlumnos.FirstOrDefault();

	//while (cursor != nullptr) {
	//	cout << "Nombre de alumno: " << cursor->GetValor() << endl;
	//	cursor = cursor->GetSiguiente();
	//}

	//listaAlumnos.RemoveLast();
	//cout << "-------------------" << endl;

	//cursor = listaAlumnos.FirstOrDefault();

	//while (cursor != nullptr) {
	//	cout << "Nombre de alumno: " << cursor->GetValor() << endl;
	//	cursor = cursor->GetSiguiente();
	//}

	//cout << "-------------------" << endl;

	///*
	//listaAlumnos.RemoveFirst();
	//listaAlumnos.RemoveFirst();

	//cursor = listaAlumnos.FirstOrDefault();

	//while (cursor != nullptr) {
	//	cout << "Nombre de alumno: " << cursor->GetValor() << endl;
	//	cursor = cursor->GetSiguiente();
	//}

	//cout << "-------------------" << endl;*/

	//listaAlumnos.Remove("Delia");

	//cursor = listaAlumnos.FirstOrDefault();

	//while (cursor != nullptr) {
	//	cout << "Nombre de alumno: " << cursor->GetValor() << endl;
	//	cursor = cursor->GetSiguiente();
	//}

	//MiListaDoble<string> listaDobleAlumnos;
	//listaDobleAlumnos.Add("Selvin");
	//listaDobleAlumnos.Add("Gabriela");
	//listaDobleAlumnos.Add("Delia");
	//listaDobleAlumnos.Add("Bilander");

	//NodoDoble<string>* _cursor = listaDobleAlumnos.FirstOrDefault();

	//while (_cursor != nullptr) {
	//	cout << "Nombre de alumno: " << _cursor->GetValor() << endl;
	//	_cursor = _cursor->GetSiguiente();
	//}

	//MyStack<string> miPila;
	//miPila.Push("Selvin");
	//miPila.Push("Gabriela");
	//miPila.Push("Delia");
	//miPila.Push("Bilander");

	//while (miPila.Count != 0) {
	//	string nombreAlumno = miPila.Pop();
	//	cout << "Nombre de alumno: " << nombreAlumno << endl;
	//}

	/*MyQueue<string> miCola;
	miCola.Enqueue("Selvin");
	miCola.Enqueue("Gabriela");
	miCola.Enqueue("Delia");
	miCola.Enqueue("Bilander");

	while (miCola.Count != 0) {
		string nombreAlumno = miCola.Dequeue();
		cout << "Nombre de alumno: " << nombreAlumno << endl;
	}*/

	//HashTableVectorNodo<string, int> nodo;
	//nodo.Add("0501", 1);
	//nodo.Add("0502", 2);
	//nodo.Add("0503", 3);
	//nodo.Add("0504", 4);

	/*MyHashTable<string, int> table;
	table.Add("0501", 1);
	table.Add("0502", 2);
	table.Add("0503", 3);
	table.Add("0504", 4);

	int valorAlmacenado;
	bool obtenido = table.TryGetValue("050003", valorAlmacenado);*/

	////| - - |
	////////////////| - 21 - |//////////////
    ///////////////////////////////////
	//////| - 4 - |////////| - 77 - |////
	/////////////////////////////////////
	/////////////////| -37 - |
	///////////////////////////////////
	///////////////////////| - 51 - |

	
	ArbolBinario arbolito;

	arbolito.Agregar("4");
	arbolito.Agregar("2");
	arbolito.Agregar("1");
	arbolito.Agregar("3");
	arbolito.Agregar("8");
	arbolito.Agregar("6");
	arbolito.Agregar("5");
	arbolito.Agregar("7");

	arbolito.Eliminar("8");


	ArbolBinario arbolito2;

	arbolito2.Agregar("4");
	arbolito2.Agregar("2");
	arbolito2.Agregar("1");
	arbolito2.Agregar("3");
	arbolito2.Agregar("6");
	arbolito2.Agregar("5");
	arbolito2.Agregar("8");
	arbolito2.Agregar("7");

	arbolito2.Eliminar("6");

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
