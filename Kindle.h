#ifndef KINDLE_H
#define KINDLE_H
#include <string.h>
#include <iostream>

using std::string;

class Kindle
{
public:
    Kindle(string);
    Kindle();
    ~Kindle();
    void setNomeLivro(string);
    void getNomeLivro(string);
    void getNomeLivro();
private:
    string nomeLivro;
};

#endif // KINDLE_H
