#pragma once
#include "MiLista.h"

template<class T>
class MyQueue
{
private:

	MiLista<T> _lista;

public:
	int Count;

	void Enqueue(T data) {
		_lista.Add(data);
		Count++;
	}

	T Dequeue() {

		if (Count > 0) {
			auto temp = _lista.FirstOrDefault();
			_lista.RemoveFirst();
			Count--;
			return temp->GetValor();
		}

		throw "Queue is empty";
	}


	T Peek(T item)
	{
		if (Count > 0) {
			Nodo<T>* primero = _lista.FirstOrDefault();
			return primero->GetValor();
		}

		throw "Queue is empty";
	}
};

