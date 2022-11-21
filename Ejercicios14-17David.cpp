#include<iostream>
#include<stdlib.h>

using namespace std;

void ej14(){
    /*
        Problema 14
        Diseña un programa, usando while, que escriba en pantalla, de mayor a menor, los
        números impares pares del 1 al 30.
    */
   cout<<"----Ejercicio 14----"<<endl;
   int numero = 30;
    cout<<"Numero pares: ";
    while(numero>0){
        if(numero%2==0){
            cout<<numero<<" ";
        }
        numero--;
    }
    cout<<endl;

    // reseteo del valor de numero para que pueda seguir con el siguiente bucle
    numero = 30;

    cout<<"Numero impares: ";
    while(numero>0){
        if(numero%2!=0){
            cout<<numero<<" ";
        }
        numero--;
    }
    cout<<endl;
    cout<<endl;
}

void ej15(){
    /*
    Problema 15
    Elabora un programa que dé al usuario la oportunidad de adivinar un número del 1 al
    100, en un máximo de seis intentos. En cada intento, el programa deberá avisar al
    usuario de si se ha pasado o se ha quedado corto.
    */
   cout<<endl;
   cout<<"----Ejercicio 15----"<<endl;
   int numero, adivinar= 4, cont = 1;
   cout<<"Adivina un numero del 1 al 100: ";cin>>numero;
   while (cont<=6){
        //si adivinaste
        if(numero == adivinar){
            cout<<"Adivinaste!!\nNumero de intentos: "<<cont<<endl;
            break;
        }

        // si tu numero es mayor 
        if(numero>adivinar) cout<<"Te has pasado"<<endl;

        // si tu numero es menor
        if(numero < adivinar) cout<<"Te has quedado corto"<<endl;

        // si el contador = 6, salir del bucle
        if(cont==6){
            cout<<"No acertaste!! Numero maximo de intentos ingresados"<<endl;
            cout<<"El numero era: "<<adivinar<<endl;
            break;
        } 
        cout<<"Dime otro numero: "; cin>>numero;
        cont++;
   }
   cout<<endl;
}

void ej16(){
    /*
    Problema 16
    Crea un programa que pida números positivos al usuario y calcule la suma de todos
    ellos (saldremos del bucle con un número negativo o con el cero).
    */
   cout<<endl;
    cout<<"----Ejercicio 16----"<<endl;

    int numeros, num = 0, num2 = 0;
    cout<<"Ingrese la cantidad de numeros que tu quieres sumar: "; cin>>numeros;

    for(int i = 0; i<numeros; i++){
        cout<<"Ingrese un numero: "; cin>>num;
        num2 += num;
    }
    
    cout<<"La suma de los numeros es: "<<num2<<endl;
    cout<<endl;
    

}

void ej17(){
    /*
    Problema 17
    Elabora un programa que pida al usuario su código de usuario y su contraseña, y que
    no le permita finalizar hasta que introduzca el código de usuario 2017 y la contraseña
    7890.
    */
   cout<<endl;
    cout<<"----Ejercicio 17----"<<endl;
    int contrasena, contra_buena = 7890, usuario, us_bueno = 2017;

    cout<<"Ingrese su codigo de usuario: "; cin>>usuario;
    cout<<"Ingrese su contraseña: "; cin>>contrasena;

    while(contrasena != contra_buena || usuario != us_bueno){

        if(usuario != us_bueno){
            cout<<"Codigo de usuario incorrecto, ingreselo otra vez: "; cin>>usuario;
        }

        if(contrasena != contra_buena){
            cout<<"Contraseñña incorrecta, ingresela otra vez: "; cin>>contrasena;

        }
    }

    cout<<"Has iniciado sesion!"<<endl;
    cout<<"Bienvenido "<<usuario<<endl;
    cout<<endl;
}


int main(){

    int opc;
    cout<<"----Bienvenido----"<<endl;
    while(true){
        cout<<"-Ejercicio 14-"<<endl;
        cout<<"-Ejercicio 15-"<<endl;
        cout<<"-Ejercicio 16-"<<endl;
        cout<<"-Ejercicio 17-"<<endl;
        cout<<"-1. Salir-"<<endl;
        cout<<"Ejercicio: "; cin>>opc;
        switch(opc){
            case 14:
                ej14();
                break;

            case 15:
                ej15();
                break;

            case 16:
                ej16();
                break;
            
            case 17:
                ej17();
                break;
            
            case 1:
                return false; 
                break;
            
            default:
                cout<<"Ingrese un ejercicio valido!!"<<endl;
        }
    }
 
    return 0;
}