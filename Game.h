#ifndef GAME_H
#define GAME_H
#include<vector>
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
class Game{
private:
    std::vector<GameEntity*>entities;
public:
    std::vector<GameEntity*>get_entities() const{
        return entities;
    }
    void set_entities(const std::vector<GameEntity*>& newentities){
        entities=newentities;
    }
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
        for (int i = 0; i < numShips; i++) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }
        for(int i=0; i<numMines;i++){
            auto pos=Utils::generateRandomPos(gridWidth,gridHeight);
            entities.push_back(new Mine(std::get<0>(pos),std::get<1>(pos)));
        }
        return entities;
    }
    void gameLoop(int maxIterations, double mineDistanceThreshold){
        for (int iteration=0;iteration<maxIterations;iteration++){
            
            for (auto entity : entities) {
                Ship* ship = dynamic_cast<Ship*>(entity);
                if (ship && ship->getPos() != std::make_tuple(-1, -1)) {
                    ship->move(1, 0);
                }
            }

            // Check for explosions
            for (auto entity1 : entities) {
                Ship* ship = dynamic_cast<Ship*>(entity1);
                if (ship && ship->getPos() != std::make_tuple(-1, -1)) {
                    for (auto entity2 : entities) {
                        Mine* mine = dynamic_cast<Mine*>(entity2);
                        if (mine) {
                            double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                            if (distance <= mineDistanceThreshold) {
                                Explosion explosion = mine->explode();
                                explosion.apply(*ship);
                                break;
                            }
                        }
                    }
                }
            }
            bool allShipsDestroyed = true;
            for (auto entity : entities) {
                Ship* ship = dynamic_cast<Ship*>(entity);
                if (ship && std::get<0>(ship->getPos()) != -1) {
                    allShipsDestroyed = false;
                    break;
                }
            }

            if (allShipsDestroyed) {
                return;
            }
        }
    }
    
};
#endif

