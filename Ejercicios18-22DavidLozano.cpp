#include <iostream>

using namespace std;

void ejemplo1()
{

    int datos[4];

    for (int i = 0; i <= 3; i++)
    {
        cout << "Dame el dato " << i + 1 << ": ";
        cin >> datos[i];
    }

    // lista numerada
    cout << "\nLista ordenada: " << endl;
    for (int i = 0; i <= 3; i++)
    {
        cout << "Dato " << i + 1 << ": " << datos[i] << endl;
    }

    // lista al revés
    cout << "\nLista al reves: " << endl;
    for (int i = 3; i >= 0; i--)
    {
        cout << "Dato " << i + 1 << ": " << datos[i] << endl;
    }
}

void ejemplo2()
{

    // Array sobredimensional
    int arrayGrande[1000], contador = 0, actual;

    do
    {
        cout << "Ingrese un dato (el 5555 para salir): ";
        cin >> arrayGrande[contador];

        actual = arrayGrande[contador];
        contador++;

    } while ((actual != 5555) && (contador != 1000));
}

void ej18()
{
    /*Ejercicio 18
       Crea un programa que pida al usuario 4 numero, los memorice utilizando un array,
       calcule su media aritmetrica y finalmente muestre en pantalla tanto la media,
       como los datos
   */

    cout << "\n----Ejercicio 18----" << endl;

    float numeros[4], suma = 0;

    for (int i = 0; i <= 3; i++)
    {
        cout << "Dime un numero: ";
        cin >> numeros[i];  // guardar el numero en el espacio de la array
        suma += numeros[i]; // primero, suma = 0, entonces  suma = numeros[i], luego, se le va sumando suma + numeros[]
    }

    cout << "\nLa media es: " << suma / 4 << endl;
    for (int j = 0; j <= 3; j++)
    {

        cout << "El dato " << j + 1 << " es: " << numeros[j] << endl;
    }
}

void ej19()
{
    /*
        Crea un programa que pida 11 numeros al usuario, los memorice (utlizando una tabla, no variables), calcule su media aritmetrica y finalmente
        muestre en pantalla los datos tecleados y la media
    */
    cout << "\n----Ejercicio 19----" << endl;

    float numeros[11], suma = 0;

    for (int i = 0; i < 11; i++)
    {
        cout << "Dime un numero: ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    cout << "\nLa media es: " << suma / 11 << endl;

    for (int j = 0; j < 11; j++)
    {

        cout << "El dato " << j + 1 << " es: " << numeros[j]<<endl;
    }
    cout<<endl;
}

void ej20()
{
    /*
        Ejercicio 20: ELabrora un programa que almecene en una tabla en numero de dias que tienen cada mes (suponiendo que se trata de un año no bisiesto)
        pida al usuario que indique un mes determinado( considerando 1=enero, 12=diciembre) y muestre en la pantalla el numero de dias que tiene el mes indicado
    */
    cout << "\n----Ejercicio 20----" << endl;
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, opc;
    string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    cout << "Cuantos dias tiene el mes: ";
    cin >> opc;
    cout << meses[opc - 1] << " tiene " << dias[opc - 1] << " dias." << endl;
}

void ej21()
{
    /*
        Ejercicio 21: Crea un programa que pida al usuario diez números enteros e indique cuál es el
        menor.
    */

    cout << "\n----Ejercicio 21----" << endl;
    int numeros[10], menor;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    menor = numeros[9]; // menor va a ser el ultimo numero de la lista
    for (int i = 10; i >= 0; i--)
    {
        if (numeros[i - 1] < menor)
        {                           // si el numero anterior es mmenor
            menor = numeros[i - 1]; // menor pasa a ser el numero anterior
        }
    }

    cout << "El numero menor es: " << menor << endl;
}

void ej22()
{
    /*
        Busca información sobre la “ordenación de burbuja” y crea un programa que pida diez
        datos numéricos al usuario y los muestre ordenados de menor a mayor.
    */
    cout << "\n----Ejercicio 22----" << endl;

    int numeros[10], temporal, cambio = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    cout << "\nValores desordenados: ";

    for (int i = 0; i < 10; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 9; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                temporal = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temporal;

                cambio++;
            }
        }
        if (cambio == 0)break;
        cambio = 0;
    }
    cout<<"Valores ordenados: ";
    for(int i = 0; i < 10; i++){

        cout<<numeros[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    int opc;

    cout << "----Bienvenido----" << endl;
    while (true)
    {
        cout<<"\n--Lista de ejercicios--"<<endl;
        cout << "1. Ejemplo 1" << endl;
        cout << "2. Ejemplo 2" << endl;
        cout << "3. Ejercicio 18" << endl;
        cout << "4. Ejercicio 19" << endl;
        cout << "5. Ejercicio 20" << endl;
        cout << "6. Ejercicio 21" << endl;
        cout << "7. Ejercicio 22" << endl;
        cout << "Que quieres ver: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            ejemplo1();
            break;

        case 2:
            ejemplo2();
            break;

        case 3:
            ej18();
            break;

        case 4:
            ej19();
            break;

        case 5:
            ej20();
            break;

        case 6:
            ej21();
            break;

        case 7:
            ej22();
            break;

        default:

            cout << "Ingrese un valor valido";
            break;
        }
    }

    return 0;
}