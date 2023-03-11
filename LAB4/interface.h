// Интерфейс "Геометрическая фигура".

#include "iostream"

class IGeoFig {
public:
// Площадь.
    virtual double square() const = 0;

// Периметр.
    virtual double perimeter() const = 0;
};


// Вектор
class CVector2D {
public:
    double x, y;

    CVector2D();

    friend std::ostream &operator<<(std::ostream &output, const CVector2D &vec);

    friend std::istream &operator>>(std::istream &input, CVector2D &vec);

};

// Интерфейс "Физический объект".
class IPhysObject {
public:
// Масса, кг.
    virtual double mass() const = 0;

// Координаты центра масс, м.
    virtual CVector2D position() const = 0;

// Сравнение по массе.
    virtual bool operator==(const IPhysObject &ob) const = 0;

// Сравнение по массе.
    virtual bool operator<(const IPhysObject &ob) const = 0;
};


// Интерфейс "Отображаемый"
class IPrintable {
public:
// Отобразить на экране
// (выводить в текстовом виде параметры фигуры).
    virtual void draw() const = 0;
};


// Интерфейс для классов, которые можно задать через диалог с пользователем.
class IDialogInitiale {
public:
// Задать параметры объекта с помощью диалога с пользователем.
    virtual void initFromDialog() = 0;
};


// Интерфейс "Класс"
class BaseCObject {
public:
// Имя класса (типа данных).
    virtual const char *classname() const = 0;

// Размер занимаемой памяти.
    virtual unsigned int size() const = 0;
};

class Figure :
        public IGeoFig,
        public CVector2D,
        public IPhysObject,
        public IPrintable,
        public IDialogInitiale,
        public BaseCObject {
};