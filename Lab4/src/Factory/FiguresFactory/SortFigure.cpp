#include "SortFigure.h"

void SortFigure::execute() {
    static std::vector<Figure *> figures;
    std::sort(figures.begin(), figures.end(), [](Figure *x, Figure *y) {
        return x->mass() < y->mass();
    });

    for (int i = 0; i < figures.size(); ++i) {
        std::cout << figures[i]->mass() << " ";
    }

    std::cout << '\n';
}
