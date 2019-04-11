    
#ifndef KINDLE_H
#define KINDLE_H
#include <string.h>
#include <iostream>

using std::string;

class Kindle
{
public:
    
    Kindle(string);
	void setNomeLivro(string);

    
    ~Kindle();
    
private:
	
	string nomeLivro;
	int idLivro;
	string autorLivro;
	int anoLivro;
    
};

#endif // KINDLE_H
