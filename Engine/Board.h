#pragma once

#include "Graphics.h"
#include"Location.h"
class Board
{
public :
	Board(Graphics& gfx);
	void DrawCell( const Location& loc, Color c);
	int GetGridWidth() const;
	int GetGridHeight()  const;
	bool IsInsideBoard(const Location& loc)const;
	void DrawBorder();
private :
	static constexpr  Color borderColor = Colors::Blue;
	static constexpr int dimention = 20;
	static constexpr int cellPadding = 1;
	static constexpr int width =25;
	static constexpr int height = 25;
	static constexpr int borderWidth = 4;
	static constexpr int borderPadding = 2;
	static constexpr int x = 20;
	static constexpr int  y = 20;
	Graphics& gfx;
};