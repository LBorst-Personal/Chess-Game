#pragma once

class Position {
private:
    int x;
    int y;
public:
    Position(int x, int y) : x(x), y(y) {}
    int getX() const { return x; }
    int getY() const { return y; }
    // Optionally, you can add comparison operators or other utility methods here
};