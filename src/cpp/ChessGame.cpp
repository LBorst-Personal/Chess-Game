

class ChessGame {
public:
    ChessGame() {
        // Initialize the chessboard with pieces
        board = std::vector<std::vector<ChessPiece*>>(8, std::vector<ChessPiece*>(8, nullptr));
        setupInitialPosition();
    }
}