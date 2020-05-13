using System;
using System.Collections.Generic;

namespace Estructuras
{

    public class Node
    {
        public int Value { get; set; }
        public Node Next { get; set; }
    }

    public class Persona
    {
        public string Nombre { get; set; }
        public string Apellido { get; set; }
        public string Cedula { get; set; }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Persona bilander = new Persona();
            bilander.Nombre = "Bilander";
            bilander.Apellido = "Fernandez";
            bilander.Cedula = "0501641654654654";

            Persona Delia = new Persona();
            Delia.Nombre = "Bilander";
            Delia.Apellido = "Fernandez";
            Delia.Cedula = "0501641654654654";

            //Dictionary<string, bool>
            //Dictionary<string, Person>
            //Dictionary<string, int>
            Dictionary<string, Persona> hashTable = new Dictionary<string, Persona>();
            hashTable.Add("0501641654654654", bilander);
            hashTable.Add("0501641654654654", Delia);


            Console.WriteLine("Valor de Funcion Hash:" + SumaHash("foo"));
            Console.WriteLine("Valor de Funcion Hash:" + SumaHash("ofo"));

            Console.WriteLine("Valor de Funcion Hash:" + FuncionHashDesplazamientoBytes("bilander"));
            Console.WriteLine("Valor de Funcion Hash:" + FuncionHashDesplazamientoBytes("ofo"));
            Console.WriteLine("Valor de Funcion Hash:" + FuncionHashDesplazamientoBytes("ofo"));
            Console.WriteLine("Valor de Funcion Hash:" + FuncionHashDesplazamientoBytes("bilander"));
        }

        public static int SumaHash(string valor)
        {
            int valorActual = 0;

            foreach (char caracter in valor)
            {
                int valorASCII = (int) caracter;
                valorActual += valorASCII;
            }

            return valorActual;
        }

        public static int FuncionHashDesplazamientoBytes(string valor)
        {
            int hashValor = 0;
            int posicionInicial = 0;
            int cuatroBytes = 0;
            do
            {
                cuatroBytes = GetNextBytes(posicionInicial, valor);

                unchecked
                {
                    hashValor += cuatroBytes;
                }

                posicionInicial += 4;
            } 
            while (cuatroBytes != 0);

            return hashValor;
        }

        private static int GetNextBytes(int indexInicial, string cadena)
        {
            int cuatroBytesActuales = 0;
            //FOO
            //OFO

            cuatroBytesActuales += GetBytes(cadena, indexInicial);
            int before = GetBytes(cadena, indexInicial + 1);
            int movingbits = before << 8;
            cuatroBytesActuales += movingbits;
            cuatroBytesActuales += GetBytes(cadena, indexInicial + 2) << 16;
            cuatroBytesActuales += GetBytes(cadena, indexInicial + 3) << 24;

            return cuatroBytesActuales;
        }

        public static int GetBytes(string cadena, int index)
        {
            ///HOLA CLASE DE ESTRUCTURA
            if (index < cadena.Length)
            {
                return (int) cadena[index];
            }

            return 0;
        }

    }
}
