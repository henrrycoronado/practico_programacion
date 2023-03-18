/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    string palabra;
    string A;
cout<<"Insertar 5 palabras para unir las iniciales de cada una: "<<endl;
    cin>>palabra;
    A = palabra[0];
    cin>>palabra;
    A += palabra[0];
    cin>>palabra;
    A += palabra[0];
    cin>>palabra;
    A += palabra[0];
    cin>>palabra;
    A += palabra[0];
cout<<A;
}
