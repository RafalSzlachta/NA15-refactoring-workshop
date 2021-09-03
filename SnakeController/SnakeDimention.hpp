#pragma once

namespace Snake
{

struct Dimention
{
    int width;
    int height;

    bool operator==(Dimention const& other) const { return width == other.width and height == other.height; }
    //bool operator==(Dimention const& other) const { return width == other.width and height == other.height; }
};

} // namespace Snake