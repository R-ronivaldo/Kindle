#ifndef KINDLE_H
#define KINDLE_H

#include "Biblioteca.h"
#include <iostream>
#include <string>
using std::string;
using std::ostream;

class Kindle
{
	friend ostream &operator<<(ostream &, const Kindle &);
	public:
		Kindle(const string &);
		Kindle();
		Kindle(const Kindle &);
		~Kindle();
		
		string getUser();
		void setUser(const string &);
		
		void adicionarBiblioteca(const Biblioteca &);
		void cadastrarLista(const Biblioteca &);
		
		void imprimirUser()const;
		
		void status();
		
	private:
		string user;
		
		Biblioteca *lBiblioteca;
		int quantBiblio;
		
		static int numDeUserAtivos;
		static const int MAXUSER = 1;
		string lUser[MAXUSER];
};

#endif
