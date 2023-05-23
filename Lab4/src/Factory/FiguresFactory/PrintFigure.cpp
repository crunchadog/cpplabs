#include "PrintFigure.h"

void PrintFigure::execute() {
    static std::vector<Figure*> figures;

    for (int i = 0; i < figures.size(); ++i) {
        std::cout << figures[i]->classname() << "\n";
    }
}
