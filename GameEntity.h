#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include<tuple>

enum GameEntityType {ExplosionType, MineType, NoneType, ShipType};
class GameEntity{
    protected:
        std::tuple<int, int> position;
        GameEntityType type;
    public:
        GameEntity(int x, int y, GameEntityType entityType)
            :position(std::make_tuple(x,y)),type(entityType){}
        virtual ~GameEntity(){}
        std::tuple<int, int> getPos(){ return position;}
        GameEntityType getType(){ return type;}
};
#endif