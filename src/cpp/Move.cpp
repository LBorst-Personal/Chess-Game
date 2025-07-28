#include "Position.h"

class Move{
private:
    // Start and end positions of the move
    Position start, end;
public:
    Move(const Position& start, const Position& end) : start(start), end(end) {}
    const Position& getStart() const { return start; }
    const Position& getEnd() const { return end; }
};