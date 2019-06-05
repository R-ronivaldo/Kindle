#ifndef LeitorDigital_H
#define LeitorDigital_H

#include "Biblioteca.h"
#include <iostream>
#include <string>
using std::string;
using std::ostream;

class LeitorDigital
{
	friend ostream &operator<<(ostream &, const LeitorDigital &);
	public:
		LeitorDigital(const string &);
		LeitorDigital();
		LeitorDigital(const LeitorDigital &);
		~LeitorDigital();
		
		//Set/Get
		string getUser();
		void setUser(const string &);
		int getQuantBiblio();
		int getMaxBiblio();
		//Fim
		//Metodos para alocação dinâmica
		void adicionarBiblioteca(const Biblioteca &);
		void cadastrarLista(const Biblioteca &);

		//Fim
		//Metodos com operadores
		bool operator==(const LeitorDigital &)const;
		bool operator!=(const LeitorDigital &);
		const LeitorDigital &operator=(const LeitorDigital &);
		//Fim
	private:
		string user;
		int maxBiblio;
		static int numDeUserAtivos;
		Biblioteca *lBiblioteca;
		int quantBiblio;
};

#endif
