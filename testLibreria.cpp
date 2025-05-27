#include <iostream>
#include <vector>
#include "libreria.h"

int main()
{
    std::vector<std::string> text;
    std::string path = "prova.txt";
    readFile(path, text);
    ObjectList l;
    for(std::string a : text)
    {
        l.addObject(a);
    }
    l.stampa();
    return 0;
}
