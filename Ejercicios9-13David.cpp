#include<iostream>

using namespace std;

void ej9(){
    /*
    Ejercicio 9
    Crea un programa que pida al usuario tres números reales e indique el valor numérico
    del mayor de ellos. Tener en cuenta que el usuario puede meter algún valor repetido.
    */
   cout<<"----Ejercicio 9----"<<endl;
   //Declaración de variables
   int x,y,z;

   //Asignacion de un numero
   cout<<"Ingrese el primer numero real: "; cin>>x;
   cout<<"Ingrese el segundo numero real: "; cin>>y;
   cout<<"Ingrese el tercer numero real: "; cin>>z;

   //comparacion de los numeros
   if(x==y && x==z){//dos son iguales
        cout<<"Los numeros son iguales"<<endl;
   }else if(x == y){//si x = y
        if(x > z){
            cout<<x<<" es el mayor."<<endl;
        }else{
            cout<<z<<" es el mayor."<<endl;
        }
   }else if(z == x){//si z = x
        if(x > y){
            cout<<x<<" es el mayor."<<endl;
        }else{
            cout<<y<<" es el mayor."<<endl;
        }
   }else if(y == z){//si y = z
        if(y > x){
            cout<<y<<" es el mayor."<<endl;
        }else{
            cout<<x<<" es el mayor."<<endl;
        }
   }else if(x > y && x > z){//x mayor
        cout<<x<<" es el mayor."<<endl;
   }else if(y > x && y > z){//y mayor
        cout<<y<<" es el mayor."<<endl;
   }else{//z mayor
        cout<<z<<" es el mayor."<<endl;
   }
}

void ej10(){
    /*
        Problema 10
        Elabora un programa que pida al usuario dos números enteros y diga:” Uno de los
        números es negativo”, “los dos números son negativos” o bien “ Ninguno de los
        números es negativo”, según corresponda.
    */
    cout<<"----Ejercicio 10----"<<endl;
   int x,y;
   cout<<"Ingrese un numero: "; cin>>x;
   cout<<"Ingrese otro numero: "; cin>>y;
   if(x < 0 && y < 0){// x y negativos
        cout<<"Los dos numeros son negativos"<<endl;
   }else if(x > 0 && y > 0){//x y positivos
        cout<<"Ninguno de los números es negativo"<<endl;
   }else if( x < 0 || y < 0){
        cout<<"Uno de los números es negativo"<<endl;
   }
}

void ej11(){
    /*
    Problema 11
    Diseña, usando if, un programa que pida al usuario un número del 1 al 10 y diga si es
    par o no.
    */
    cout<<"----Ejercicio 11----"<<endl;
   int x;
   cout<<"Ingrese un numero del 1 al 10: "; cin>>x;
   if( x % 2 == 0){
        cout<<x<<" es par"<<endl;
   }else{
        cout<<x<<" es impar"<<endl;
   }
}

void ej12(){
    /*
        Problema 12
        Elabora, usando switch, un programa que pida al usuario un número del 1 al 10 y
        escriba el nombre de la nota correspondiente.
    */
    cout<<"----Ejercicio 12----"<<endl;
   int x;
   cout<<"Ingrese un numero del 1 al 10: "; cin>>x;
   switch(x){//ineficiente
        case 1:
            cout<<"Tienes un 1"<<endl;
            break;

        case 2:
            cout<<"Tienes un 2"<<endl;
            break;

        case 3:
            cout<<"Tienes un 3"<<endl;
            break;

        case 4:
            cout<<"Tienes un 4"<<endl;
            break;

        case 5:
            cout<<"Tienes un 5"<<endl;
            break;

        case 6:
            cout<<"Tienes un 6"<<endl;
            break;

        case 7:
            cout<<"Tienes un 7"<<endl;
            break;

        case 8:
            cout<<"Tienes un 8"<<endl;
            break;

        case 9:
            cout<<"Tienes un 9"<<endl;
            break;
        
        case 10:
            cout<<"Tienes un 10"<<endl;
            break;
   }
}

void ej13(){
    /*
    Problema 13
    Crea un programa, usando switch, que pida a un usuario un número del 1 al 10 y diga
    si es múltiplo de 3 o no.
    */
    cout<<"----Ejercicio 13----"<<endl;
    int x, res;
    cout<<"Ingrese un numero del uno al 10: "; cin>>x;
    res = x % 3;
    switch(res){
        case 0:
            cout<<x<<" es multiplo de 3"<<endl;
            break;

        default:
            cout<<x<<" no es multiplo de 3"<<endl;
            break;
    }


}



int main(){
    int opc;
    while(true){
        cout<<"--Lista de ejercicios--"<<endl;
        cout<<"Ejercicio 9"<<endl;
        cout<<"Ejercicio 10"<<endl;
        cout<<"Ejercicio 11"<<endl;
        cout<<"Ejercicio 12"<<endl;
        cout<<"Ejercicio 13"<<endl;
        cout<<"1. Salir "<<endl;
        cout<<"Ejercicio: "; cin>>opc;
        switch(opc){
            case 9:
                ej9();
                break;

            case 10:
                ej10();
                break;
                
            case 11:
                ej11();
                break;

            case 12:
                ej12();
                break;

            case 13:
                ej13();
                break;

            case 1:
                return false;
                break;

            default:
                cout<<"Ingrese un ejercicio valido"<<endl;
                break;
        }
    }
        
    return 0;
}