#include "retezec.h"
#include <iostream>

void retezec::setRetezec(const char *text) {
    char stor[200];
    std::cout << "Zadejte novy retezec: ";
    std::cin.getline(stor, 100);
    int vel = 0;
    while (stor[vel] != '\0') {
        vel++;
    }

    delete[] this->data;
    this->data = new char[vel + 1];
    for (int i = 0; i < vel; ++i) {
        this->data[i] = stor[i];
    }
    this->data[vel] = '\0';
    this->veliky = vel;
}

void retezec::vypis() {
    std::cout << data << std::endl;
}

unsigned int retezec::zjistiDelku() {
    int delka = 0;
    while (this->data[delka] != '\0') {
        delka++;
    }
    return delka;
}

retezec &retezec::operator=(const retezec &copy) {
    if (this != &copy) {
        delete[] this->data;

        this->veliky = copy.veliky;
        this->data = new char[veliky + 1];

        for (int i = 0; i < veliky; ++i) {
            this->data[i] = copy.data[i];
        }
        this->data[this->veliky] = '\0';
    }
    return *this;
}

retezec &retezec::operator+=(const retezec &copy) {
    int vel = this->veliky + copy.veliky;
    char *newD = new char[vel + 1];

    for (int i = 0; i < this->veliky; ++i) {
        newD[i] = this->data[i];
    }

    for (int i = 0; i < copy.veliky; ++i) {
        newD[veliky + i] = copy.data[i];
    }

    newD[vel] = '\0';
    delete[] this->data;
    this->data = newD;
    this->veliky = vel;

    return *this;
}

retezec operator+(const retezec &p, const retezec &d) {
    retezec final;
    final.veliky = p.veliky + d.veliky;
    final.data = new char[final.veliky + 1];
    for (size_t i = 0; i < p.veliky; ++i) {
        final.data[i] = p.data[i];
    }
    for (size_t i = 0; i < d.veliky; ++i) {
        final.data[p.veliky + i] = d.data[i];
    }
    final.data[final.veliky] = '\0';
    return final;
}

char &retezec::operator[](int index) {
    if (index >= 0 && index < veliky) {
        return this->data[index];
    }
    return data[veliky - 1];
}

retezec::retezec() {
    this->data = new char[1];
    this->data[0] = '\0';
}

retezec::retezec(const retezec &copy) {
    this->veliky = copy.veliky;
    this->data = new char[veliky + 1];
    for (int i = 0; i < veliky; i++) {
        data[i] = copy.data[i];
    }
    this->data[veliky] = '\0';
}

retezec::retezec(const char *copy) {
    this->veliky = 0;
    while (copy[veliky] != '\0') {
        veliky++;
    }
    this->data = new char[veliky + 1];
    for (int i = 0; i < veliky; i++) {
        data[i] = copy[i];
    }
    this->data[veliky] = '\0';
}

retezec::~retezec() {

}