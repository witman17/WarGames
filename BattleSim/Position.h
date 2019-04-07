#pragma once
namespace BattleSim {
	class Position
	{
	protected:
		float x;
		float y;
	public:
		Position();
		Position(float x, float y);
		~Position();
		float getDistance(Position position);
		float getX();
		float getY();
		float setX(float x);
		float setY(float y);
	};

}