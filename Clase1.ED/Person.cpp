#include "Person.h"

using namespace std;

Person::Person(string nombre, string apellido, int valor)
	: _nombre(nombre), _apellido(apellido), _numeroAleatorio(valor)
{
}

string Person::GetNombre()
{
	return _nombre + " " + _apellido;
}

Person::~Person()
{

}

bool Person::operator<(Person const& person) const
{
	return _numeroAleatorio < person._numeroAleatorio;
}