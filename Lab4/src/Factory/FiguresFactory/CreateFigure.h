#ifndef LAB4_4_CREATEFIGURE_H
#define LAB4_4_CREATEFIGURE_H

#include "../CommandInterface.h"


class CreateFigure : public CommandInterface {
public:
    void execute() override;
};


#endif
