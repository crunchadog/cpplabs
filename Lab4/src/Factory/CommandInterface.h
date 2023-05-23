#ifndef LAB4_4_COMMANDINTERFACE_H
#define LAB4_4_COMMANDINTERFACE_H

#include "../interface/Figure/Figure.h"
#include "../figures/hexagon/hexagon.h"
#include "../figures/triangle/triangle.h"
#include "../menu/menu.h"
#include "vector"

class CommandInterface {
public:
    virtual void execute() = 0;
};

#endif
