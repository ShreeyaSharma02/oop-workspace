#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"
class Ship:public GameEntity{
    public:
        Ship(int x,int y)
            :GameEntity(x,y,ShipType){}
            void move(int dx, int dy){
                int newx=std::get<0>(position)+dx;
                int newy=std::get<1>(position)+dy;
                position=std::make_tuple(newx,newy);
            }
};
#endif