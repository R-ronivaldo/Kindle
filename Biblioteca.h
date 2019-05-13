#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <string>
using std::string;

class Biblioteca
{
	public:
		Biblioteca(const string &, const string &, const string &, const string &, const string &, const string &,const string &, const string &);
		Biblioteca();
		Biblioteca(const Biblioteca &);
		void setBiblioteca(const string &);
		void getBiblioteca() const;
		void inicializarEstante(const string &, const string &, const string &, const string &, const string &);
		void imprimeEstante() const;
		void addLivroEstante (const string &, const string &);
	private:
		string nomeBiblioteca;
		
		static const int LIVROSPORESTANTES = 20;
		static const int NUMDEESTANTES = 5;
		static int totalEstanteAtivas;
		string estante1[LIVROSPORESTANTES];
		string estante2[LIVROSPORESTANTES];
		string estante3[LIVROSPORESTANTES];
		string estante4[LIVROSPORESTANTES];
		string estante5[LIVROSPORESTANTES];
};

#endif
