#include "getMemoryFigure.h"

void getMemoryFigure::execute() {
    static std::vector<Figure *> figures;
    unsigned int memory = 0;

    for (int i = 0; i < figures.size(); ++i) {
        memory += figures[i]->size();
    }

    std::cout << "Memory - " << memory << '\n';

}
