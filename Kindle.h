#ifndef KINDLE_H
#define KINDLE_H
#define <string.h>

using std::string;

class Kindle (string)
{
public:
    Kindle();
    ~Kindle();
    void lerLivro();
    void addLivro();
    void removerLivro();
private:
    int numeroLivros();
};

#endif // KINDLE_H
