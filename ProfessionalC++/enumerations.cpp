#include <iostream>
using namespace std;    

enum class PieceType { King, Queen, Rook, Pawn };

string pieceToString(PieceType piece) {
    switch (piece) {
        case PieceType::King: return "King";
        case PieceType::Queen: return "Queen";
        case PieceType::Rook: return "Rook";
        case PieceType::Pawn: return "Pawn";
    }
    return "Unknown";
}

int main() {
    PieceType piece { PieceType::King };
    cout << pieceToString(piece) << endl;  // ✅ Gibt "King" aus
    return 0;
}
