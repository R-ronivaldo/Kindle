#include "Biblioteca.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
	
	static int totalEstanteAtivas=0;
	
	Biblioteca::Biblioteca(const string &NOMEBIBLIO, const string &NOMEESTANTE1, const string &NOMEESTANTE2, const string &NOMEESTANTE3, const string &NOMEESTANTE4, const string &NOMEESTANTE5, const string &NLIVRO, const string &NESTANTE){
			
			setBiblioteca(NOMEBIBLIO);
			addLivroEstante (NLIVRO, NESTANTE);
			inicializarEstante(NOMEESTANTE1,NOMEESTANTE2,NOMEESTANTE3,NOMEESTANTE4,NOMEESTANTE5);
			
			imprimeEstante();
	}
	
	Biblioteca::Biblioteca(){
		int i=0;
	
			for (i=0;i<=LIVROSPORESTANTES;i++){
			this->estante1[i] = "Vazio";
			}
			for (i=0;i<=LIVROSPORESTANTES;i++){
			this->estante2[i] = "Vazio";
			}
			for (i=0;i<=LIVROSPORESTANTES;i++){
			this->estante3[i] = "Vazio";
			}
			for (i=0;i<=LIVROSPORESTANTES;i++){
			this->estante4[i] = "Vazio";
			}
			for (i=0;i<=LIVROSPORESTANTES;i++){
			this->estante5[i] = "Vazio";
			}
		
			imprimeEstante();

	}
	
	Biblioteca::Biblioteca(const Biblioteca &LINK){
		int i;
		
		for (i=0;i<=LIVROSPORESTANTES;i++){
			this->estante1[i] = LINK.estante1[i];
			this->estante2[i] = LINK.estante2[i];
			this->estante3[i] = LINK.estante3[i];
			this->estante4[i] = LINK.estante4[i];
			this->estante5[i] = LINK.estante5[i];
		}
			imprimeEstante();
	}
	
	void Biblioteca::setBiblioteca(const string &NOME){
		this->nomeBiblioteca = NOME;
			
			getBiblioteca();
	}
	
	void Biblioteca::getBiblioteca() const {
		cout << "Biblioteca " << nomeBiblioteca << endl;
	}
	
	void Biblioteca::inicializarEstante(const string &NOME1, const string &NOME2, const string &NOME3, const string &NOME4, const string &NOME5){
		int i=0;
		
		if (this->estante1[0] != "Vazio"){
			this->estante1[0] = NOME1;
			for (i=1;i<=LIVROSPORESTANTES;i++){
			this->estante1[i] = "reservado";
			}
			
			this->estante2[0] = NOME2;			
			for (i=1;i<=LIVROSPORESTANTES;i++){
			this->this->estante2[i] = "reservado";
			}

			this->estante3[0] = NOME3;
			for (i=1;i<=LIVROSPORESTANTES;i++){
			this->estante3[i] = "reservado";
			}
			
			this->estante4[0] = NOME4;
			for (i=1;i<=LIVROSPORESTANTES;i++){
			this->estante4[i] = "reservado";
			}
			
			this->estante5[0] = NOME5;
			for (i=1;i<=LIVROSPORESTANTES;i++){
			this->estante5[i] = "reservado";
			}
		} else {
			cout << "Estante já inicializada!" << endl;
		}
	}	
	
	void Biblioteca::imprimeEstante() const {
		int i=0;
		
		cout << "Livros na Estante 1" << endl;
		for (i=0;i<LIVROSPORESTANTES;i++){
			cout << this->estante1[i] << " - ";
			}
			cout << endl;
			
			cout << "Livros na Estante 2" << endl;
		for (i=0;i<this->LIVROSPORESTANTES;i++){
			cout << this->estante2[i] << " - ";
			}
			cout << endl;
			
			cout << "Livros na Estante 3" << endl;
		for (i=0;i<this->LIVROSPORESTANTES;i++){
			cout << this->estante3[i] << " - ";
			}
			cout << endl;
			
			cout << "Livros na Estante 4" << endl;
		for (i=0;i<this->LIVROSPORESTANTES;i++){
			cout << this->estante4[i] << " - ";
			}
			cout << endl;
			
			cout << "Livros na Estante 5" << endl;
		for (i=0;i<this->LIVROSPORESTANTES;i++){
			cout << this->estante5[i] << " - ";
			}
			cout << endl;
	}
	
	
void Biblioteca::addLivroEstante (const string &NOME, const string &NESTANTE){
	int cont=0,i=0;
	
	if(this->estante1[0] == NESTANTE){
	for (i=0;i<=LIVROSPORESTANTES;i++){
		if (this->estante1[i] == "reservado" || this->estante1[i] == "Vazio" ){
			cont = cont+1;
		}
	}
	cont = (21-cont);
	this->estante1[cont] = NOME;
	this->totalEstanteAtivas++;
	}
	
	else	if(this->estante2[0] == NESTANTE){
	for (i=0;i<=LIVROSPORESTANTES;i++){
		if (this->estante2[i] == "reservado" || this->estante2[i] == "Vazio" ){
			cont = cont+1;
		}
	}
	cont = (21-cont);
	this->estante2[cont] = NOME;
	this->totalEstanteAtivas++;
	}
	
	else 	if(this->estante3[0] == NESTANTE){
	for (i=0;i<=LIVROSPORESTANTES;i++){
		if (this->estante3[i] == "reservado" || this->estante3[i] == "Vazio" ){
			cont = cont+1;
		}
	}
	cont = (21-cont);
	this->estante3[cont] = NOME;
	this->totalEstanteAtivas++;
	}
	
	else if(this->estante4[0] == NESTANTE){
	for (i=0;i<=LIVROSPORESTANTES;i++){
		if (this->estante4[i] == "reservado" || this->estante4[i] == "Vazio" ){
			cont = cont+1;
		}
	}
	cont = (21-cont);
	this->estante4[cont] = NOME;
	}
	
	else if(this->estante5[0] == NESTANTE){
	for (i=0;i<=LIVROSPORESTANTES;i++){
		if (this->estante5[i] == "reservado" || this->estante5[i] == "Vazio" ){
			cont = cont+1;
		}
	}
	cont = (21-cont);
	this->estante5[cont] = NOME;
	}
}
