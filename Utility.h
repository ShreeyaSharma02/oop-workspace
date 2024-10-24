#ifndef UTILITY_H
#define UTILITY_H
#include<tuple>
#include <cstdlib>
#include<cmath>
class Utility{
    public:
    static std::tuple<int, int> randomPosition(int width, int height){
        int x=std::rand()%width;
        int y=std::rand()%height;
        return std::make_tuple(x,y);
    }
    static double distanceBetween(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
        int x1,y1,x2,y2;
        std::tie(x1,y1)=pos1;
        std::tie(x2,y2)=pos2;
        return std::sqrt((x2-x1)*(x2-x1)-(y2-y1)*(y2-y1));
    }
};
#endif