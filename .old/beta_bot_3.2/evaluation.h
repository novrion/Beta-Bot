#pragma once

#include "macros.h"

//const int w_pawn_position[64] =
//{
//	90,  90,  90,  90,  90,  90,  90,  90,
//	30,  30,  30,  40,  40,  30,  30,  30,
//	20,  20,  20,  30,  30,  30,  20,  20,
//	10,  10,  10,  20,  20,  10,  10,  10,
//	 5,   5,  10,  20,  20,   5,   5,   5,
//	 0,   0,   0,   5,   5,   0,   0,   0,
//	 0,   0,   0, -10, -10,   0,   0,   0,
//	 0,   0,   0,   0,   0,   0,   0,   0
//};
//
//const int w_knight_position[64] =
//{
//	-5,   0,   0,   0,   0,   0,   0,  -5,
//	-5,   0,   0,  10,  10,   0,   0,  -5,
//	-5,   5,  20,  20,  20,  20,   5,  -5,
//	-5,  10,  20,  30,  30,  20,  10,  -5,
//	-5,  10,  20,  30,  30,  20,  10,  -5,
//	-5,   5,  20,  10,  10,  20,   5,  -5,
//	-5,   0,   0,   0,   0,   0,   0,  -5,
//	-5, -10,   0,   0,   0,   0, -10,  -5
//};
//
//const int w_bishop_position[64] =
//{
//	 0,   0,   0,   0,   0,   0,   0,   0,
//	 0,   0,   0,   0,   0,   0,   0,   0,
//	 0,   0,   0,  10,  10,   0,   0,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,  10,   0,   0,   0,   0,  10,   0,
//	 0,  30,   0,   0,   0,   0,  30,   0,
//	 0,   0, -10,   0,   0, -10,   0,   0
//
//};
//
//const int w_rook_position[64] =
//{
//	50,  50,  50,  50,  50,  50,  50,  50,
//	50,  50,  50,  50,  50,  50,  50,  50,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,   0,   0,  20,  20,   0,   0,   0
//
//};
//
//const int w_king_position[64] =
//{
//	 0,   0,   0,   0,   0,   0,   0,   0,
//	 0,   0,   5,   5,   5,   5,   0,   0,
//	 0,   5,   5,  10,  10,   5,   5,   0,
//	 0,   5,  10,  20,  20,  10,   5,   0,
//	 0,   5,  10,  20,  20,  10,   5,   0,
//	 0,   0,   5,  10,  10,   5,   0,   0,
//	 0,   5,   5,  -5,  -5,   0,   5,   0,
//	 0,   0,   5,   0, -15,   0,  10,   0
//};
//
//
//const int b_pawn_position[64] =
//{
//	 0,   0,   0,   0,   0,   0,   0,   0,
//	 0,   0,   0, -10, -10,   0,   0,   0,
//	 0,   0,   0,   5,   5,   0,   0,   0,
//	 5,   5,  10,  20,  20,   5,   5,   5,
//	10,  10,  10,  20,  20,  10,  10,  10,
//	20,  20,  20,  30,  30,  30,  20,  20,
//	30,  30,  30,  40,  40,  30,  30,  30,
//	90,  90,  90,  90,  90,  90,  90,  90
//};
//
//const int b_knight_position[64] =
//{
//	-5, -10,   0,   0,   0,   0, -10,  -5,
//	-5,   0,   0,   0,   0,   0,   0,  -5,
//	-5,   5,  20,  10,  10,  20,   5,  -5,
//	-5,  10,  20,  30,  30,  20,  10,  -5,
//	-5,  10,  20,  30,  30,  20,  10,  -5,
//	-5,   5,  20,  20,  20,  20,   5,  -5,
//	-5,   0,   0,  10,  10,   0,   0,  -5,
//	-5,   0,   0,   0,   0,   0,   0,  -5
//};
//
//const int b_bishop_position[64] =
//{
//	 0,   0, -10,   0,   0, -10,   0,   0,
//	 0,  30,   0,   0,   0,   0,  30,   0,
//	 0,  10,   0,   0,   0,   0,  10,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,   0,   0,  10,  10,   0,   0,   0,
//	 0,   0,   0,   0,   0,   0,   0,   0,
//	 0,   0,   0,   0,   0,   0,   0,   0
//
//};
//
//const int b_rook_position[64] =
//{
//	 0,   0,   0,  20,  20,   0,   0,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	 0,   0,  10,  20,  20,  10,   0,   0,
//	50,  50,  50,  50,  50,  50,  50,  50,
//	50,  50,  50,  50,  50,  50,  50,  50
//
//};
//
//const int b_king_position[64] =
//{
//	 0,   0,   5,   0, -15,   0,  10,   0,
//	 0,   5,   5,  -5,  -5,   0,   5,   0,
//	 0,   0,   5,  10,  10,   5,   0,   0,
//	 0,   5,  10,  20,  20,  10,   5,   0,
//	 0,   5,  10,  20,  20,  10,   5,   0,
//	 0,   5,   5,  10,  10,   5,   5,   0,
//	 0,   0,   5,   5,   5,   5,   0,   0,
//	 0,   0,   0,   0,   0,   0,   0,   0
//};
const int material_score[13] = { 0, 1000, 3000, 3000, 5000, 9000, 100000, -1000, -3000, -3000, -5000, -9000, -100000 };
const int position[13][64] = {

	{
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0
	},

	{
	90,  90,  90,  90,  90,  90,  90,  90,
	30,  30,  30,  40,  40,  30,  30,  30,
	20,  20,  20,  30,  30,  30,  20,  20,
	10,  10,  10,  20,  20,  10,  10,  10,
	 5,   5,  10,  20,  20,   5,   5,   5,
	 0,   0,   0,   5,   5,   0,   0,   0,
	 0,   0,   0, -10, -10,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0
	},


	{
	-5,   0,   0,   0,   0,   0,   0,  -5,
	-5,   0,   0,  10,  10,   0,   0,  -5,
	-5,   5,  20,  20,  20,  20,   5,  -5,
	-5,  10,  20,  30,  30,  20,  10,  -5,
	-5,  10,  20,  30,  30,  20,  10,  -5,
	-5,   5,  20,  10,  10,  20,   5,  -5,
	-5,   0,   0,   0,   0,   0,   0,  -5,
	-5, -10,   0,   0,   0,   0, -10,  -5
	},


	{
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,  10,  10,   0,   0,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,  10,   0,   0,   0,   0,  10,   0,
	 0,  30,   0,   0,   0,   0,  30,   0,
	 0,   0, -10,   0,   0, -10,   0,   0
	},


	{
	50,  50,  50,  50,  50,  50,  50,  50,
	50,  50,  50,  50,  50,  50,  50,  50,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,   0,   0,  20,  20,   0,   0,   0
	},


	{
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0
	},


	{
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   5,   5,   5,   5,   0,   0,
	 0,   5,   5,  10,  10,   5,   5,   0,
	 0,   5,  10,  20,  20,  10,   5,   0,
	 0,   5,  10,  20,  20,  10,   5,   0,
	 0,   0,   5,  10,  10,   5,   0,   0,
	 0,   5,   5,  -5,  -5,   0,   5,   0,
	 0,   0,   5,   0, -15,   0,  10,   0
	},










	{
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0, -10, -10,   0,   0,   0,
	 0,   0,   0,   5,   5,   0,   0,   0,
	 5,   5,  10,  20,  20,   5,   5,   5,
	10,  10,  10,  20,  20,  10,  10,  10,
	20,  20,  20,  30,  30,  30,  20,  20,
	30,  30,  30,  40,  40,  30,  30,  30,
	90,  90,  90,  90,  90,  90,  90,  90
	},


	{
	-5, -10,   0,   0,   0,   0, -10,  -5,
	-5,   0,   0,   0,   0,   0,   0,  -5,
	-5,   5,  20,  10,  10,  20,   5,  -5,
	-5,  10,  20,  30,  30,  20,  10,  -5,
	-5,  10,  20,  30,  30,  20,  10,  -5,
	-5,   5,  20,  20,  20,  20,   5,  -5,
	-5,   0,   0,  10,  10,   0,   0,  -5,
	-5,   0,   0,   0,   0,   0,   0,  -5
	},


	{
	 0,   0, -10,   0,   0, -10,   0,   0,
	 0,  30,   0,   0,   0,   0,  30,   0,
	 0,  10,   0,   0,   0,   0,  10,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,   0,   0,  10,  10,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0
	},


	{
	 0,   0,   0,  20,  20,   0,   0,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	 0,   0,  10,  20,  20,  10,   0,   0,
	50,  50,  50,  50,  50,  50,  50,  50,
	50,  50,  50,  50,  50,  50,  50,  50
	},


	{
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0
	},


	{
	 0,   0,   5,   0, -15,   0,  10,   0,
	 0,   5,   5,  -5,  -5,   0,   5,   0,
	 0,   0,   5,  10,  10,   5,   0,   0,
	 0,   5,  10,  20,  20,  10,   5,   0,
	 0,   5,  10,  20,  20,  10,   5,   0,
	 0,   5,   5,  10,  10,   5,   5,   0,
	 0,   0,   5,   5,   5,   5,   0,   0,
	 0,   0,   0,   0,   0,   0,   0,   0
	}
};


// Evaluation
int evaluation(const U64 bb[13]);

static inline int materialScore(const U64 bb[13]);
static inline int positionScore(const U64 bb[13]);

// Bit Manipulation
static inline int bitCount(U64 x);
static inline int pop_lsb(U64& b);