#ifndef HELPER_H
#define HELPER_H
#include <tuple>
class helper{
    public:
    static int manhattanDistance(std::pair<int,int>item1,std::pair<int,int>item2){
        int x1,y1,x2,y2;
        std::tie(x1,y1)=item1;
        std::tie(x2,y2)=item2;
        int distance=(x2-x1)+(y2-y1);
        return distance;
    }

};
#endif