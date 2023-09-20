#include "obstacle.h"
#include <random>

void Obstacle::UpdateObstacle(){

    std::random_device dev;
    std::mt19937 engine(dev());
    std::uniform_int_distribution<int> random_w(0, 29);
    std::uniform_int_distribution<int> random_h(0, 29);

    x_ = random_w(engine);
    y_ = random_h(engine);

}

int Obstacle::GetX() const {
    return x_;
}

int Obstacle::GetY() const {
    return y_;
}