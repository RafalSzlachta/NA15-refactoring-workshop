#pragma once

#include <utility>

#include "SnakePosition.hpp"
#include "SnakeDimention.hpp"

namespace Snake
{

struct Position;
struct Dimention;

class World
{
public:
    World(Dimention dimension, Position food);

    void setFoodPosition(Position position);
    Position getFoodPosition() const;

    bool contains(int x, int y) const;

private:
    Position m_foodPosition;
    Dimention m_dimension;
};

} // namespace Snake
