#pragma once

#include <vector>

// Forward declarations to avoid circular dependencies
class Move;
class Position;

enum class Color { WHITE, BLACK };

class ChessPiece {
protected:
    Color color;
public:
    ChessPiece(Color color) : color(color) {}
    virtual ~ChessPiece() = default;
    virtual std::vector<Move> generateMoves(const Position& position) const = 0;
    Color getColor() const { return color; }
};

class Pawn : public ChessPiece {
public:
    static const int value = 1;
    Pawn(Color color) : ChessPiece(color) {}
    std::vector<Move> generateMoves(const Position& position) const override;
};