#include<iostream>
#include<iomanip>//para poner decimales en la division del Ejercicio 8

using namespace std;

int main(){
	
	//Ejemplo de condicional
	cout<<"----Ejemplo condicional----"<<endl;
	//Declaro la variable numero
	int num;
	//Muestro por pantalla el mensaje
	cout<<"Ingrese un numero: "; cin>>num;//guardo numero ingresado en la variable num
	//eleccion
	if(num<0){
		//mostrar num es negativo
		cout<<num<<" es negativo"<<endl;
		
	}else if(num>0){
		//mostrar num es positivo
		cout<<num<<" es positivo"<<endl;
		
	}else{
		//mostrar que el numero es 0
		cout<<"Error!!, no se puede dividir entre cero"<<endl;
		
	}
	
	/*EJERCICIO 5
	* Crea un programa que pida un numero entero al usuario e indique si es multiplo de 5
	* para ello debera comprobar si el resto que obtiene al dividir dicho numero entre 5 es 0
	*/
	cout<<"----Ejercicio 5----"<<endl;
	int x, res;
	cout<<"Ingresa un numero entero: "; cin>>x;
	res = x % 5;
	
	if(res == 0){
		cout<<x<<" es múltiplo de 5"<<endl;
	}else{
		cout<<x<<" no es múltiplo 5"<<endl;
	}
	
	/*EJERCICIO 6
	 * Realiza un programa que pida dos numeros e indique si el primero es multiplo del segundo
	 */
	 cout<<"----Ejercicio 6----"<<endl;
	 int y,z,res2;
	 cout<<"Ingrese un numero: "; cin>>y;
	 cout<<"Ingrese otro numero: "; cin>>z;
	if(z != 0){
		res2 = y%z;
		if(res2==0){
		 cout<<y<<" es múltiplo de "<<z<<endl;

		}else{
		cout<<y<<" no es múltiplo de "<<z<<endl;
		
		}
	}else{
		cout<<"Error!!"<<endl;
	}
	
	 
	 /*EJERCICIO 7
	  * Crea un programa que pida al usuario dos numeros enteros y diga cual es menor
	  */
	cout<<"----Ejercicio 7----"<<endl;
	int n1,n2;
	cout<<"Ingrese un número: "; cin>>n1;
	cout<<"Ingrese otro número: "; cin>>n2;
	if(n1>n2){
		cout<<n1<<" es mayor que "<<n2<<endl;
	}else{
		cout<<n2<<" es mayor que "<<n1<<endl;

	}

	/*EJERCICIO 8
	* Realiza un programa que pida dos numeros al usuario, si el segundo no es 0, mostrará la división de ambos
	* de lo contrario aparecerá un mensaje de error
	*/
	cout<<"----Ejercicio 8----"<<endl;
	float n3,n4,res3;
	cout<<"Ingrese un número: "; cin>>n3;
	cout<<"Ingrese otro numero: "; cin>>n4;
	if(n4 != 0){
		res3 = n3/n4;
		//setprecision(2) para poner 2 decimales en la variable res3
		cout<<n3<<" / "<<n4<<" = "<<setprecision(2)<< fixed << res3<<endl;
	}else{
		cout<<"Error!!";
	}
	 
	return 0;
}
