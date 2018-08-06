#include "pila_enla.hpp"
#include <iostream>
#include <cstring>
#include <fstream>

bool cmpstr(const char*);

bool cmpsec(const char*);

Pila<int> invstack(Pila<int>, int, int);

void wres(std::fstream&);