#ifndef MACROS_H
#define MACROS_H


#include <iostream>
#include <algorithm>
#include <string>
#include <chrono>
#include <map>


// Interface Colors
// #define NO_COLORS
# ifndef NO_COLORS
#define RESET             "\033[0m"
#define BOARD_BG          "\033[100m"
#define WHITE_FG_BOARD_BG "\033[37;100m"
#define BLACK_FG_BOARD_BG "\033[30;100m"
#define RED_FG_BOARD_BG   "\033[31;100m"
#define GREEN_FG_BOARD_BG "\033[32;100m"
#define ORANGE_FG         "\033[33m"
#define BLUE_FG           "\033[36m"
#else
#define RESET             ""
#define BOARD_BG          ""
#define WHITE_FG_BOARD_BG ""
#define BLACK_FG_BOARD_BG ""
#define RED_FG_BOARD_BG   ""
#define GREEN_FG_BOARD_BG ""
#define ORANGE_FG         ""
#define BLUE_FG           ""
#endif // NO_COLORS


#define U64 unsigned long long

#define SET_BIT(bitboard, square) (bitboard |= (1ULL << square))
#define POP_BIT(bitboard, square) (bitboard &= ~(1ULL << square))

#define W_BLOCK(bb) (bb[1] | bb[2] | bb[3] | bb[4] | bb[5] | bb[6])
#define B_BLOCK(bb) (bb[7] | bb[8] | bb[9] | bb[10] | bb[11] | bb[12])

#define ENCODE_MOVE(source, target, piece, capture, promotion, _2pawn, en_passant, castle) \
(source) | (target << 6) | (piece << 12) | (_2pawn << 16) | (en_passant << 17) | (castle << 18) | (promotion << 19) | (capture << 23) \

#define RESET_MOVE_CAPTURE(move) (move &= 18446744073701163007ULL)
#define SET_MOVE_CAPTURE(move, piece) (move |= piece << 23)

#define GET_MOVE_SOURCE(move) (move & 63ULL)
#define GET_MOVE_TARGET(move) ((move & 4032ULL) >> 6)
#define GET_MOVE_PIECE(move) ((move & 61440ULL) >> 12)
#define GET_MOVE_2_PAWN(move) (move & 65536ULL)
#define GET_MOVE_EN_PASSANT(move) (move & 131072ULL)
#define GET_MOVE_CASTLE(move) (move & 262144ULL)
#define GET_MOVE_PROMOTION(move) ((move & 7864320ULL) >> 19)
#define GET_MOVE_CAPTURE(move) ((move & 125829120ULL) >> 23)

#define SWITCH_UTILITY_SIDE(utility) (utility ^= 1024ULL)

#define GET_UTILITY_EN_PASSANT(utility) (utility & 63ULL)
#define GET_UTILITY_W_SHORT_CASTLE(utility) (utility & 64ULL)
#define GET_UTILITY_W_LONG_CASTLE(utility) (utility & 128ULL)
#define GET_UTILITY_B_SHORT_CASTLE(utility) (utility & 256ULL)
#define GET_UTILITY_B_LONG_CASTLE(utility) (utility & 512ULL)
#define GET_UTILITY_SIDE(utility) (utility & 1024ULL)


#endif // MACROS_H
