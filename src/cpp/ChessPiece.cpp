#include <vector>

enum class Color { WHITE, BLACK };

class ChessPiece {
protected:
    Color color;
public:
    // Constructor to initialize the color of the chess piece
    explicit ChessPiece(Color input_color) : color(input_color) {}

    // Pure virtual method to generate moves
    virtual std::vector<Move> generateMoves(const Position& position) const = 0;
}

class Pawn : public ChessPiece {
    static const int value = 1; // Example value for pawn
public:
    Pawn(Color color) : ChessPiece(color) {
        // Constructor logic for Pawn
    }

    // Override the generateMoves method for Pawn
    std::vector<Move> generateMoves(const Position& position) const override {
        std::vector<Move> moves;
        // Logic to generate pawn moves
        return moves;
    }
};