#include <iostream>
#include <string>
#include <math.h>
#define PI 3.14159265
using namespace std;

//1.

int main() {
  string n,d,h;
  int edad,t;
  cout<<"Nombre: "; cin>>n;
  cout<<"Edad: "; cin>>edad;
  cout<<"Telefono: "; cin>>t;
  cout<<"Direccion: "; cin>>d;
  cout<<"Hobby: "; cin>>h;

  cout<<"Datos: \n"<<"Nombre: \t"<<n<<"\n Edad: \t"<<edad<<"\n Telefono: \t"<<t<<"\n Direccion: \t"<<d<<"\n Hobby: \t"<<h;
  return 0;
}

//2.

int main(){
  float x,y;
  cout<<"Escribe un numero: "; cin>>x;
  cout<<"Escribe un numero: ";cin>>y;
  cout<<"Suma: \t"<<x+y<<"\n";
  cout<<"Resta: \t"<<x-y<<"\n";
  cout<<"Multiplicacion: \t"<<x*y<<"\n";
  cout<<"Division: \t"<<x/y<<"\n";
  cout<<"Raiz Cuadrada: \t"<<sqrt(x)<<"\t y \t"<<sqrt(y);
}

//3.
int main(){
  float c,r,b,h;
  cout<<"Escribe un numero para el area: "; cin>> c;
  cout<<"Area del cuadrado: "<<pow(c,2)<<"\n";

  cout<<"Escribe un radio:"; cin>>r;
  cout<<"Area del circulo: "<< PI*(r*r)<<"\n";
  
  cout<<"Escribe la base:"; cin>>b;
  cout<<"Escribe la altura:"; cin>>h;
  cout<<"Area del triangulo: "<<(b*h)/2;
}
