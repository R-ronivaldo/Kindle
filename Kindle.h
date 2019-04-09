#ifndef KINDLE_H
#define KINDLE_H
#include <string.h>
#include <iostream>

using std::string;

class Kindle
{
public:
    :Kindle(const string,int,const string,int);
    Kindle();
    ~Kindle();
    void setLivro(const string,int,const string,int);
    void setNomeLivro() const;
    void getLivro(const string,int,const string,int) const;
private:
    string nomeLivro;
    int idLivro;
    string autorLivro;
    int anoLivro;
    
};

#endif // KINDLE_H
