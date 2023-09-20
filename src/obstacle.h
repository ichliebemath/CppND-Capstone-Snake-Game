// obstacle.h
#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <memory>

class Obstacle {
public:

    Obstacle(int x, int y) : x_(x), y_(y) {}  // Constructor  
    void UpdateObstacle();
    int GetX() const; // Getter for x_
    int GetY() const; // Getter for y_

private:
    int x_;
    int y_;
};

#endif
