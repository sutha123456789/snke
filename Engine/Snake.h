#pragma once

#include"Board.h"



class Snake
{
private :
	class Segment
	{
	public :
		void InitHead(const Location& loc);
		void InitBody(Color c);
		void Follow(const Segment& next);
		void MoveBy(const Location& delta_loc);
		void Draw(Board& brd) const;
		Location GetLocation()const;
	private:
		Location loc;
		Color c;
	};
public:
	Snake(const Location& loc);
	void Mooveby(const Location& delta_loc);
	const Location GetNextHeadLocation(const Location& delta_loc)const;
	void Grow();
	void Draw(Board& brd)const;
	bool IsInTitleExceptend(const Location& target)const ;
	bool IsInTitle(const Location& target)const;

private :
	static constexpr Color headColor = Colors::Yellow;
	static constexpr int nsegmentsMax = 100;
	Segment segments[nsegmentsMax];
	int nSegments = 1;
};