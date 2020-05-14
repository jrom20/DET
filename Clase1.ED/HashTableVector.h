#pragma once
#include <vector>
#include "HashTableVectorNodo.h"
#include <stdio.h>      
#include <stdlib.h>

using namespace std;

template<class K, class V>
class HashTableVector
{
private:
	vector<HashTableVectorNodo<K, V>> _arreglo;

	int HashFunction(K llave)
	{
		hash<K> funcionhash;
		size_t indiceHash = funcionhash(llave);
		int indice = indiceHash % 1000;
		return indice;
	}

public:
	HashTableVector()
	{
		_arreglo.resize(1000);
	}

	void Add(K llave, V valor)
	{
		int indice = HashFunction(llave);
		_arreglo[indice].Add(llave, valor);
	}

	bool TryGetValue(K llave, V& valor)
	{
		int indice = HashFunction(llave);
		return _arreglo[indice].TryGetValue(llave, valor);
	}

};

