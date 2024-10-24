#ifndef PLAYER_H
#define PLAYER_H
#include"GameObject.h"
class player: public GameObject{
    player(int x, int y):GameObject(x,y,GameObjectType::PlayerType){}
    void move(int dx, int dy){
        int x,y;
        std::tie(x,y)=getPosition();
        position=std::make_tuple(x+dx,y+dy);
    }
};
#endif