#include <vector>
#include "ChessPiece.h" // Assuming ChessPiece is defined in this header

class ChessBoard {
    std::vector<std::vector<ChessPiece*>> board;

    public:
    // Constructor to initialize the chessboard
    ChessBoard() {
        // Initialize the chessboard with 8 rows and 8 columns
        board = std::vector<std::vector<ChessPiece*>>(8, std::vector<ChessPiece*>(8, nullptr));
    }

    // Copy constructor
    ChessBoard(const ChessBoard& other) {
        // Initialize the chessboard with 8 rows and 8 columns
        board = std::vector<std::vector<ChessPiece*>>(8, std::vector<ChessPiece*>(8, nullptr));
    }
};