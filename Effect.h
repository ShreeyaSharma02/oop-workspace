#ifndef EFFECT_H
#define EFFECT_h
#include "GameObject.h"
class Effect{
    public:
    virtual void apply(GameObject& object) = 0;
};
#endif