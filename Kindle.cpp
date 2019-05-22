#include "Kindle.h"
#include "Biblioteca.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>

using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int Kindle::numDeUserAtivos = 0;

Kindle::Kindle(const string &nu){
	setUser(nu);
}

Kindle::Kindle(){
	string nu = "Desconhecido";
	setUser(nu);
}

Kindle::Kindle(const Kindle &link3){
	this->user = link3.user;
}

Kindle::~Kindle(){

}

string Kindle::getUser(){
	return user;
	
}

void Kindle::setUser(const string &nu){
	this->user = nu;
	numDeUserAtivos++;
}

Biblioteca Kindle::getBiblioteca(){
	return biblioteca;
}



void Kindle::addBiblioteca(Biblioteca &bi){
	this->biblioteca = bi;
	
	cout << "Biblioteca " << this->biblioteca.getNomeBiblio() << " adicionada com sucesso ao usuario " << endl;
}

ostream &operator<<(ostream &output, const Kindle &kindle){
	output << "Usuario: " << kindle.user << endl;
	return output;
}

void Kindle::imprimirUser() const {
	int i;
	
	for (i=1;i<=MAXUSER;i++){
	cout << "Usuario : " << this->user << endl;
	}
}

void Kindle::status(){
	
	cout << "Usuario : " << this->user << endl;
	cout << "Biblioteca : " << this->biblioteca.getNomeBiblio() << endl;
}
