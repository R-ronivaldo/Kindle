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
	this->quantBiblio = 0;
}

Kindle::Kindle(){
	string nu = "Desconhecido";
	setUser(nu);
	this->quantBiblio = 0;
}

Kindle::Kindle(const Kindle &link3)
 : quantBiblio(link3.quantBiblio)
{
	lBiblioteca = new Biblioteca[ quantBiblio ];
		
	for (int i=0;i<quantBiblio;i++)
		this->lBiblioteca[i] = link3.lBiblioteca[i];
		
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

void Kindle::cadastrarLista(const Biblioteca &bi){
	
	quantBiblio++;
	lBiblioteca = new Biblioteca[quantBiblio];
	lBiblioteca[0] = bi;
		
		
	cout << "A Biblioteca '" << lBiblioteca[0].getNomeBiblio() << "' foi adicionada ao usuario com sucesso!" << endl;
		
	numDeUserAtivos++;
}

void Kindle::adicionarBiblioteca(const Biblioteca &bi){
	if (quantBiblio == 0){
		cadastrarLista(bi);
	} else {
		
		Biblioteca *aux2 = new Biblioteca[quantBiblio];
		
		for(int i = 0; i < quantBiblio; i++){
			aux2[i] = lBiblioteca[i];
			}
			
		delete [] lBiblioteca;
		
		lBiblioteca = new Biblioteca[quantBiblio+1];
		
		for(int i = 0; i < quantBiblio; i++){
			lBiblioteca[i] = aux2[i];
		}
			
		lBiblioteca[quantBiblio] = bi;
		
		delete [] aux2;
	
	cout << "A Biblioteca '" << lBiblioteca[quantBiblio].getNomeBiblio() << "' foi Adicionada ao usuario com sucesso!" << endl;
			
	numDeUserAtivos++;
	quantBiblio++;
}
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
	for (int i=0;i<quantBiblio;i++)
	{
	cout << "Biblioteca : " << this->lBiblioteca[i].getNomeBiblio() << endl;
	}
}
