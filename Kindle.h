#ifndef KINDLE_H
#define KINDLE_H
#include <string.h>
#include <iostream>

using std::string;

class Kindle
{
public:
    Kindle();
    ~Kindle();
    void lerLivro();
private:
    int nomeLivro();
};

#endif // KINDLE_H
