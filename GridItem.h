#ifndef GRIDITEM_H 
#define GRIDITEM_H
#include<tuple>
using namespace std;

class GridItem{
    protected:
    int GridWidth;
    int GridHeight;
    public:
    GridItem(int x, int y, int width, int height)
        :GridItem(0,0,GridWidth,GridHeight){}
    GridItem(){}
    void setCoordinates(int x, int y);
    std::pair<int,int>getCoordinates(int x, int y){
        return make_pair(GridWidth,GridHeight);
    }
    int getGridwidth(){
        return GridWidth;
    }
    int getGridHeight(){
        return GridHeight;
    }
    int getActiveGridItemCount(){
        return 
    }
    virtual ~GridItem();  
};
#endif