#include <iostream>
#include <math.h>
using namespace std;

//Profesor, en la divison del primer ejercicio cuando le restrinjo el 0 no se ejecuta, pero en el ejercicio 2 si

// 1
int main() {
  int x,y;
  cout << "Ingrese un numero: ", cin >> x;
  cout << "Ingrese un numero: ", cin >> y;
  cout << "\n";
  cout<< "x+y: " << x+y <<"\n";
  cout<< "x-y: " << x-y <<"\n";
  cout<< "x*y: " << x*y <<"\n";
  if(x/y){
    if(y == 0){
    cout << "y no puede ser 0";
    }
      else{
        cout<< "x/y: " << x/y <<"\n"; 
      }
  }
  if(x%y){ 
    if(y == 0){
      cout << "y no puede ser 0";
    }
      else{
        cout<< "x%y: " << x%y <<"\n";
      }
  }  
  cout <<"\n";
  if (x>y){
    cout << x << " es mayor que " << y;
    cout << "\n";
    cout << y << " es mayor que " << x;
  }
    else if (x<y){ 
      cout<< y << " es mayor que " << x;
      cout << "\n";
      cout<< x << " es menor que " << y;
    }
    else {
      cout << "los numeros son iguales";
    }
  cout <<"\n";
  if(x/y==0){
    cout << x << " es divisor de " << y;
  }  
  if(y/x==0){
    cout << y << " es divisor de " << x;
  }
return 0;
}

// 2
int main(){
  int x,y;
  char z;
  cout << "Ingrese un numero: ", cin >> x;
  cout << "Ingrese un numero: ", cin >> y;
  cout << "Escoge un operador: ", cin >> z;
  cout <<"\n";
  if(z == '+'){
    cout << "x+y: " << x+y;
  }
  if(z == '-'){
    cout << "x-y: "<< x-y;
  }
  if(z == '*'){
    cout << "x*y: "<< x*y;
  }
  if(z == '/'){
    if(y==0){
      cout << "El divisor no puede ser 0";
    }
      else{
        cout << "x/y: "<< x/y;
      }
  }
  if(z == '%'){
    cout << "x%y: " << x%y;
  }
  if(z == '~'){
    cout << "Raiz cuadrada de "<< x << " es " <<sqrt(x)<<"\n";
    cout << "Raiz cuadrada de "<< y << " es " <<sqrt(y)<<"\n";
  }
return 0;
}