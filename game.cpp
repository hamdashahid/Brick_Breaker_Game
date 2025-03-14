//============================================================================
// Name : .cpp
// Author : Sibt ul Hussain
// Version :
// Copyright : (c) Reserved
// Description : Basic 2D game of Centipede...
//============================================================================

#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cmath> // for basic math functions such as cos, sin, sqrt
#include<fstream>
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 * that is what dimensions (x and y) your game will have
 * Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */

class Game
{
	protected:
		static int sx1;
		static int sy1;
		static int sx2;
		static int sy2;
		static int rows;
		static int columns;
		static int x1;
		static int y1;
		static int x2;
		static int y2;
		static int fix;
		static int size;
		static int X_POS;
		static int Y_POS;
		static int velocityX;
		static int velocityY;
		static int check;
		static int axis[44][2]; // level 1
		static int axis2[5][5][5][2]; // level 2
		static int array2[44]; // level 1
		static int array[44]; // // level 1
		static int lvl2[5][5][5]; // level 2
		static int l2[5][5][5];
		static int k;
		static int forY;
		static int score;
		static int x1_l2;
		static int y1_l2;
		static int x2_l2;
		static int y2_l2;
		static int fix2;
		static int l2_x2;
		static int l2_y2;
		static int l2_x3;
		static int l2_y3;
		static int l2_x4;
		static int l2_y4;
		static int l2_x5;
		static int l2_y5;
		static int opt;
		static int LEVEL_NO;
		static int x1_l3;
		static int y1_l3;
		static int x2_l3;
		static int y2_l3;
		static int fix3;
		static int fix4;
		static int Px1;
		static int Py1;
		static int Px2;
		static int Py2;
		static int axis3[82][2];
		
	public:
		Game ()
		{
			func();

		}

		static void func ()
		{
			if (check == 1)
			{
				for (int i = 0; i < 44; i++)
				{
					axis[i][0] = x1 + (k * fix);
					axis[i][1] = forY;
					k++;
					if (k == 12)
					{
						k = 1;
						forY += 83;
					}

				}

				int a = 1; // to keep the track of colors
				for (int i = 0; i < 44; i++)
				{
					array[i] = a;
					array2[i] = a;
					a++;

					if (a > 5)
					{
						a = 1;
					}
				}

				check = 0;
				k = 1;
				
				int b = 1;
				for (int i = 0; i<5; i++)
				{
					for (int j =0; j<5; j++)
					{
						for (int k2 = 0; k2<5; k2++)
						{
							l2[i][j][k2] = b; // for ball color change
							b++;
							
							if (b>5)
							{
								b = 1;
							}
						}
					}
				}
				
				for (int i = 0; i<82 ;i++)
				{
					axis3[82][0] = x1_l3 - (fix3)*i;
					axis3[82][1] = y1_l3 - (fix4) * i;
				}
			}
		}


		void set_sx1 (int value)
		{
			sx1 = value;
		}

		void set_sx2 (int value)
		{
			sx1 = value;
		}

		int get_sx1 ()
		{
			return sx1;
		}

		void set_Px1 (int value)
		{
			Px1 += value;
		}

		void set_Px2 (int value)
		{
			Px2 += value;
		}

		int get_Px1 ()
		{
			return Px1;
		}
		
		int get_Py1 ()
		{
			return Py1;
		}

		int get_Px2 ()
		{
			return Px2;
		}

		int get_Py2 ()
		{
			return Py2;
		}

		void setOPT(int value)
		{
			opt = value;
		}

		int getOPT ()
		{
			return opt;
		}

		void setLEVEL(int value)
		{
			LEVEL_NO = value;
		}

		int getLEVEL ()
		{
			return LEVEL_NO;
		}

		int get_sy1 ()
		{
			return sy1;
		}

		int get_sx2 ()
		{
			return sx2;
		}

		int get_sy2 ()
		{
			return sy2;
		}

		int get_x1 ()
		{
			return x1;
		}

		int get_y1 ()
		{
			return y1;
		}

		int get_x2 ()
		{
			return x2;
		}

		int get_y2 ()
		{
			return y2;
		}

		int get_rows ()
		{
			return rows;
		}

		int get_columns ()
		{
			return columns;
		}

		int get_fix ()
		{
			return fix;
		}

		int get_size ()
		{
			return size;
		}

		int get_XPOS ()
		{
			return X_POS;
		}

		int get_YPOS ()
		{
			return Y_POS;
		}

		int get_velocityX ()
		{
			return velocityX;
		}

		int get_velocityY ()
		{
			return velocityY;
		}

		void set_score(int scr)
		{
			score+=scr;
		}

		int get_score()
		{
			return score;
		}


};

Game G;
int Game::sx1 = 450; // paddle
int Game::sy1 = 60;
int Game::k=1;
int Game::sx2 = 100;
int Game::sy2 = 10;
int Game::rows = 4;
int Game::columns = 5;
int Game::x1 = 10; // for bricks
int Game::y1 = 490;
int Game::x2 = 75;
int Game::y2 = 13;
int Game::fix = 78;
int Game::size = 10;
int Game::X_POS = 550; // ball x axis
int Game::Y_POS = 160; // ball y axis
int Game::velocityX = 5; // ball's speed
int Game::velocityY = 5;
int Game::check = 1;
int Game::axis[44][2]; // bricks 2D array
int Game::array[44];
int Game::array2[44];
int Game::lvl2[5][5][5];
int Game::l2[5][5][5];
int Game::forY = 390;
int Game::score = 0;
int Game::x1_l2 = 20;
int Game::y1_l2 = 760;
int Game::x2_l2 = 60; // width_POS = 550; // ball x axis
int Game::y2_l2 = 10; // height
int Game::fix2 = 60;
int Game::axis2[5][5][5][2]; // level 2
int Game::l2_x2 = 340;
int Game::l2_y2 = 680;
int Game::l2_x3 = 660;
int Game::l2_y3 = 600;
int Game::l2_x4 = 340;
int Game::l2_y4 = 500;
int Game::l2_x5 = 20;
int Game::l2_y5 = 400;
int Game::opt = 0;
int Game::LEVEL_NO= 0;
int Game::x1_l3 = 825;
int Game::y1_l3 = 650;
int Game::x2_l3 = 60;
int Game::y2_l3 = 15;
int Game::fix3 = 65;
int Game::fix4 = 40;
int Game::Px1 = 450;
int Game::Py1 = 750;
int Game::Px2 = 100;
int Game::Py2 = 10;
int Game::axis3[82][2];

class Bricks: public Game
{
	public:
		int a = 1;
		static bool setter;

		Bricks ()
		{}

		void makeBrick () // level 1
		{
				for (int i = 0; i < 44; i++)
				{
					if (a == 1)
					{
						DrawRectangle (axis[i][0], axis[i][1], x2, y2, colors[GREEN]);
						//array2[i] = 1;

					}

					if (a == 2)
					{
						DrawRectangle (axis[i][0], axis[i][1], x2, y2, colors[DEEP_PINK]);
						//array2[i] = 2;

					}

					if (a == 3)
					{
						DrawRectangle (axis[i][0], axis[i][1], x2, y2, colors[NAVY]);
						//array2[i] = 3;

					}

					if (a == 4)
					{
						DrawRectangle (axis[i][0], axis[i][1], x2, y2, colors[DARK_RED]);
						//array2[i] = 4;

					}

					if (a == 5)
					{
						DrawRectangle (axis[i][0], axis[i][1], x2, y2, colors[GOLD]);
						//array2[i] = 5;

					}

					a++;

					if (a > 5)
					{
						a = 1;
					}
				}
				a = 1;

		}

		void makeBrick2() // level 2
		{
			if(setter==true)
			{
				int x = 20;
				int y = 760;
				int addX = 0;
				int addY = 0;
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j<5; j++)
					{
						if (i == 0)
						{
							x = 20;
						}
						if (i == 1)
						{
							x = 340;
						}
						if (i == 2)
						{
							x = 660;
						}
						if (i == 3)
						{
							x = 340;
						}
						if (i == 4)
						{
							x = 20;
						}
						for (int k2 = 0; k2<5; k2++)
						{
							axis2[i][j][k2][0] = x;
							axis2[i][j][k2][1] = y;
							x +=60;
							lvl2[i][j][k2]=k2+1;
							l2[i][j][k2] = lvl2[i][j][k2];
							if(k2==4) // for gold
							{
							 	lvl2[i][j][k2]=2;
							}

						}

						y = y - 15;
					}

				}

			}
			setter=false;

			for (int i = 0; i<5; i++)
			{
				for (int j = 0; j<5; j++)
				{
					for (int k2 = 0; k2<5; k2++)
					{

						if (k2 == 0)
						{
							DrawRectangle (axis2[i][j][k2][0], axis2[i][j][k2][1], x2_l2, y2_l2, colors[GREEN]);
						}

						if (k2 == 1)
						{
							DrawRectangle (axis2[i][j][k2][0], axis2[i][j][k2][1], x2_l2, y2_l2, colors[DEEP_PINK]);
						}

						if (k2 == 2)
						{
							DrawRectangle (axis2[i][j][k2][0], axis2[i][j][k2][1], x2_l2, y2_l2, colors[NAVY]);
						}

						if (k2 == 3)
						{
							DrawRectangle (axis2[i][j][k2][0], axis2[i][j][k2][1], x2_l2, y2_l2, colors[DARK_RED]);
						}

						if (k2 == 4)
						{
							DrawRectangle (axis2[i][j][k2][0], axis2[i][j][k2][1], x2_l2, y2_l2, colors[GOLD]);
						}
					}
				}
			}
			setter=false;
		}
		
		/*void print (int n, char symbol, int x, int y) // for printing the spaces and stars
		{
			if (n>0)
			{
				cout<<symbol;
				print (n-1, symbol);		
			}
			
		}
		void hollowDiamondPattern(int a, int b, int x, int y) // for the lower part
		{
			if (b<=a && b>=1)
			{
				print(b,'*');
				int c = a-b;
				int m = 2*c;
				print (m, ' ');
				print(b,'*');
				cout<<endl;
				axis3[b][1] = y;
				
				hollowDiamondPattern(a, b+1);
			}
		}
		void hollowDiamondPattern2(int a, int b, int x, int y) // for the upper part
		{
			if (b>=1)
			{
				print(b,'*');
				int c = a-b;
				int m = 2*c;
				print (m, ' ');
				print(b,'*');
				cout<<endl;
				
				hollowDiamondPattern2(a, b-1);
			}
		}*/
		
		void makeBrick3() // level 3
		{
			// top most
			DrawRectangle (x1_l3, y1_l3, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle ((x1_l3)-fix3, y1_l3, x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3-(fix3)*2, y1_l3, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*3, y1_l3, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3)*4, y1_l3, x2_l3, y2_l3, colors[GREEN]);
			DrawRectangle (x1_l3-(fix3)*5, y1_l3, x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3-(fix3)*6, y1_l3, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3)*7, y1_l3, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*8, y1_l3, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*9, y1_l3, x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3-(fix3)*10, y1_l3, x2_l3, y2_l3, colors[GREEN]);
			
			// right most
			DrawRectangle (x1_l3, y1_l3-fix4, x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3, y1_l3-(fix4)*2, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3, y1_l3-(fix4)*3, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3, y1_l3-(fix4)*4, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3, y1_l3-(fix4)*5, x2_l3, y2_l3, colors[GREEN]);
			DrawRectangle (x1_l3, y1_l3-(fix4)*6, x2_l3, y2_l3, colors[GREEN]);
			DrawRectangle (x1_l3, y1_l3-(fix4)*7, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3, y1_l3-(fix4)*8, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3, y1_l3-(fix4)*9, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3, y1_l3-(fix4)*10, x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3, y1_l3-(fix4)*11, x2_l3, y2_l3, colors[GREEN]);

			// left most
			DrawRectangle (x1_l3-(fix3)*10, y1_l3-fix4, x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3-(fix3)*10, y1_l3-(fix4)*2, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*10, y1_l3-(fix4)*3, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*10, y1_l3-(fix4)*4, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3)*10, y1_l3-(fix4)*5, x2_l3, y2_l3, colors[GREEN]);
			DrawRectangle (x1_l3-(fix3)*10, y1_l3-(fix4)*6, x2_l3, y2_l3, colors[GREEN]);
			DrawRectangle (x1_l3-(fix3)*10, y1_l3-(fix4)*7, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3)*10, y1_l3-(fix4)*8, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*10, y1_l3-(fix4)*9, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*10, y1_l3-(fix4)*10, x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3-(fix3)*10, y1_l3-(fix4)*11, x2_l3, y2_l3, colors[GREEN]);

			// bottom most
			DrawRectangle (x1_l3-(fix3), y1_l3-(fix4)*11, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*2, y1_l3-(fix4)*11, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*3, y1_l3-(fix4)*11, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3)*4, y1_l3-(fix4)*11, x2_l3, y2_l3, colors[GREEN]);
			DrawRectangle (x1_l3-(fix3)*5, y1_l3-(fix4)*11, x2_l3, y2_l3, colors[GREEN]);
			DrawRectangle (x1_l3-(fix3)*6, y1_l3-(fix4)*11, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3)*7, y1_l3-(fix4)*11, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*8, y1_l3-(fix4)*11, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*9, y1_l3-(fix4)*11, x2_l3, y2_l3, colors[GOLD]);

			// inner left
			DrawRectangle (x1_l3-(fix3)*9, y1_l3-(fix4), x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3-(fix3)*9, y1_l3-(fix4)*2, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*9, y1_l3-(fix4)*3, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*9, y1_l3-(fix4)*4, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3)*9, y1_l3-(fix4)*7, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3)*9, y1_l3-(fix4)*8, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*9, y1_l3-(fix4)*9, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*9, y1_l3-(fix4)*10, x2_l3, y2_l3, colors[GOLD]);

			DrawRectangle (x1_l3-(fix3)*8, y1_l3-(fix4), x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3-(fix3)*8,y1_l3-(fix4)*2, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*8, y1_l3-(fix4)*3, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*8, y1_l3-(fix4)*8, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*8, y1_l3-(fix4)*9, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*8, y1_l3-(fix4)*10, x2_l3, y2_l3, colors[GOLD]);

			DrawRectangle (x1_l3-(fix3)*7, y1_l3-(fix4), x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*7, y1_l3-(fix4)*2, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3)*7, y1_l3-(fix4)*9, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*7, y1_l3-(fix4)*10, x2_l3, y2_l3, colors[GREEN]);

			DrawRectangle (x1_l3-(fix3)*6, y1_l3-(fix4), x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*6, y1_l3-(fix4)*10, x2_l3, y2_l3, colors[DARK_RED]);


			// inner right

			DrawRectangle (x1_l3-(fix3), y1_l3-(fix4), x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3-(fix3), y1_l3-(fix4)*2, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3), y1_l3-(fix4)*3, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3), y1_l3-(fix4)*4, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3), y1_l3-(fix4)*7, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3), y1_l3-(fix4)*8, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3), y1_l3-(fix4)*9, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3), y1_l3-(fix4)*10, x2_l3, y2_l3, colors[GOLD]);

			DrawRectangle (x1_l3-(fix3)*2, y1_l3-(fix4), x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3-(fix3)*2, y1_l3-(fix4)*2, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*2, y1_l3-(fix4)*3, x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*2, y1_l3-(fix4)*8, x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3)*2, y1_l3-(fix4)*9, x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3-(fix3)*2, y1_l3-(fix4)*10, x2_l3, y2_l3, colors[DARK_RED]);

			DrawRectangle (x1_l3-(fix3)*3, y1_l3-(fix4), x2_l3, y2_l3, colors[NAVY]);
			DrawRectangle (x1_l3-(fix3)*3, y1_l3-(fix4)*2, x2_l3, y2_l3, colors[DARK_RED]);
			DrawRectangle (x1_l3-(fix3)*3, y1_l3-(fix4)*9, x2_l3, y2_l3, colors[GOLD]);
			DrawRectangle (x1_l3-(fix3)*3, y1_l3-(fix4)*10, x2_l3, y2_l3, colors[GREEN]);

			DrawRectangle (x1_l3-(fix3)*4, y1_l3-(fix4), x2_l3, y2_l3, colors[DEEP_PINK]);
			DrawRectangle (x1_l3-(fix3)*4, y1_l3-(fix4)*10, x2_l3, y2_l3, colors[NAVY]);

		}

};

bool Bricks::setter=true;

class Ball: public Game, public Bricks
{
	public:
		//bool makeFood = false;
		static int brokenX[44];
		static int brokenY[44];
		static int brokenX2[5][5][5];
		static int brokenY2[5][5][5];
		static int count;
		static int count2[5][5][5];
		static int lives;
		static int help;
		static int ch[5][5][5];
		static int brickClr;
		static int brickClr2;
		static int PaddleClr;
		static int PaddleClr2;

	public:

		void makeBall ()
  	        {
  	        	for (int i = 0; i<44; i++)
  	        	{

				switch (brickClr)
				{
				 	case 1:
						DrawCircle (X_POS, Y_POS, size, colors[GREEN]);
				 		break;
				 					
					case 2: 
						DrawCircle (X_POS, Y_POS, size, colors[DEEP_PINK]);
						break;
									
					case 3:
						DrawCircle (X_POS, Y_POS, size, colors[NAVY]);
						break;
									
					case 4:
						DrawCircle (X_POS, Y_POS, size, colors[DARK_RED]);
						break;
									
					case 5:
						DrawCircle (X_POS, Y_POS, size, colors[GOLD]);
						break;
									
					default:
						DrawCircle (X_POS, Y_POS, size, colors[CRIMSON]);
						break;
								
				}
			}
		}
		
		void makeBall2()
		{
			for (int i = 0; i<5; i++)
			{
				for (int j = 0; j<5; j++)
				{
					for (int k = 0; k<5; k++)
					{
						switch (brickClr2)
						{
							case 1:
								DrawCircle (X_POS, Y_POS, size, colors[GREEN]);
						 		break;
						 					
							case 2: 
								DrawCircle (X_POS, Y_POS, size, colors[DEEP_PINK]);
								break;
											
							case 3:
								DrawCircle (X_POS, Y_POS, size, colors[NAVY]);
								break;
											
							case 4:
								DrawCircle (X_POS, Y_POS, size, colors[DARK_RED]);
								break;
											
							case 5:
								DrawCircle (X_POS, Y_POS, size, colors[GOLD]);
								break;
											
							default:
								DrawCircle (X_POS, Y_POS, size, colors[CRIMSON]);
								break;
								
						}
					}
				}
			}
  		}

		void makeBall3()
		{
			DrawCircle (X_POS, Y_POS, size, colors[CRIMSON]);
		
		}
		
		void move () // level 1
		{

			X_POS += velocityX;
			Y_POS += velocityY;

			if (X_POS < 0)
			{
				velocityX += 5;

			}

			else if (X_POS >= 1020)
			{
				velocityX -= 5;

			}

			else if (Y_POS >= 840) // game over
			{
				velocityY -= 5;
			}

			else if (Y_POS == 0)
			{
				velocityY += 5;

			}

			else if (X_POS == 0)
			{
				velocityX += 5;

			}

			else if (Y_POS <= sy1) // if ball goes below paddle lives--
			{
				velocityY = -velocityY;
				lives--;

				if (lives == 0)
				{
					// game over
				}
				else
				{
					X_POS = 550;
					Y_POS = 160;
					velocityX = 5;
					velocityY = 5;
				}
			}

			// getters help in getting the updated value of paddle

			else if ((X_POS >= sx1 && X_POS <= sx1 + sx2) && Y_POS <= sy1 + sy2)
			{
				velocityY *= -1;
				PaddleClr = brickClr;

			}

			else // condition for collision with brick
			{
				for (int i = 0; i < 44; i++) // lvl 1
				{
					if (X_POS >= axis[i][0] && X_POS <= axis[i][0] + x2 && Y_POS >= axis[i][1] && Y_POS <= axis[i][1] + y2)
					{	 			
						velocityX *= -1;
						velocityY *= -1;

						brickClr = array2[i]; // for ball color change
						
						if (array[i] == 1) // green
						{
							G.set_score(10);
							brokenX[count] = axis[i][0];
							brokenY[count] = axis[i][1];
							array[i] -= 1;
							axis[i][0] = -1000;
							count++;

						}

						else if (array[i] == 2) // pink
						{
							array[i] -= 1;
							//cout<<i<<" PINK "<<array[i]<<endl;
						}


						else if (array[i] == 3) // blue
						{
							array[i] -= 1;
							//cout<<i<<" BLUE "<<array[i]<<endl;

						}

						else if (array[i] == 4) // red
						{
							array[i] -= 1;
							//cout<<i<<" RED "<<array[i]<<endl;

						}

						if (array[i] == 5) // gold
						{
							array[i] -= 1;
							//cout<<i<<" GOLD "<<array[i]<<endl;

						}

					}
				}
			}

		}
 
		void move2 () // level 2
		{
			X_POS += velocityX;
			Y_POS += velocityY;


			if (X_POS < 0)
			{
				velocityX += 5;

			}

			else if (X_POS >= 1020)
			{
				velocityX -= 5;

			}

			else if (Y_POS >= 840) // game over
			{
				velocityY -= 5;
			}

			else if (Y_POS == 0)
			{
				velocityY += 5;

			}

			else if (X_POS == 0)
			{
				velocityX += 5;

			}

			else if (Y_POS <= sy1) // if ball goes below paddle lives--
			{
				velocityY = -velocityY;
				lives--;

				if (lives == 0)
				{
					// game over
				}
				else
				{
					X_POS = 550;
					Y_POS = 160;
					velocityX = 5;
					velocityY = 5;
				}
			}

			// getters help in getting the updated value of paddle

			if ((X_POS >= sx1 && X_POS <= sx1 + sx2) && Y_POS <= sy1 + sy2)
			{
				velocityY *= -1;
				PaddleClr2 = brickClr2;

			}

			else // condition for collision with brick
			{
				for (int i = 0; i<5; i++) // lvl 2
				{
					for (int j = 0; j<5; j++)
					{
						for (int k1 = 0; k1<5; k1++)
						{
							int brickX = axis2[i][j][k1][0];
							int brickY = axis2[i][j][k1][1];

							if (X_POS >= brickX && X_POS <= brickX + x2_l2 && Y_POS >= brickY && Y_POS <= brickY + y2_l2)
							{
								velocityY *= -1;
								velocityX *= -1;
								
								brickClr2 = l2[i][j][k1]; // for changing ball color
								
								if (lvl2[i][j][k1] == 1) // green
								{
									//cout << "LAG GYA\n";
									G.set_score(10);
									brokenX2[i][j][k1] = axis2[i][j][k1][0];
									brokenY2[i][j][k1] = axis2[i][j][k1][1];
									axis2[i][j][k1][0] = -1000;
									count2[i][j][k] = 1;
									ch[i][j][k1] = 1+rand()%5;
									help++;

								}

								else if (lvl2[i][j][k1] == 2) // deep pink
								{
									lvl2[i][j][k1] -= 1;

								}

								else if (lvl2[i][j][k1] == 3) // navy
								{
									lvl2[i][j][k1] -= 1;

								}

								else if (lvl2[i][j][k1] == 4) // red
								{
									lvl2[i][j][k1] -= 1;
								}

								else if (lvl2[i][j][k1] == 5) // gold
								{
									lvl2[i][j][k1] = 2;
								}
								
							}
						}
					}
				}
			}
		}
		
		void move3()
		{
			X_POS += velocityX;
			Y_POS += velocityY;

			if (X_POS < 0)
			{
				velocityX += 5;

			}

			else if (X_POS >= 1020)
			{
				velocityX -= 5;

			}

			else if (Y_POS >= 840) // game over
			{
				velocityY -= 5;
			}

			else if (Y_POS == 0)
			{
				velocityY += 5;

			}

			else if (X_POS == 0)
			{
				velocityX += 5;

			}

			else if (Y_POS <= sy1) // if ball goes below paddle lives--
			{
				velocityY = -velocityY;
				lives--;

				if (lives == 0)
				{
					// game over
				}
				else
				{
					X_POS = 550;
					Y_POS = 160;
					velocityX = 5;
					velocityY = 5;
				}
			}

			// getters help in getting the updated value of paddle

			else if ((X_POS >= sx1 && X_POS <= sx1 + sx2) && Y_POS <= sy1 + sy2)
			{
				velocityY *= -1;

			}

			else // condition for collision with brick
			{
				
			}
		}


};


int Ball::brokenX[44];
int Ball::brokenY[44];
int Ball::count=0;
int Ball::lives = 2;
int Ball::brokenX2[5][5][5];
int Ball::brokenY2[5][5][5];
int Ball::count2[5][5][5];
int Ball::ch[5][5][5];
int Ball::help=0;
int Ball::brickClr = 1;
int Ball::brickClr2 = 1;
int Ball::PaddleClr = 1;
int Ball::PaddleClr2 = 1;

class Paddle: public Game, public Ball
{
	public:
		void Display1 ()
		{
			switch (PaddleClr)
			{
				case 1: 
					DrawRectangle (sx1, sy1, sx2, sy2, colors[GREEN]);
					break;
					
				case 2:
					DrawRectangle (sx1, sy1, sx2, sy2, colors[DEEP_PINK]);
					break;
					
				case 3:
					DrawRectangle (sx1, sy1, sx2, sy2, colors[NAVY]);
					break;
					
				case 4:
					DrawRectangle (sx1, sy1, sx2, sy2, colors[DARK_RED]);
					break;
					
				case 5:
					DrawRectangle (sx1, sy1, sx2, sy2, colors[GOLD]);
					break;
					
				default:
					DrawRectangle (sx1, sy1, sx2, sy2, colors[LIGHT_SLATE_GRAY]);
					break;
			}

		}
		
		void Display2()
		{
			switch (PaddleClr2)
			{
				case 1: 
					DrawRectangle (sx1, sy1, sx2, sy2, colors[GREEN]);
					break;
					
				case 2:
					DrawRectangle (sx1, sy1, sx2, sy2, colors[DEEP_PINK]);
					break;
					
				case 3:
					DrawRectangle (sx1, sy1, sx2, sy2, colors[NAVY]);
					break;
					
				case 4:
					DrawRectangle (sx1, sy1, sx2, sy2, colors[DARK_RED]);
					break;
					
				case 5:
					DrawRectangle (sx1, sy1, sx2, sy2, colors[GOLD]);
					break;
					
				default:
					DrawRectangle (sx1, sy1, sx2, sy2, colors[LIGHT_SLATE_GRAY]);
					break;
			}
		}

		void Display3A()
		{
			DrawRectangle (sx1, sy1, sx2, sy2, colors[LIGHT_SLATE_GRAY]);
		}
		
		void Display3B()
		{
			DrawRectangle (Px1, Py1, Px2, Py2, colors[LIGHT_SLATE_GRAY]);
		}

};

class Food: public Ball
{
	public:
		void dropFood ()
		{
			for (int i = 0; i < count; i++)
			{
			
				if (array2[i] == 1) // green power-up
				{
					DrawTriangle (brokenX[i], brokenY[i], brokenX[i] + 30, brokenY[i],brokenX[i]+15, brokenY[i] + 20, colors[GREEN]);
					brokenY[i] -=5; // downward move

					int foodX = brokenX[i] + x2 / 2;
					int foodY = brokenY[i] + y2 / 2;

					if (foodX >= sx1 && foodX <= sx1 + sx2 && foodY >= sy1 && foodY<= sy1 + sy2)
					{
						sx2 += 10;
					}
				}

				if (array2[i] == 2) // pink power-down
				{
					int foodX = brokenX[i] + x2 / 2;
					int foodY = brokenY[i] + y2 / 2;
					DrawSquare (foodX - 10, foodY - 10, 20, colors[DEEP_PINK]);
					brokenY[i] -= 5; // downward
					//makeFood = false;

					if (foodX >= sx1 && foodX <= sx1 + sx2 && foodY >= sy1 && foodY <= sy1 + sy2)
					{
						sx2 -= 10;
					}

				}

				if (array2[i] == 3) // blue power-down
				{
					int foodX = brokenX[i];
					int foodY = brokenY[i];
					DrawCircle (foodX, foodY, 10, colors[NAVY]);
					brokenY[i] -= 5; // downward
					//makeFood = false;

					if (foodX >= sx1 && foodX <= sx1 + sx2 && foodY >= sy1 && foodY <= sy1 + sy2)
					{
						velocityX -= 1;
						//velocityY -= 1;
					}

				}

				if (array2[i] == 4) // red power-up
				{
					int foodX = brokenX[i] + x2 / 2;
					int foodY = brokenY[i] + y2 / 2;
					DrawRectangle (foodX - 15, foodY - 7, 30, 14, colors[DARK_RED]);
					brokenY[i] -= 5; // downward
					//makeFood = false;

					if (foodX >= sx1 && foodX <= sx1 + sx2 && foodY >= sy1 && foodY <= sy1 + sy2)
					{
						velocityX += 1;
						velocityY += 1;
					}

				}

				if (array2[i] == 5) // yellow power-up
				{
					int foodX = brokenX[i] + x2 / 2;
					int foodY = brokenY[i] + y2 / 2;
					DrawSquare (foodX - 10, foodY - 10, 20, colors[GOLD]);
					brokenY[i] -= 5; // downward
					//makeFood = false;

					if (foodX >= G.get_sx1() && foodX <= G.get_sx1() + G.get_sx2() && foodY >= G.get_sy1() && foodY<= G.get_sy1() + G.get_sy2()) // add two balls
					{
						Ball food1, food2;
						food1.X_POS = foodX - 50;
						food1.Y_POS = foodY;
						food2.X_POS = foodX + 50;
						food2.Y_POS = foodY;
						food1.velocityX = 5;
						food1.velocityY = 5;
						food2.velocityX = -1;
						food2.velocityY = -1;

						food1.makeBall();
						food2.makeBall();

					}

				}
			}
		}

		void dropFood2()
		{
		 	for (int i=0 ; i<5; i++) // lvl 2
			{
				for (int j=0 ; j<5; j++)
				{
					for (int k1=0; k1<5; k1++)
					{
						if (ch[i][j][k1]==1)// green
						{
						 
							DrawTriangle (brokenX2[i][j][k1], brokenY2[i][j][k1], brokenX2[i][j][k1]+ 30, brokenY2[i][j][k1],brokenX2[i][j][k1]+15, brokenY2[i][j][k1]+ 20, colors[GREEN]);
										   
							brokenY2[i][j][k1] -=1; // downward move

							int foodX2 = brokenX2[i][j][k1] + x2 / 2;
							int foodY2 = brokenY2[i][j][k1] + y2 / 2;

							if (foodX2 >= sx1 && foodX2 <= sx1 + sx2 && foodY2 >= sy1 && foodY2 <= sy1 + sy2)
							{
								sx2 += 10;
							}
						}

						else if (ch[i][j][k1]==2) // pink
						{
							int foodX2 = brokenX2[i][j][k1] + x2 / 2;
							int foodY2 = brokenY2[i][j][k1] + y2 / 2;
							DrawSquare (foodX2 - 10, foodY2 - 10, 20, colors[DEEP_PINK]);
							brokenY2[i][j][k1] -= 1; // downward
							//makeFood = false;

							if (foodX2 >= sx1 && foodX2 <= sx1 + sx2 && foodY2 >= sy1 && foodY2 <= sy1 + sy2)
							{
								sx2 -= 10;
							}

						}

						else if (ch[i][j][k1]==3) // blue power-down
						{
							int foodX2 = brokenX2[i][j][k1];
							int foodY2 = brokenY2[i][j][k1];
							DrawCircle (foodX2, foodY2, 10, colors[NAVY]);
							brokenY2[i][j][k1] -= 5; // downward
							//makeFood = false;

							if (foodX2 >= sx1 && foodX2 <= sx1 + sx2 && foodY2 >= sy1 && foodY2 <= sy1 + sy2)
							{
								velocityX -= 1;
								//velocityY -= 1;
							}

						}

						else if (ch[i][j][k1]==4) // red power-up
						{
							int foodX2 = brokenX2[i][j][k1]+ x2 / 2;
							int foodY2 = brokenY2[i][j][k1]+ y2 / 2;
							DrawRectangle (foodX2 - 15, foodY2 - 7, 30, 14, colors[DARK_RED]);
							brokenY2[i][j][k1] -= 1; // downward
							//makeFood = false;

							if (foodX2 >= sx1 && foodX2 <= sx1 + sx2 && foodY2 >= sy1 && foodY2 <= sy1 + sy2)
							{
								velocityX += 1;
								velocityY += 1;
							}

						}

						else if (ch[i][j][k1]==5) // yellow power-up
						{
							int foodX2 = brokenX2[i][j][k1] + x2 / 2;
							int foodY2 = brokenY2[i][j][k1] + y2 / 2;
							DrawSquare (foodX2 - 10, foodY2 - 10, 20, colors[GOLD]);
							brokenY2[i][j][k1] -= 1; // downward
							//makeFood = false;

							if (foodX2 >= G.get_sx1() && foodX2 <= G.get_sx1() + G.get_sx2() && foodY2 >= G.get_sy1() && foodY2 <= G.get_sy1() + G.get_sy2()) // add two balls
							{
								Ball food1, food2;
								food1.X_POS = foodX2 - 50;
								food1.Y_POS = foodY2;
								food2.X_POS = foodX2 + 50;
								food2.Y_POS = foodY2;
								food1.velocityX = 5;
								food1.velocityY = 5;
								food2.velocityX = -1;
								food2.velocityY = -1;

								food1.makeBall();
								food2.makeBall();

							}

						}


					}

		 		}

		  	}
		}
		
		void dropFood3()
		{
				
				
		}

};

void SetCanvasSize (int width, int height)
{
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	glOrtho (0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity ();
}


/*
 * Main Canvas drawing function.
 * */
//int dx=400;

void GameDisplay () /**/
{
	Paddle P1;
	Food F1;

	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor (0 /*Red Component */ , 0, //148.0/255/*Green Component*/,
	0.0 /*Blue Component */ , 0 /*Alpha component */ ); // Red==Green==Blue==1 --> White Colour

	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	
	//Display Score
	if(G.getOPT()==1)
	{
		string s= to_string(G.get_score());
		string lives_str = "Lives: " + to_string(Ball::lives);
		DrawString (15, 800, "Minahil Rizwan (23I-0114)", colors[MISTY_ROSE]);
		DrawString (370, 800, "Score = "+s, colors[MISTY_ROSE]);
		DrawString (900, 20, lives_str, colors[MISTY_ROSE]);


		ofstream scrfile("score.txt");
		if (scrfile.is_open())
		{
			scrfile<<G.get_score();
			scrfile.close();
		}

		//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color);

		DrawLine (0, 0, 0, 840, 10, colors[TAN]);
		DrawLine (1020, 840, 0, 840, 10, colors[TAN]);
		DrawLine (1020, 0, 0, 0, 10, colors[TAN]);
		DrawLine (1020, 0, 1020, 840, 10, colors[TAN]);


		if (G.get_score() < 440)
		{
			/*DrawString (615, 800, "Level: 1", colors[MISTY_ROSE]);
			DrawString (815, 800, "High Score: 440", colors[MISTY_ROSE]);
			P1.Display1 ();
			Bricks B1;
			B1.makeBrick ();
			Ball B;
			B.move ();
			B.makeBall ();
			F1.dropFood ();*/
			
			DrawString (615, 800, "Level: 3", colors[MISTY_ROSE]);
			DrawString (815, 800, "High Score: 1440", colors[MISTY_ROSE]);
			P1.Display3A ();
			P1.Display3B ();
			Bricks B1;
			B1.makeBrick3 ();
			Ball B;
			B.move ();
			B.makeBall3 ();
			F1.dropFood ();
			

		}
	
		else if (G.get_score() >= 440)
		{
			DrawString (615, 800, "Level: 2", colors[MISTY_ROSE]);
			DrawString (810, 800, "HIGH SCORE: 1440", colors[MISTY_ROSE]);
			P1.Display2 ();
			Bricks B1;
			B1.makeBrick2 ();
			Ball B;
			B.move2 ();
			B.makeBall2 ();
			F1.dropFood2();
			
		}

		/*else if (G.get_score() >= 1000)
		{
			DrawString (640, 800, "Level: 3", colors[MISTY_ROSE]);
			P1.Display3A ();
			P1.Display3B();
			Bricks B1;
			B1.makeBrick3 ();
			Ball B;
			B.move3 ();
			B.makeBall ();
			F1.dropFood3 ();
		}*/
		
	}

	if (Ball::lives == 0)
	{
		DrawSquare(0, 0, 1020, colors[BLACK]);
		DrawString(450, 420, "GAME OVER!!!", colors[WHITE]);
	}	
	
	if(G.getOPT()==0)
	{
		DrawSquare(0, 0, 1020, colors[MINT_CREAM]);
		DrawString(340, 700, "WELCOME TO BRICK BREAKER GAME", colors[BLACK]);
		DrawLine (335, 690, 790, 690, 3, colors[BLACK]);
		DrawString(500, 600, "a - Play", colors[BLACK]);
		DrawString(500, 500, "b - Levels", colors[BLACK]);
		DrawString(500, 400, "c - Exit", colors[BLACK]);
		DrawString(780, 70, "- Minahil Rizwan", colors[BLACK]);
		DrawString(780, 40, " (23I-0114) ", colors[BLACK]);

	}
	
	glutPostRedisplay ();
	glutSwapBuffers (); // do not modify this line..

}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys (int key, int x, int y)
{
	if (key == GLUT_KEY_LEFT)
	{
		if(G.get_Px1()>=20)
		{
			G.set_Px1 (-20);
		}
	}
	
	else if (key == GLUT_KEY_RIGHT)
	{
		if(G.get_Px1()<=890)
		{
			G.set_Px1 (20);
		}
	}

	 else if (key == GLUT_KEY_UP /*GLUT_KEY_UP is constant and contains ASCII for up arrow key */ )
	{

	}

	 else if (key == GLUT_KEY_DOWN /*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key */)
	{

	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	* this function*/

	 glutPostRedisplay ();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys (unsigned char key, int x, int y)
{
	if (key == 27 || key == 'c' || key == 'C' /* Escape key ASCII */ )
	{
		exit(1);
	}

	if (key == 'a' || key == 'A')
	{
		G.setOPT(1);
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
	{
		cout<<"b pressed";

	}

	glutPostRedisplay ();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer (int m)
{

	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc (1000.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved (int x, int y)
{
//cout << x << " " << y << endl;
//glutPostRedisplay();
}

void MouseMoved (int x, int y)
{
	G.set_sx1 (x);
    	G.set_sx2 (x+50);   
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked (int button, int state, int x, int y)
{

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
	{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	}
	else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
	{
		cout << "Right Button Pressed" << endl;

	}
	
	glutPostRedisplay ();
}

/*
 * our gateway main function
 * */
int main (int argc, char *argv[])
{

	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	InitRandomizer (); // seed the random number generator...
	glutInit (&argc, argv); // initialize the graphics library...
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition (50, 50); // set the initial position of our window
	glutInitWindowSize (width, height); // set the size of our window
	glutCreateWindow ("Minahil's Project"); // set the title of our game window
	SetCanvasSize (width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc (GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc (NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc (PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc (1000.0, Timer, 0);

	glutMouseFunc (MouseClicked);
	glutPassiveMotionFunc (MouseMoved); // Mouse
	glutMotionFunc (MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop ();

 return 1;
}
#endif /* AsteroidS_CPP_ */

