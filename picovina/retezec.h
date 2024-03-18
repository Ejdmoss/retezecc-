#ifndef PICOVINA_RETEZEC_H
#define PICOVINA_RETEZEC_H

class retezec {
private:
    char* data;
    int veliky;

public:
    retezec();
    retezec(const retezec &);
    retezec(const char *);
    ~retezec();
    char& operator[](int index);
    retezec& operator=(const retezec &other);
    retezec& operator+=(const retezec &other);
    friend retezec operator+(const retezec&, const retezec&);
    unsigned int zjistiDelku();
    void setRetezec(const char *);
    void vypis();
};

#endif //PICOVINA_RETEZEC_H
