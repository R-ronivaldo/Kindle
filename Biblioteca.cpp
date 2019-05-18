#include "Biblioteca.h"
#include "Livro.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <cstdlib>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int Biblioteca::numDeLivrosAtivos = 0;

Biblioteca::Biblioteca(const string &no){
		setNomeBiblio(no);
}

Biblioteca::Biblioteca(){
	string no = "Vazio";
	
	setNomeBiblio(no);

}

Biblioteca::Biblioteca(const Biblioteca &link2){
	this->nomeBiblio = link2.nomeBiblio;
}

Biblioteca::~Biblioteca(){
}



string Biblioteca::getNomeBiblio(){
	return nomeBiblio;
}

void Biblioteca::setNomeBiblio(const string &no){
	this->nomeBiblio = no;
}

///////////////////////////////////////////////////////////////////////

Livro Biblioteca::getLivro(){
	return livro;
}

void Biblioteca::addLivro(const Livro &li) {
	
	this->livro = li;
	
	this->lLivros[numDeLivrosAtivos] = livro;
	cout << "Livro '" << this->lLivros[numDeLivrosAtivos].getNomeLivro() << "' adicionado na biblioteca com sucesso!" << endl;
	numDeLivrosAtivos++;

}

////////////////////////////////////////////////////////////////

void Biblioteca::imprimeBiblio(){
	
	cout << "Biblioteca : " << this->nomeBiblio << endl;
}

void Biblioteca::imprimeLivros() {
	int i=0;
	for (i=0;i<=(numDeLivrosAtivos-1);i++){
	cout << "Nome do " << (i+1) << "o Livro: " << lLivros[i].getNomeLivro() << endl;
	}
}

