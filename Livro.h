#ifndef LIVRO_H
#define LIVRO_H

#include <string>
using std::string;

class Livro
{
	public:
	
		Livro(const string &, const string &);
		Livro();
		Livro(const Livro &);
		~Livro();
		
		void setLivro (const string &, const string &);
		void getLivro() const;
		void setBiblioteca(const string &,const string &);
		
	private:	
	
		string nomeLivro;
		string estanteLivro;
		
		static const int NUMEROTOTALLIVRO=100;
		static int totalLivrosEstante;
};

#endif
