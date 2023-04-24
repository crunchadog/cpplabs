#ifndef LAB4_4_BASECOBJECT_H
#define LAB4_4_BASECOBJECT_H

class BaseCObject {
public:
// Имя класса (типа данных).
    virtual const char *classname() const = 0;

// Размер занимаемой памяти.
    virtual unsigned int size() const = 0;
};



#endif
