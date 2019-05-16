#include "Kindle.h"
#include "Biblioteca.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

Kindle::Kindle(const string &nu,Biblioteca &biblioteca){
	setUser(nu);
	setBiblioteca(biblioteca);
}

Kindle::Kindle(){
	string nu = "Desconhecido";
	setUser(nu);
	
	cout << "Biblioteca não adicionada!" << endl;
}

Kindle::Kindle(const Kindle &link3){
	this->user = link3.user;
	this->biblioteca = link3.biblioteca; 
}

Kindle::~Kindle(){

}

string Kindle::getUser(){
	return user;
	
}

void Kindle::setUser(const string &nu){
	this->user = nu;
}

Biblioteca Kindle::getBiblioteca(){
	return biblioteca;
}

void Kindle::setBiblioteca(Biblioteca &bi){
	this->biblioteca = bi;
}
