#include "Biblioteca.h"
#include "Livro.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

Biblioteca::Biblioteca(const string &no, const Livro &li){
	if (verificarLocatacao() == false){
		setNomeBiblio(no);
		setLivro(li);
	} else {
		cout << "Votação Máxima" << endl;
	}
}

Biblioteca::Biblioteca(){
	string no = "Desconhecido";
	
	setNomeBiblio(no);

}

Biblioteca::Biblioteca(const Biblioteca &link2){
	this->nomeBiblio = link2.nomeBiblio;
	this->livro = link2.livro;
}

Biblioteca::~Biblioteca(){
}

bool Biblioteca::verificarLocatacao(){
	if (MAXLIVROS >= 100){
		return true;
	} else {
		return false;
	}
}



string Biblioteca::getNomeBiblio(){
	return nomeBiblio;
}

void Biblioteca::setNomeBiblio(const string &no){
	this->nomeBiblio = no;
}


Livro Biblioteca::getLivro(){
	return livro;
}

void Biblioteca::setLivro(const Livro &li){

	int i = retornaQLivros();
	
	this->livro = li;
	
	this->lLivros[i] = livro;
}

int Biblioteca::retornaQLivros(){
	int i=0,cont=0;
	
	for (i=0;i<=MAXLIVROS;i++){
		if (this->lLivros[i].getNomeLivro() == ""){
			cont++;
		}
	}
	cont = (6-cont);
	return cont;
}
