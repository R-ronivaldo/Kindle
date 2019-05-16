#include "Kindle.h"
#include "Biblioteca.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Kindle kindle1 ("JrKindle");
	kindle1.imprimirUser();
	
	Biblioteca biblio1("Saraiva");
	
	Livro livro1("Harry Potter", "J.K", "Fantasia");
	Livro livro2("Nine Tomorrows", "Isaac Asimov", "Conto");
	Livro livro3("The Black Circle", "Patrick Carman", "Fantasia");
	
	
	kindle1.addBiblioteca(biblio1);
	biblio1.addLivro(livro1);
	biblio1.addLivro(livro2);
	biblio1.addLivro(livro3);
	
	kindle1.status();
	
}
