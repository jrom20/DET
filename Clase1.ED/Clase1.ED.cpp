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
#include "Arista.h"
#include <queue>

using std::string;
using std::cout;
using std::endl;

template<class T>
T max(T const& t1, T const& t2) {
	return t1 < t2 ? t2 : t1;
}

int main()
{
	
	auto compare = [](Arista a, Arista b) { return a.Distancia > b.Distancia; };
	priority_queue<Arista, std::vector<Arista>, decltype(compare)> _queue(compare);

	Arista item("12", 10);
	Arista item1("2", 15);
	Arista item2("3", 20);
	Arista item3("4", 30);
	Arista item4("5", 16);
	Arista item10("1", 6);

	_queue.push(item);
	_queue.push(item1);
	_queue.push(item2);
	_queue.push(item3);
	_queue.push(item4);
	_queue.push(item10);

	while (!_queue.empty())
	{
		auto savedItem = _queue.top();
		cout << "Id: " << savedItem.Id << " - Distancia: " << savedItem.Distancia << endl;
		_queue.pop();
	}

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
