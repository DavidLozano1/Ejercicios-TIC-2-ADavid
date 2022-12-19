#include<iostream>

using namespace std;

//Ejercicio 26
int escribirTabla(int num){
    cout<<"La tabla del "<<num<<" :"<<endl;

    for(int i = 0; i<=10; i++){
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;

    }

    return 0;
}

//Ejercicio 27
int suma(int x, int y, int z){

    int suma = x + y + z;
    return suma;
}

//Ejercicio 28
bool esPrimo(int num){
    int restos = 0;

    for(int i = 1; i <= num; i++){//comprobar todas las divisiones

        if( num % i == 0){// si el resto del numero entre la division es 0
            restos ++;//restos = restos +1
        }
       
    }

    if(restos > 2){// si es divisible entre 1, el mismo, y alguno mas, no es primo
        return false;

    }else{//si restos es igual a dos
        return true;

    }        
}

//Ejercicio 29
int intercambiar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

    cout<<"Valores intercambiados: "<<a<<", "<<b<<endl;

    cout<<endl;
    
    return 0;
}

int main(){

    int opc,num1, num2, num3, num4, primo, num5, num6;

    cout<<"----Bienvenido----"<<endl;
    while(true){
        cout<<"--Ejercicio 26--"<<endl;
        cout<<"--Ejercicio 27--"<<endl;
        cout<<"--Ejercicio 28--"<<endl;
        cout<<"--Ejercicio 29--"<<endl;
        cout<<"--1. Salir--"<<endl;
        cout<<"Ejercicio: "; cin>>opc;

        switch(opc){
            case 26: 
                /*Ejercicio 26
                Crea una funcion escribir tabla que muestre en pantalla
                la tabla de multiplicar del numero que el usuario
                introduzca por teclado
                */
                cout<<"\nNumero a multiplicar: "; cin>>num1;
                escribirTabla(num1);
                cout<<endl;
                break;

            case 27:
                /*Ejercicio 27
                Crea una funcion suma que devuelva la suma de tres numeros
                que se indiquen como parametros
                */
                cout<<"\nIngrese un numero: "; cin>>num2;
                cout<<"Ingrese otro numero: "; cin>>num3;
                cout<<"Ingrese el ultimo numero: "; cin>>num4;

                cout<<"La suma de los numeros es: "<<suma(num2, num3, num4)<<endl;

                cout<<endl;
                break;

            case 28:
                /*Ejercicio 28
                Crea una funcion esPrimo que reciba un numero y devuelva el valor 1 si es primo y el 
                0 si no lo es
                */
                cout<<"\nNumero que quieres comprobar: "; cin>>primo;
                if(esPrimo(primo) == false){
                    cout<<primo<<" no es un numero primo"<<endl;

                }else{
                    cout<<primo<<" es un numero primo"<<endl;

                }
                cout<<endl;
                break;
            
            case 29:
                /*Ejercicio 29
                Crea un funcion intercambia que reciba dos numeros enteros e intercambie sus valores
                por medio de la utilizacion de dos parametros por referencia;
                intercambiar(int &a, int &b)
                */
                cout<<"\nIngrese un numero: "; cin>>num5;
                cout<<"Ingrese otro: "; cin>>num6;

                cout<<"Valores introducidos: "<<num5<<", "<<num6<<endl;
                intercambiar(num5, num6);

                break;
            
            case 1:
                cout<<"Hasta otra!!"<<endl;
                return false;
                break;
            
            default:
                cout<<"Introduce una opcion valida!!"<<endl;
                
        }

    }

    return 0;
}