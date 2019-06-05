#include "LeitorDigital.h"
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

int LeitorDigital::numDeUserAtivos = 0;

LeitorDigital::LeitorDigital(const string &nu){
	setUser(nu);
	this->quantBiblio = 0;
}

LeitorDigital::LeitorDigital(){
	string nu = "Desconhecido";
	setUser(nu);
	this->quantBiblio = 0;
}

LeitorDigital::LeitorDigital(const LeitorDigital &link3)
 : quantBiblio(link3.quantBiblio)
{
	lBiblioteca = new Biblioteca[ quantBiblio ];
		
	for (int i=0;i<quantBiblio;i++)
		this->lBiblioteca[i] = link3.lBiblioteca[i];
		
	this->user = link3.user;
	
	
}

LeitorDigital::~LeitorDigital(){

}

//
// Metodos Set/Get padrão

string LeitorDigital::getUser(){
	return this->user;
	
}

void LeitorDigital::setUser(const string &nu){
	this->user = nu;
	this->numDeUserAtivos++;
}

int LeitorDigital::getQuantBiblio(){
	return this->quantBiblio;
}

int LeitorDigital::getMaxBiblio(){
	return this->maxBiblio;
}



// Fim Medotos Padrões Set/Get
//


//Metodo para alocar e cadastrar ponteiro dinâmicos
//

void LeitorDigital::cadastrarLista(const Biblioteca &bi){
	
	quantBiblio++;
	lBiblioteca = new Biblioteca[quantBiblio];
	lBiblioteca[0] = bi;
		
		
	cout << "A Biblioteca '" << lBiblioteca[0].getNomeBiblio() << "' foi adicionada ao usuario com sucesso!" << endl;
}

void LeitorDigital::adicionarBiblioteca(const Biblioteca &bi){
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
			
	quantBiblio++;
}
}

//Fim Metodo de alocação dinâmica
//

//Metodos com operadores
//

ostream &operator<<(ostream &output, const LeitorDigital &leitor){
	output << "Numero de Bibliotecas cadastradas: " << leitor.quantBiblio << endl;
	output << "Numero maximo de Bibliotecas suportadas: " << leitor.maxBiblio << endl;
	
	for (int i=0; i < leitor.quantBiblio;i++)
	output << "Nome(s) da(s) Biblioteca(s) cadastrada(s): " << leitor.lBiblioteca[i].getNomeBiblio() << endl;
	
	return output;
}

bool LeitorDigital::operator==(const LeitorDigital &leitor)const{
	if (user != leitor.user){
		return false;
	} else {
		return true;
	}
}

bool LeitorDigital::operator!=(const LeitorDigital &leitor){
	return ! (*this == leitor);
}

const LeitorDigital &LeitorDigital::operator=(const LeitorDigital &link){
	if (&link != this){
		user = link.user;
		numDeUserAtivos = link.numDeUserAtivos;
		maxBiblio = link.maxBiblio;
		quantBiblio = link.quantBiblio;
		
		if (quantBiblio != link.quantBiblio){
			delete [] lBiblioteca;
			lBiblioteca = new Biblioteca[quantBiblio];
		}
		
		for (int i=0; i < link.lBiblioteca[i].getQuantLivros(); i++)
		lBiblioteca[i] = link.lBiblioteca[i];
	}
}

//Fim Metodos com operadores
//
#include "LeitorDigital.h"
