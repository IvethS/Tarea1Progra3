#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
//lo realice con ayuda de trabajos de las clases previas a programacion 3.
int sumar(int a, int b)
{
//aqui lo unico que se hace es declarar las variables
//y poner el operador matematico que hace la suma.
    return a+b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
//de la misma forma se declaran las variables
//y luego solo se hace la operacion matematica.
    return a-b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
//aqui lo que hace con las variables declaradas es
//hacer la operacion matematica de la multiplicacion.
    return a*b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
//con las variables ya que declaradas solo se hace
//la operacion matematica de la division.
    return a/b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
//con las variables declaradas se hace una condicion
//esta compara si a es mayor que b entonces nos devolvera la respuesta correcta.
        if(a > b)
            return a;
	           else
	              return b;

}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
//aqui hacemos una condicion if, donde comparamos de igual forma
//si a es menor a b o b es menor a. con un return devolvemos la respuesta.
    if(a < b)
            return a;
	           else
	              return b;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
//aqui hacemos el uso multiplo de una condicion if
//donde hace comparacion de 3 variables y de esa forma obtiene el mayor.
     if(a > b)
	           if(a>c)
	              return a;
	           else
	              return c;
	        else if(b>c)
	              return b;
	                else
	              return c;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
//aqui solo se coloca la variable arreglo, y mostrara la posicion y nos devolvera
//el valor.
        arreglo[posicion]=valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
//aqui obtiene la posicion del arreglo que definamos.
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
//aqui se hacen funciones multiples
//primero declaramos la variable que obtendra el numero mayor
//despues hacemos uso del ciclo for donde comparamos el tamano que se dio
//una vez hecho esto se hace una condicion if para comparar
//y luego se devuelva el numero mayor.
    int nummayor =0;
for (int i=0;i<tamano;i++)

if (arreglo[i]>nummayor)
{
nummayor=arreglo[i];
}

    return nummayor;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
//aqui como lo aprendimos anteriomente en clase
//se pone un limite para que pueda obtener el menor
//despues se hace uso de un ciclo y de la condicion if
//y nos devuelve el numero menor.
   int nummenor =999;
for (int i=0;i<tamano;i++)

if (arreglo[i]<nummenor)
{
nummenor=arreglo[i];
}

    return nummenor;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
//aqui para poder obtener el promedio debemos declarar una variable que hara el proceso
//hacemos el uso del ciclo, y luego le obtiene el valor asignado
//y nos devuelve por medio de una variable el calculo.
int suma=0;
for (int i=0;i<tamano;i++)
suma+=arreglo[i];
int getPromedio=0;
   return getPromedio=suma/tamano;
   }
int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
