#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <tuple>
enum GameObjectType{BarrierType, PowerUpType, NoneType, PlayerType};
class GameObject{
    protected:
    std::tuple<int, int> position;
    GameObjectType type;
    public:
    GameObject(int x, int y, GameObjectType Objecttype):position(std::make_tuple(x,y)),type(Objecttype){}
    virtual ~GameObject(){}
    std::tuple<int, int> getPosition() const{ return position;}
    GameObjectType getType() const{return type;}
};
#endif