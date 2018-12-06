/*************************
 * AntBoard class header.
 * **********************/
#ifndef ANTBOARD_HPP
#define ANTBOARD_HPP

enum Color { White=1, Black, Want, Bant };
enum Direction { Up=1, Down, Left, Right };

class AntBoard
{
private:
	   int size;
	   Color startingColor;
	   Color** antBoard;
public:
	   AntBoard(int, Color);
	   ~AntBoard();
	   void setSize(int);
	   int getSize();
	   void setColor(int, int, Color);
	   Color getColor(int, int);
	   void clearBoard();
	   void printBoard();
	   void expandBoard(Direction);
};
#endif
