#include <iostream>
#include "retezec.h"

int main() {
    const char *string1 = "Texxxtt";
    const char *string2 = "Stringggss";
    retezec s0();
    retezec s1(string1);
    retezec s2(string2);
    retezec s3;
    std::cout << "Objekt vytvoreny vychozim konstruktorem" << std::endl;
    std::cout << "s0: " << s0 << std::endl;
    std::cout << "Objekty vytvorene konstruktorem s parametrem" << std::endl;
    std::cout << "s1: ";
    s1.vypis();
    std::cout << "s2: ";
    s2.vypis();
    std::cout << "Objekt vytvoreny kopirovacim konstuktorem" << std::endl;
    retezec s4(string1);
    std::cout << "s4: ";
    s4.vypis();
    std::cout << "\nPrirazeni " << "(s2 = s1)" << std::endl;
    s2 = s1;
    std::cout << "s1: ";
    s1.vypis();
    std::cout << "s2: ";
    s2.vypis();
    std::cout << "\nSecteni " << "(s3 = s1 + s2)" << std::endl;
    s3 = s1 + s2;
    std::cout << "s1: ";
    s1.vypis();
    std::cout << "s2: ";
    s2.vypis();
    std::cout << "s3: ";
    s3.vypis();
    std::cout << "\nPricteni " << "(s1 += s2 + s3)" << std::endl;
    s1 += s2 + s3;
    std::cout << "s1: ";
    s1.vypis();
    std::cout << "s2: ";
    s2.vypis();
    std::cout << "s4: ";
    s3.vypis();
    return 0;
}
