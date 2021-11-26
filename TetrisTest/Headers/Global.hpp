#pragma once
//This file has editable variables that'll affect the game in large ways from screen resolution to basically how to game is played out.
//All base value are saved in comments in the case of lines being edited to play around with.

//The size of the window cell, choose 8 or 12
constexpr unsigned char CELL_SIZE = 12;
//The duration of the line clearing effect, base 8
constexpr unsigned char CLEAR_EFFECT_DURATION = 8;
//Number of rows on tetris board, base 20
constexpr unsigned char ROWS = 20;
//Number of columns on tetris board, base 10
constexpr unsigned char COLUMNS = 16;
//Lines needed to increase the game speed, progressive difficulty
constexpr unsigned char LINES_TO_INCREASE_SPEED = 2;
//Tetrimino movement speed
constexpr unsigned char MOVE_SPEED = 5;
//Screen resize
constexpr unsigned char SCREEN_RESIZE = 4;
//Soft drop speed
constexpr unsigned char SOFT_DROP_SPEED = 4;
//Fall speed at the start of the game. Lower the value, faster the falling
constexpr unsigned char START_FALL_SPEED = 32;
//The duration of every frame
constexpr unsigned short FRAME_DURATION = 16667;

//I just realized I could use the Vector2 in the SFML!
struct Position
{
	char x;
	char y;
};