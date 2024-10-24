#ifndef BARRIER_H
#define BARRIER_H
#include "GameObject.h"
#include "Effect.h"
class Barrier: public GameObject, Effect{
    public:
    Barrier(int x,int y):GameObject(x,y,GameObjectType::BarrierType){}
    void apply(GameObject& object)override{}
};
#endif