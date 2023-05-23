#ifndef LAB4_4_PRINTFIGURE_H
#define LAB4_4_PRINTFIGURE_H

#include "../CommandInterface.h"

class PrintFigure : public CommandInterface{
public:
    void execute() override;
};


#endif //LAB4_4_PRINTFIGURE_H
