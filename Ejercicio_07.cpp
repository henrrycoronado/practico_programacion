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
string Libro_1, Libro_2, Libro_3;
cout<<"#Inserte el nombre de tres libros: "<<endl;
getline(cin, Libro_1);
getline(cin, Libro_2);
getline(cin, Libro_3);
cout<<"#El orden inverso de los nombres es:"<<endl;
cout<<Libro_3<<endl;
cout<<Libro_2<<endl;
cout<<Libro_1<<endl;
}
