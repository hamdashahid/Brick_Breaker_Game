// 

#ifndef HEADER_H_
#define HEADER_H_
#include <GL/gl.h>
#include <GL/glut.h>
#include<string>
#include<fstream>
#include <iostream>
#include "util.h"
#include "CImg.h"


struct BrickColours1
{
	static int PinkBrickX[7];
	static int PinkBrickY[7];
	static int GreenBrickX[7];
	static int GreenBrickY[7];
	static int BlueBrickX[6];
	static int BlueBrickY[6];
	static int RedBrickX[7];
	static int RedBrickY[7];
	static int YellowBrickX[5];
	static int YellowBrickY[5];
};

struct BrickCollisions1
{
	static int PinkBrickCollision[7];
	static int GreenBrickCollision[7];
	static int BlueBrickCollision[6];
	static int RedBrickCollision[7];
	static int YellowBrickCollision[5];
};

struct BrickColours2
{
	static int PinkBrickX[20];
	static int PinkBrickY[20];
	static int GreenBrickX[20];
	static int GreenBrickY[20];
	static int BlueBrickX[20];
	static int BlueBrickY[20];
	static int RedBrickX[20];
	static int RedBrickY[20];
	static int YellowBrickX[20];
	static int YellowBrickY[20];
};

struct BrickCollisions2
{
	static int PinkBrickCollision[20];
	static int GreenBrickCollision[20];
	static int BlueBrickCollision[20];
	static int RedBrickCollision[20];
	static int YellowBrickCollision[20];
};


class Brick
{
	protected:

		static int brickX;
		static int brickY;
		static BrickColours1 b1;
		static int score;
		static BrickCollisions1 c1;
		static string ballColours;

		static string ball2Colours;
		static string ball3Colours;

		static bool BlueFoodTime;
		static bool RedFoodTime;
		static bool YellowFoodTime;

		static BrickColours2 b2;
		static BrickCollisions2 c2;

		static string brick3colours[12][11];
		static int Brick3X[12][11];
		static int Brick3Y[12][11];


	public:

		static void Bricklevel1()
		{
			for(int i=0 ; i<7 ;i++)
			{
				DrawRectangle(b1.GreenBrickX[i],b1.GreenBrickY[i],80,40,colors[GREEN]);
				DrawRectangle(b1.PinkBrickX[i],b1.PinkBrickY[i],80,40,colors[PINK]);
				DrawRectangle(b1.RedBrickX[i],b1.RedBrickY[i],80,40,colors[RED]);
			}

			for(int i=0 ; i<5 ;i++)
			{
				DrawRectangle(b1.YellowBrickX[i],b1.YellowBrickY[i],80,40,colors[YELLOW]);
			}

			for(int i=0; i<6 ; i++)
			{
				DrawRectangle(b1.BlueBrickX[i],b1.BlueBrickY[i],80,40,colors[BLUE]);

			}

			glutPostRedisplay();
		}

		static void storeBricks()
		{
			int count = 0;


			//<================RED BRICKS=====================>

			for(int i=60,j=600 ; i<=710 ; i+=180,j-=50,count++)
			{
				b1.RedBrickX[count] = i;
				b1.RedBrickY[count] = j;
				// DrawRectangle(i,j,80,40,colors[RED]);
			}

			// DrawRectangle(60,450,80,40,colors[RED]);
			b1.RedBrickX[count] = 60;
			b1.RedBrickY[count] = 450;
			count++;

			for(int i=510,j=600 ; i<850 ; i+=180,j-=50,count++)
			{
				b1.RedBrickX[count] = i;
				b1.RedBrickY[count] = j;
				// DrawRectangle(i,j,80,40,colors[RED]);
			}

			// for(int i=0 ; i<)

			count = 0;
			// <================ GREEN BRICKS ==============>

			b1.GreenBrickX[0] = 150;
			b1.GreenBrickY[0] = 600;

			b1.GreenBrickX[1] = 330;
			b1.GreenBrickY[1] = 550;

			b1.GreenBrickX[2] = 510;
			b1.GreenBrickY[2] = 500;

			b1.GreenBrickX[3] = 690;
			b1.GreenBrickY[3] = 450;

			b1.GreenBrickX[4] = 600;
			b1.GreenBrickY[4] = 600;

			b1.GreenBrickX[5] = 60;
			b1.GreenBrickY[5] = 500;

			b1.GreenBrickX[6] = 240;
			b1.GreenBrickY[6] = 450;



			// for(int i=150,j=600 ; i<=790 ; i+=180)
			// {
			// 	b1.GreenBrickX[count] = i;
			// 	b1.GreenBrickY[count] = j;
			// 	count++;
			// 	j-=50;
			// 	// DrawRectangle(i,j,80,40,colors[GREEN]);
			// }

			// for(int i=600,j=600 ; i<720 ; i+=180)
			// {
			// 	b1.GreenBrickX[count] = i;
			// 	b1.GreenBrickY[count] = j;
			// 	count++;
			// 	j-=50;
			// 	// DrawRectangle(i,j,80,40,colors[GREEN]);
			// }

			// for(int i=60,j=500 ; i<420 ; i+=180)
			// {
			// 	b1.GreenBrickX[count] = i;
			// 	b1.GreenBrickY[count] = j;
			// 	count++;
			// 	j-=50;
			// 	// DrawRectangle(i,j,80,40,colors[GREEN]);
			// }



			count =0 ;
			//<=========================== PINK BRICKS ===================>

			b1.PinkBrickX[0] = 240;
			b1.PinkBrickY[0] = 600;

			b1.PinkBrickX[1] = 420;
			b1.PinkBrickY[1] = 550;

			b1.PinkBrickX[2] = 600;
			b1.PinkBrickY[2] = 500;

			b1.PinkBrickX[3] = 690;
			b1.PinkBrickY[3] = 600;

			b1.PinkBrickX[4] = 150;
			b1.PinkBrickY[4] = 450;

			b1.PinkBrickX[5] = 150;
			b1.PinkBrickY[5] = 550;

			b1.PinkBrickX[6] = 330;
			b1.PinkBrickY[6] = 500;


			// for(int i=240,j=600 ; i<750 ; i+=180)
			// {
			// 	b1.PinkBrickX[count] = i;
			// 	b1.PinkBrickY[count] = j;
			// 	count++;
			// 	j-=50;
			// 	// DrawRectangle(i,j,80,40,colors[PINK]);
			// }

			// for(int i=690,j=600 ; i<1030 ; i+=180)
			// {
			// 	b1.PinkBrickX[count] = i;
			// 	b1.PinkBrickY[count] = j;
			// 	j-=50;
			// 	count++;
			// 	// DrawRectangle(i,j,80,40,colors[PINK]);
			// }

			// for(int i=150,j=550 ; i<510 ; i+=180)
			// {
			// 	b1.PinkBrickX[count] = i;
			// 	b1.PinkBrickY[count] = j;
			// 	count++;
			// 	j-=50;
			// 	// DrawRectangle(i,j,80,40,colors[PINK]);
			// }
				// b1.PinkBrickX[count] = 150;
				// b1.PinkBrickY[count] = 450;
			// DrawRectangle(150,450,80,40,colors[PINK]);



			count = 0;

			//<========================   BLUE BRICKS ======================>

			b1.BlueBrickX[0] = 330;
			b1.BlueBrickY[0] = 600;

			b1.BlueBrickX[1] = 510;
			b1.BlueBrickY[1] = 550;

			b1.BlueBrickX[2] = 690;
			b1.BlueBrickY[2] = 500;

			b1.BlueBrickX[3] = 150;
			b1.BlueBrickY[3] = 500;

			b1.BlueBrickX[4] = 330;
			b1.BlueBrickY[4] = 450;

			b1.BlueBrickX[5] = 510;
			b1.BlueBrickY[5] = 450;


			// for(int i=330,j=600 ; i<=790 ; i+=180)
			// {
			// 	b1.BlueBrickX[count] = i;
			// 	b1.BlueBrickY[count] = j;
			// 	count++;
			// 	j-=50;
			// 	// DrawRectangle(i,j,80,40,colors[BLUE]);
			// }

			// for(int i=150,j=500 ; i<510 ; i+=180)
			// {
			// 	b1.BlueBrickX[count] = i;
			// 	b1.BlueBrickY[count] = j;
			// 	count++;
			// 	j-=50;
			// 	// DrawRectangle(i,j,80,40,colors[BLUE]);
			// }


			count = 0;
			//<===================== YELLOW BRICKS =======================>

			b1.YellowBrickX[0] = 420;
			b1.YellowBrickY[0] = 600;

			b1.YellowBrickX[1] = 600;
			b1.YellowBrickY[1] = 550;

			b1.YellowBrickX[2] = 60;
			b1.YellowBrickY[2] = 550;

			b1.YellowBrickX[3] = 240;
			b1.YellowBrickY[3] = 500;

			b1.YellowBrickX[4] = 420;
			b1.YellowBrickY[4] = 450;



			// for(int i=420 ,j=600 ; i<680 ; i+=180)
			// {
			// 	b1.YellowBrickX[count] = i;
			// 	b1.YellowBrickY[count] = j;
			// 	count++;
			// 	j-=50;
			// 	// DrawRectangle(i,j,80,40,colors[YELLOW]);
			// }
			// for(int i=60,j=550 ; i<600 ; i+=180)
			// {
			// 	b1.YellowBrickX[count] = i;
			// 	b1.YellowBrickY[count] = j;

			// 	count++;
			// 	j-=50;
			// 	// DrawRectangle(i,j,80,40,colors[YELLOW]);
			// }


			// b1.PinkBrickX[0] = 240;
			// b1.PinkBrickY[0] = 600;

			// b1.BlueBrickX[0] = 330;
			// b1.BlueBrickY[0] = 600;

			// b1.YellowBrickX[0] = 420;
			// b1.YellowBrickY[0] = 600;
		}

		static void Bricklevel2()
		{
			for(int i=0 ; i<20 ;i++)
			{
				DrawRectangle(b2.GreenBrickX[i],b2.GreenBrickY[i],70,15,colors[GREEN]);
				DrawRectangle(b2.PinkBrickX[i],b2.PinkBrickY[i],70,15,colors[PINK]);
				DrawRectangle(b2.RedBrickX[i],b2.RedBrickY[i],70,15,colors[RED]);
				DrawRectangle(b2.BlueBrickX[i],b2.BlueBrickY[i],70,15,colors[BLUE]);
				DrawRectangle(b2.YellowBrickX[i],b2.YellowBrickY[i],70,15,colors[YELLOW]);
			}

			glutPostRedisplay();
		}

		static void storeBricks2()
		{
			//<======================================BLUE BRICKS=======================>

			b2.BlueBrickX[0] = 20;
			b2.BlueBrickY[0] = 640;

			b2.BlueBrickX[1] = 180;
			b2.BlueBrickY[1] = 620;

			b2.BlueBrickX[2] = 340;
			b2.BlueBrickY[2] = 600;

			b2.BlueBrickX[3] = 100;
			b2.BlueBrickY[3] = 580;

			b2.BlueBrickX[4] = 420;
			b2.BlueBrickY[4] = 560;

			b2.BlueBrickX[5] = 580;
			b2.BlueBrickY[5] = 540;

			b2.BlueBrickX[6] = 740;
			b2.BlueBrickY[6] = 520;

			b2.BlueBrickX[7] = 500;
			b2.BlueBrickY[7] = 500;

			b2.BlueBrickX[8] = 20;
			b2.BlueBrickY[8] = 480;

			b2.BlueBrickX[9] = 180;
			b2.BlueBrickY[9] = 460;

			b2.BlueBrickX[10] = 340;
			b2.BlueBrickY[10] = 440;

			b2.BlueBrickX[11] = 100;
			b2.BlueBrickY[11] = 420;

			b2.BlueBrickX[12] = 420;
			b2.BlueBrickY[12] = 400;

			b2.BlueBrickX[13] = 580;
			b2.BlueBrickY[13] = 380;

			b2.BlueBrickX[14] = 740;
			b2.BlueBrickY[14] = 360;

			b2.BlueBrickX[15] = 500;
			b2.BlueBrickY[15] = 340;	

			b2.BlueBrickX[16] = 20;
			b2.BlueBrickY[16] = 320;

			b2.BlueBrickX[17] = 180;
			b2.BlueBrickY[17] = 300;

			b2.BlueBrickX[18] = 340;
			b2.BlueBrickY[18] = 280;

			b2.BlueBrickX[19] = 100;
			b2.BlueBrickY[19] = 260;

			//<======================================GREEN BRICKS========================>

			b2.GreenBrickX[0] = 100;
			b2.GreenBrickY[0] = 640;

			b2.GreenBrickX[1] = 260;
			b2.GreenBrickY[1] = 620;

			b2.GreenBrickX[2] = 20;
			b2.GreenBrickY[2] = 600;

			b2.GreenBrickX[3] = 180;
			b2.GreenBrickY[3] = 580;

			b2.GreenBrickX[4] = 500;
			b2.GreenBrickY[4] = 560;

			b2.GreenBrickX[5] = 660;
			b2.GreenBrickY[5] = 540;

			b2.GreenBrickX[6] = 420;
			b2.GreenBrickY[6] = 520;

			b2.GreenBrickX[7] = 580;
			b2.GreenBrickY[7] = 500;

			b2.GreenBrickX[8] = 100;
			b2.GreenBrickY[8] = 480;

			b2.GreenBrickX[9] = 260;
			b2.GreenBrickY[9] = 460;

			b2.GreenBrickX[10] = 20;
			b2.GreenBrickY[10] = 440;

			b2.GreenBrickX[11] = 180;
			b2.GreenBrickY[11] = 420;

			b2.GreenBrickX[12] = 500;
			b2.GreenBrickY[12] = 400;

			b2.GreenBrickX[13] = 660;
			b2.GreenBrickY[13] = 380;

			b2.GreenBrickX[14] = 420;
			b2.GreenBrickY[14] = 360;

			b2.GreenBrickX[15] = 580;
			b2.GreenBrickY[15] = 340;	

			b2.GreenBrickX[16] = 100;
			b2.GreenBrickY[16] = 320;

			b2.GreenBrickX[17] = 260;
			b2.GreenBrickY[17] = 300;

			b2.GreenBrickX[18] = 20;
			b2.GreenBrickY[18] = 280;

			b2.GreenBrickX[19] = 180;
			b2.GreenBrickY[19] = 260;


			//<======================================RED BRICKS===========================>

			b2.RedBrickX[0] = 180;
			b2.RedBrickY[0] = 640;

			b2.RedBrickX[1] = 340;
			b2.RedBrickY[1] = 620;

			b2.RedBrickX[2] = 100;
			b2.RedBrickY[2] = 600;

			b2.RedBrickX[3] = 260;
			b2.RedBrickY[3] = 580;

			b2.RedBrickX[4] = 580;
			b2.RedBrickY[4] = 560;

			b2.RedBrickX[5] = 740;
			b2.RedBrickY[5] = 540;

			b2.RedBrickX[6] = 500;
			b2.RedBrickY[6] = 520;

			b2.RedBrickX[7] = 660;
			b2.RedBrickY[7] = 500;

			b2.RedBrickX[8] = 180;
			b2.RedBrickY[8] = 480;

			b2.RedBrickX[9] = 340;
			b2.RedBrickY[9] = 460;

			b2.RedBrickX[10] = 100;
			b2.RedBrickY[10] = 440;

			b2.RedBrickX[11] = 260;
			b2.RedBrickY[11] = 420;

			b2.RedBrickX[12] = 580;
			b2.RedBrickY[12] = 400;

			b2.RedBrickX[13] = 740;
			b2.RedBrickY[13] = 380;

			b2.RedBrickX[14] = 500;
			b2.RedBrickY[14] = 360;

			b2.RedBrickX[15] = 660;
			b2.RedBrickY[15] = 340;	

			b2.RedBrickX[16] = 180;
			b2.RedBrickY[16] = 320;

			b2.RedBrickX[17] = 340;
			b2.RedBrickY[17] = 300;

			b2.RedBrickX[18] = 100;
			b2.RedBrickY[18] = 280;

			b2.RedBrickX[19] = 260;
			b2.RedBrickY[19] = 260;



			//<======================================YELLOW BRICKS=========================>

			b2.YellowBrickX[0] = 340;
			b2.YellowBrickY[0] = 640;

			b2.YellowBrickX[1] = 20;
			b2.YellowBrickY[1] = 620;

			b2.YellowBrickX[2] = 180;
			b2.YellowBrickY[2] = 600;

			b2.YellowBrickX[3] = 340;
			b2.YellowBrickY[3] = 580;

			b2.YellowBrickX[4] = 740;
			b2.YellowBrickY[4] = 560;

			b2.YellowBrickX[5] = 420;
			b2.YellowBrickY[5] = 540;

			b2.YellowBrickX[6] = 580;
			b2.YellowBrickY[6] = 520;

			b2.YellowBrickX[7] = 740;
			b2.YellowBrickY[7] = 500;

			b2.YellowBrickX[8] = 340;
			b2.YellowBrickY[8] = 480;

			b2.YellowBrickX[9] = 20;
			b2.YellowBrickY[9] = 460;

			b2.YellowBrickX[10] = 180;
			b2.YellowBrickY[10] = 440;

			b2.YellowBrickX[11] = 340;
			b2.YellowBrickY[11] = 420;

			b2.YellowBrickX[12] = 740;
			b2.YellowBrickY[12] = 400;

			b2.YellowBrickX[13] = 420;
			b2.YellowBrickY[13] = 380;

			b2.YellowBrickX[14] = 580;
			b2.YellowBrickY[14] = 360;

			b2.YellowBrickX[15] = 740;
			b2.YellowBrickY[15] = 340;	

			b2.YellowBrickX[16] = 340;
			b2.YellowBrickY[16] = 320;

			b2.YellowBrickX[17] = 20;
			b2.YellowBrickY[17] = 300;

			b2.YellowBrickX[18] = 180;
			b2.YellowBrickY[18] = 280;

			b2.YellowBrickX[19] = 340;
			b2.YellowBrickY[19] = 260;


			//<======================================PINK BRICKS============================>

			b2.PinkBrickX[0] = 260;
			b2.PinkBrickY[0] = 640;

			b2.PinkBrickX[1] = 100;
			b2.PinkBrickY[1] = 620;

			b2.PinkBrickX[2] = 260;
			b2.PinkBrickY[2] = 600;

			b2.PinkBrickX[3] = 20;
			b2.PinkBrickY[3] = 580;

			b2.PinkBrickX[4] = 660;
			b2.PinkBrickY[4] = 560;

			b2.PinkBrickX[5] = 500;
			b2.PinkBrickY[5] = 540;

			b2.PinkBrickX[6] = 660;
			b2.PinkBrickY[6] = 520;

			b2.PinkBrickX[7] = 420;
			b2.PinkBrickY[7] = 500;

			b2.PinkBrickX[8] = 260;
			b2.PinkBrickY[8] = 480;

			b2.PinkBrickX[9] = 100;
			b2.PinkBrickY[9] = 460;

			b2.PinkBrickX[10] = 260;
			b2.PinkBrickY[10] = 440;

			b2.PinkBrickX[11] = 20;
			b2.PinkBrickY[11] = 420;

			b2.PinkBrickX[12] = 660;
			b2.PinkBrickY[12] = 400;

			b2.PinkBrickX[13] = 500;
			b2.PinkBrickY[13] = 380;

			b2.PinkBrickX[14] = 660;
			b2.PinkBrickY[14] = 360;

			b2.PinkBrickX[15] = 420;
			b2.PinkBrickY[15] = 340;	

			b2.PinkBrickX[16] = 260;
			b2.PinkBrickY[16] = 320;

			b2.PinkBrickX[17] = 100;
			b2.PinkBrickY[17] = 300;

			b2.PinkBrickX[18] = 260;
			b2.PinkBrickY[18] = 280;

			b2.PinkBrickX[19] = 20;
			b2.PinkBrickY[19] = 260;


		}

		static void BrickLevel3()
		{
			for(int i=0 ;i<12 ;i++)
			{
				for(int j=0 ;j<11 ; j++)
				{
					// cout<<"here"<<endl;
					if(brick3colours[i][j] == "BLUE_VIOLET")
					{
						DrawRectangle(Brick3X[i][j],Brick3Y[i][j],40,20,colors[BLUE_VIOLET]);
					}
					else if(brick3colours[i][j] == "BLUE")
					{
						DrawRectangle(Brick3X[i][j],Brick3Y[i][j],40,20,colors[BLUE]);

					}
					else if(brick3colours[i][j] == "GREEN")
					{
						DrawRectangle(Brick3X[i][j],Brick3Y[i][j],40,20,colors[GREEN]);

					}
					else if(brick3colours[i][j] == "PINK")
					{
						DrawRectangle(Brick3X[i][j],Brick3Y[i][j],40,20,colors[PINK]);

					}
					else if(brick3colours[i][j] == "RED")
					{
						DrawRectangle(Brick3X[i][j],Brick3Y[i][j],40,20,colors[RED]);

					}
					else if(brick3colours[i][j] == "YELLOW")
					{
						DrawRectangle(Brick3X[i][j],Brick3Y[i][j],40,20,colors[YELLOW]);

					}
					else if(brick3colours[i][j] == "IVORY")
					{
						DrawRectangle(Brick3X[i][j],Brick3Y[i][j],40,20,colors[IVORY]);
					}
				}
			}
		}

		static void storeBricks3()
		{
			rows(0,150,600);
		}


		static void rows(int i , int x, int y)
		{
			if(i<12)
			{
				switch((x+i)%5)
				{
					case 0:

						brick3colours[i][0] = "RED";
						brick3colours[i][1] = "PINK";
						brick3colours[i][2] = "BLUE";
						brick3colours[i][3] = "YELLOW";
						brick3colours[i][4] = "GREEN";
						brick3colours[i][5] = "RED";
						brick3colours[i][6] = "PINK";
						brick3colours[i][7] = "BLUE";
						brick3colours[i][8] = "YELLOW";
						brick3colours[i][9] = "GREEN";
						brick3colours[i][10] = "RED";

						break;

					case 1:

						brick3colours[i][0] = "GREEN";
						brick3colours[i][1] = "BLUE";
						brick3colours[i][2] = "YELLOW";
						brick3colours[i][3] = "PINK";
						brick3colours[i][4] = "RED";
						brick3colours[i][5] = "BLUE";
						brick3colours[i][6] = "GREEN";
						brick3colours[i][7] = "PINK";
						brick3colours[i][8] = "RED";
						brick3colours[i][9] = "BLUE";
						brick3colours[i][10] = "GREEN";


						break;

					case 2:

						brick3colours[i][0] = "YELLOW";
						brick3colours[i][1] = "PINK";
						brick3colours[i][2] = "RED";
						brick3colours[i][3] = "BLUE";
						brick3colours[i][4] = "PINK";
						brick3colours[i][5] = "GREEN";
						brick3colours[i][6] = "BLUE";
						brick3colours[i][7] = "PINK";
						brick3colours[i][8] = "RED";
						brick3colours[i][9] = "YELLOW";
						brick3colours[i][10] = "GREEN";

						break;

					case 3:

						brick3colours[i][0] = "PINK";
						brick3colours[i][1] = "YELLOW";
						brick3colours[i][2] = "RED";
						brick3colours[i][3] = "BLUE";
						brick3colours[i][4] = "GREEN";
						brick3colours[i][5] = "YELLOW";
						brick3colours[i][6] = "GREEN";
						brick3colours[i][7] = "PINK";
						brick3colours[i][8] = "RED";
						brick3colours[i][9] = "YELLOW";
						brick3colours[i][10] = "BLUE";

						break;

					case 4:

						brick3colours[i][0] = "BLUE";
						brick3colours[i][1] = "RED";
						brick3colours[i][2] = "YELLOW";
						brick3colours[i][3] = "PINK";
						brick3colours[i][4] = "GREEN";
						brick3colours[i][5] = "RED";
						brick3colours[i][6] = "BLUE";
						brick3colours[i][7] = "GREEN";
						brick3colours[i][8] = "RED";
						brick3colours[i][9] = "YELLOW";
						brick3colours[i][10] = "BLUE";

						break;

					// default:

					
				}
				columns(i,0,x,y);
				// cout<<endl;
				rows(i+1,x,y-30);

			}
			return;
		}

		static void columns(int i,int j , int x , int y)
		{
			if(i<6)
			{
				if(j<11)
				{
					if(j<6-i)
					{
						// cout<<"*";
						Brick3X[i][j]= x;
						Brick3Y[i][j] = y;
						columns(i,j+1,x+50,y);
					}
					else if(j<5+i)
					{
						// cout<<"#";
						Brick3X[i][j]= 900;
						Brick3Y[i][j] = 900;
						columns(i,j+1,x+50,y);
					}
					else if(j>=6)
					{
						// cout<<"*";
						Brick3X[i][j]= x;
						Brick3Y[i][j] = y;

						columns(i,j+1,x+50,y);
					}

				}
				
			}
			else if(i>=6)
			{
				if(j<11)
				{
					if(j<i-5)
					{
						// cout<<"*";
						Brick3X[i][j]= x;
						Brick3Y[i][j] = y;						
						columns(i,j+1,x+50,y);
					}
					else if(j<16-i)
					{
						// cout<<"#";
						Brick3X[i][j]= 900;
						Brick3Y[i][j] = 900;						
						columns(i,j+1,x+50,y);
					}
					else if(j>=16-i)
					{
						// cout<<"*";
						Brick3X[i][j]= x;
						Brick3Y[i][j] = y;						
						columns(i,j+1,x+50,y);
					}

				}
			}
			return;
		}



};

class Food : public Brick
{
	protected:

		static bool greenFood1;
		static bool pinkFood1;
		static bool blueFood1;
		static bool redFood1;
		static bool yellowFood1;

		static int greenfoodX1;
		static int greenfoodY1;

		static int pinkfoodX1;
		static int pinkfoodY1;

		static int bluefoodX1;
		static int bluefoodY1;

		static int redfoodX1;
		static int redfoodY1;

		static int yellowfoodX1;
		static int yellowfoodY1;

		static bool another;
		static bool some;
		static bool also;

	public:

		static void FoodLevel1()
		{
			if(greenFood1 == true)
			{
				DrawTriangle(greenfoodX1 , greenfoodY1 , greenfoodX1 , greenfoodY1+40, greenfoodX1+40 , greenfoodY1 , colors[GREEN]);
				
				greenfoodY1--;
			}

			if(pinkFood1 == true)
			{
				DrawSquare(pinkfoodX1,pinkfoodY1,40,colors[PINK]);
				pinkfoodY1--;
			}

			if(blueFood1 == true)
			{
				DrawCircle(bluefoodX1,bluefoodY1,20,colors[BLUE]);
				bluefoodY1--;
				another = true;
			}
			else if(another == true)
			{
				BlueFoodTime = true;
				another = false;
			}

			if(redFood1 == true)
			{
				DrawRectangle(redfoodX1,redfoodY1,50,30,colors[RED]);
				redfoodY1--;
				some = true;
			}
			else if(some == true)
			{
				RedFoodTime = true;
				some = false;
			}

			if(yellowFood1 == true)
			{
				DrawSquare(yellowfoodX1,yellowfoodY1,40,colors[YELLOW]);
				yellowfoodY1--;
				also = true;
			}
			else if(also == true)
			{
				YellowFoodTime = true;
				also = false;
			}

			
		}

		

};

class Paddle : public Food
{
	protected:

		static int paddleX;
		static int paddleY;
		static int paddleWidth;
		static string PaddleColor;

		static int paddleX2;
		static int paddleY2;

		static int paddleWidth2;
		static string PaddleColor2;


	public:

		static void PaddleLevel1()
		{
			if(PaddleColor == "BLUE_VIOLET")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[BLUE_VIOLET]);
			}
			else if(PaddleColor == "BLUE")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[BLUE]);

			}
			else if(PaddleColor == "GREEN")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[GREEN]);

			}
			else if(PaddleColor == "PINK")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[PINK]);

			}
			else if(PaddleColor == "RED")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[RED]);

			}
			else if(PaddleColor == "YELLOW")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[YELLOW]);

			}
			else if(PaddleColor == "IVORY")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[IVORY]);
			}
		}

		static bool FoodHitPaddle()
		{
			bool check = false;
			if((((greenfoodX1>=paddleX)&&(greenfoodX1<=paddleX+paddleWidth))
				||((greenfoodX1+40>=paddleX)&&(greenfoodX1+40<=paddleX+paddleWidth)))&&(greenfoodY1 == 40+20))
			{
				greenFood1 = false;
				check = true;
				// bluefoodTime
				// paddleWidth*=2;
				// paddleWidth*=2;
			}

			if((((pinkfoodX1>=paddleX)&&(pinkfoodX1<=paddleX+paddleWidth))
				||((pinkfoodX1+40>=paddleX)&&(pinkfoodX1+40<=paddleX+80)))&&(pinkfoodY1 == 40+20))
			{
				pinkFood1 = false;
				check = true;
			}

			if((((bluefoodX1-20>=paddleX) && (bluefoodX1-20<=paddleX+paddleWidth))
				||((bluefoodX1+20>=paddleX)&&(bluefoodX1+20<=paddleX+paddleWidth)))&&(bluefoodY1-20 == 40+20))
			{
				blueFood1 = false;
				check = true;
			}

			if((((redfoodX1>=paddleX)&&(redfoodX1<=paddleX+80))
				||((redfoodX1+50>=paddleX)&&(redfoodX1+50<=paddleX+80)))&&(redfoodY1 == 40+20))
			{
				redFood1 = false;
				check = true;
			}

			if((((yellowfoodX1>=paddleX)&&(yellowfoodX1<=paddleX+paddleWidth))
				||((yellowfoodX1+40>=paddleX)&&(yellowfoodX1+40<=paddleX+paddleWidth)))&&(yellowfoodY1 == 40+20))
			{
				yellowFood1 = false;
				check = true;
			}

			return check;
		}

		static void PaddleLevel2()
		{
			if(PaddleColor == "BLUE_VIOLET")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[BLUE_VIOLET]);
			}
			else if(PaddleColor == "BLUE")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[BLUE]);

			}
			else if(PaddleColor == "GREEN")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[GREEN]);

			}
			else if(PaddleColor == "PINK")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[PINK]);

			}
			else if(PaddleColor == "RED")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[RED]);

			}
			else if(PaddleColor == "YELLOW")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[YELLOW]);

			}
			else if(PaddleColor == "IVORY")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[IVORY]);
			}
		}

		static bool FoodHitPaddle2()
		{
			bool check = true;
			if((((greenfoodX1>=paddleX)&&(greenfoodX1<=paddleX+paddleWidth))
				||((greenfoodX1+40>=paddleX)&&(greenfoodX1+40<=paddleX+paddleWidth)))&&(greenfoodY1 == 40+20))
			{
				greenFood1 = false;
				check = true;
				// bluefoodTime
				// paddleWidth*=2;
				// paddleWidth*=2;
			}

			if((((pinkfoodX1>=paddleX)&&(pinkfoodX1<=paddleX+paddleWidth))
				||((pinkfoodX1+40>=paddleX)&&(pinkfoodX1+40<=paddleX+80)))&&(pinkfoodY1 == 40+20))
			{
				pinkFood1 = false;
				check = true;
			}

			if((((bluefoodX1-20>=paddleX) && (bluefoodX1-20<=paddleX+paddleWidth))
				||((bluefoodX1+20>=paddleX)&&(bluefoodX1+20<=paddleX+paddleWidth)))&&(bluefoodY1-20 == 40+20))
			{
				blueFood1 = false;
				check = true;
			}

			if((((redfoodX1>=paddleX)&&(redfoodX1<=paddleX+80))
				||((redfoodX1+50>=paddleX)&&(redfoodX1+50<=paddleX+80)))&&(redfoodY1 == 40+20))
			{
				redFood1 = false;
				check = true;
			}

			if((((yellowfoodX1>=paddleX)&&(yellowfoodX1<=paddleX+paddleWidth))
				||((yellowfoodX1+40>=paddleX)&&(yellowfoodX1+40<=paddleX+paddleWidth)))&&(yellowfoodY1 == 40+20))
			{
				yellowFood1 = false;
				check = true;
			}

			return check;
		}

		static bool greenFoodHitPaddle()
		{
			bool checkGreen = false;
			if((((greenfoodX1>=paddleX)&&(greenfoodX1<=paddleX+paddleWidth))
				||((greenfoodX1+40>=paddleX)&&(greenfoodX1+40<=paddleX+paddleWidth)))&&(greenfoodY1 == 40+20))
			{
				greenFood1 = false;
				checkGreen = true;
				paddleWidth*=2;
				greenfoodX1 = 900;
				greenfoodY1 = 900;
			}
			return checkGreen;
		} 

		static bool pinkFoodHitPaddle()
		{
			bool check = true;

			if((((pinkfoodX1>=paddleX)&&(pinkfoodX1<=paddleX+paddleWidth))
				||((pinkfoodX1+40>=paddleX)&&(pinkfoodX1+40<=paddleX+paddleWidth)))&&(pinkfoodY1 == 40+20))
			{
				pinkFood1 = false;
				check = true;
				paddleWidth/=2;
				pinkfoodX1 = 900;
				pinkfoodY1 = 900;
			}
		}

		static void PaddleLevel3()
		{
			// <================= BOTTOM PADDLE =============================>
			if(PaddleColor == "BLUE_VIOLET")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[BLUE_VIOLET]);
			}
			else if(PaddleColor == "BLUE")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[BLUE]);

			}
			else if(PaddleColor == "GREEN")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[GREEN]);

			}
			else if(PaddleColor == "PINK")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[PINK]);

			}
			else if(PaddleColor == "RED")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[RED]);

			}
			else if(PaddleColor == "YELLOW")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[YELLOW]);

			}
			else if(PaddleColor == "IVORY")
			{
				DrawRectangle(paddleX,40,paddleWidth,20,colors[IVORY]);
			}


			//<=================================== TOP PADDLE ======================>

			if(PaddleColor2 == "BLUE_VIOLET")
			{
				DrawRectangle(paddleX2,730,paddleWidth2,20,colors[BLUE_VIOLET]);
			}
			else if(PaddleColor2 == "BLUE")
			{
				DrawRectangle(paddleX2,730,paddleWidth2,20,colors[BLUE]);

			}
			else if(PaddleColor2 == "GREEN")
			{
				DrawRectangle(paddleX2,730,paddleWidth2,20,colors[GREEN]);

			}
			else if(PaddleColor2 == "PINK")
			{
				DrawRectangle(paddleX2,730,paddleWidth2,20,colors[PINK]);

			}
			else if(PaddleColor2 == "RED")
			{
				DrawRectangle(paddleX2,730,paddleWidth2,20,colors[RED]);

			}
			else if(PaddleColor2 == "YELLOW")
			{
				DrawRectangle(paddleX2,730,paddleWidth2,20,colors[YELLOW]);

			}
			else if(PaddleColor2 == "IVORY")
			{
				DrawRectangle(paddleX2,730,paddleWidth2,20,colors[IVORY]);
			}


		}

};

class Ball : public Paddle , public Brick , public Food
{
	protected:
		static int ballX;
		static int ballY;
		static bool check ;
		static int previousMovement[2];
		static int movement[2];
		static int count;
		static int ballSlow;

		static int ballFast;

		static int ball2X;
		static int ball2Y;
		static int ball2PreviousMovement[2];
		static int ball2Movement[2];

		static int ball3X;
		static int ball3Y;
		static int ball3PreviousMovement[2];
		static int ball3Movement[2];



	public:

		static void BallLevel1()
		{
			if(ballColours == "IVORY")
			{
				DrawCircle(ballX,ballY,10,colors[IVORY]);
			}
			else if(ballColours == "RED")
			{
				DrawCircle(ballX,ballY,10,colors[RED]);
			}
			else if(ballColours == "GREEN")
			{
				DrawCircle(ballX,ballY,10,colors[GREEN]);

			}
			else if(ballColours == "PINK")
			{
				DrawCircle(ballX,ballY,10,colors[PINK]);

			}
			else if(ballColours == "YELLOW")
			{
				DrawCircle(ballX,ballY,10,colors[YELLOW]);

			}
			else if(ballColours == "BLUE")
			{
				DrawCircle(ballX,ballY,10,colors[BLUE]);

			}

			if(BlueFoodTime == true)
			{
				if(ballSlow%5 == 0)
				{
					ballMovement();
					// ballMovement();
					count++;
				}

				if(count == 50)
				{
					BlueFoodTime = false;
					count = 0;
				}

			}
			else
			{
				ballMovement();
			}


			if(RedFoodTime == true)
			{
					ballMovement();
				if(ballFast%5 == 0)
				{
					count++;
				}

				if(count == 50)
				{
					RedFoodTime = false;
					count = 0;
				}
			}
			
			if(YellowFoodTime == true)
			{
				Drawball2();
				Drawball3();
				if(ballFast%5 == 0)
				{
					// ballMovement();
					count++;
				}

				if(count == 50)
				{
					YellowFoodTime = false;
					count = 0;
				}

			}

			FoodHitPaddle();
			greenFoodHitPaddle();
			pinkFoodHitPaddle();

			if((((ballX >= paddleX)&&(ballX<= paddleX+paddleWidth))
				||((ballX-10>=paddleX-10)&&(ballX-10<=paddleX+paddleWidth))
				||((ballX+10>=paddleX-10)&&(ballX+10<=paddleX+paddleWidth)))&&(ballY-30 == 40))
			{

				movement[0] = 1;
				PaddleColor = ballColours;

				ballMovement();
			}
			
				for(int i=0 ; i<7 ; i++)
				{
					if((ballX >= b1.GreenBrickX[i]-10)&&(ballX <= b1.GreenBrickX[i]+90)&&
						(ballY >= b1.GreenBrickY[i]-10)&&(ballY <= b1.GreenBrickY[i]+50))
						{
							if(b1.GreenBrickY[i]+50==ballY&&movement[0]==2)
							{
								movement[0]=1;
							}
							else if(b1.GreenBrickY[i]-10==ballY&&movement[0]==1)
								movement[0] = 2;
								
							else if(ballX==b1.GreenBrickX[i]-10&&movement[1]==2)
							{
								movement[1]=1;
							}
							else if(ballX==b1.GreenBrickX[i]+90&&movement[1]==1)
							{
								movement[1]=2;
							}	

							c1.GreenBrickCollision[i]++;

							greenfoodX1 = b1.GreenBrickX[i];
							greenfoodY1 = b1.GreenBrickY[i];
							ballColours = "GREEN";

							greenFood1 = true;


							b1.GreenBrickX[i] = 900;
							b1.GreenBrickY[i] = 900;

							score+=10;


							break;
						}

						if((ballX >= b1.RedBrickX[i]-10)&&(ballX <= b1.RedBrickX[i]+90)&&
						(ballY >= b1.RedBrickY[i]-10)&&(ballY<= b1.RedBrickY[i]+50))
						{
							if(b1.RedBrickY[i]+50==ballY&&movement[0]==2)
							{
								movement[0]=1;
							}
							else if(b1.RedBrickY[i]-10==ballY&&movement[0]==1)
								movement[0] = 2;
								
							else if(ballX==b1.RedBrickX[i]-10&&movement[1]==2)
							{
								movement[1]=1;
							}
							else if(ballX==b1.RedBrickX[i]+90&&movement[1]==1)
							{
								movement[1]=2;
							}
							c1.RedBrickCollision[i] ++;

							if(c1.RedBrickCollision[i] == 3)
							{
								redfoodX1 = b1.RedBrickX[i];
								redfoodY1 = b1.RedBrickY[i];

								redFood1 = true;

								b1.RedBrickX[i] = 900;
								b1.RedBrickY[i] = 900;


								score+=10;

								c1.RedBrickCollision[i] = 0;

							}

								ballColours = "RED";

							Bricklevel1();

							break;
					}

					// if((((ballX) >= (b1.GreenBrickX[i]))&&(ballX <= (b1.GreenBrickX[i]+80))&&
					// 	(ballY>= (b1.GreenBrickY[i]))&&(ballY<=b1.GreenBrickY[i]+40)||

					// 	((ballX-10 >= b1.GreenBrickX[i])&&(ballX-10<=b1.GreenBrickX[i]+80)&&
					// 	(ballY>=b1.GreenBrickY[i])&& (ballY<=b1.GreenBrickY[i] +40))||
						
					// 	((ballX+10 >= b1.GreenBrickX[i])&&(ballX+10 <= b1.GreenBrickX[i]+80)&&
					// 	(ballY >= b1.GreenBrickY[i])&&(ballY <= b1.GreenBrickY[i]+40))||

					// 	(ballX-10 >= b1.GreenBrickX[i])&&(ballX-10 <= b1.GreenBrickX[i]+80)))
					// {

					// 	movement[0] = 2;

					// 	c1.GreenBrickCollision[i]++;

					// 	greenfoodX1 = b1.GreenBrickX[i];
					// 	greenfoodY1 = b1.GreenBrickY[i];
					// 	ballColours = "GREEN";

					// 	greenFood1 = true;


					// 	b1.GreenBrickX[i] = 900;
					// 	b1.GreenBrickY[i] = 900;

					// 	score+=10;


					// 	break;
					// }

					if((ballX >= b1.PinkBrickX[i]-10)&&(ballX <= b1.PinkBrickX[i]+90)&&
						(ballY >= b1.PinkBrickY[i]-10)&&(ballY <= b1.PinkBrickY[i]+50))
					{
						if(b1.PinkBrickY[i]+50==ballY&&movement[0]==2)
							{
								movement[0]=1;
							}
							else if(b1.PinkBrickY[i]-10==ballY&&movement[0]==1)
								movement[0] = 2;
								
							else if(ballX==b1.PinkBrickX[i]-10&&movement[1]==2)
							{
								movement[1]=1;
							}
							else if(ballX==b1.PinkBrickX[i]+90&&movement[1]==1)
							{
								movement[1]=2;
							}
						c1.PinkBrickCollision [i]++;

						if(c1.PinkBrickCollision[i] == 2)
						{
							pinkfoodX1 = b1.PinkBrickX[i];
							pinkfoodY1 = b1.PinkBrickY[i];

							pinkFood1 = true;

							b1.PinkBrickX[i] = 900;
							b1.PinkBrickY[i] = 900;

							score+=10;
							c1.PinkBrickCollision[i] = 0;


						}
							ballColours = "PINK";


						Bricklevel1();

						break;
					}

				}

				for(int i=0 ; i< 6 ; i++)
				{
					if((ballX >= b1.BlueBrickX[i]-10)&&(ballX <= b1.BlueBrickX[i]+90)&&
						(ballY >= b1.BlueBrickY[i]-10)&&(ballY<= b1.BlueBrickY[i]+50))
					{
						if(b1.BlueBrickY[i]+50==ballY&&movement[0]==2)
							{
								movement[0]=1;
							}
							else if(b1.BlueBrickY[i]-10==ballY&&movement[0]==1)
								movement[0] = 2;
								
							else if(ballX==b1.BlueBrickX[i]-10&&movement[1]==2)
							{
								movement[1]=1;
							}
							else if(ballX==b1.BlueBrickX[i]+90&&movement[1]==1)
							{
								movement[1]=2;
							}
						c1.BlueBrickCollision[i] ++;

						if(c1.BlueBrickCollision[i] == 3)
						{
							bluefoodX1 = b1.BlueBrickX[i];
							bluefoodY1 = b1.BlueBrickY[i];

							blueFood1 = true;

							b1.BlueBrickX[i] = 900;
							b1.BlueBrickY[i] = 900;

							score+=10;

							c1.BlueBrickCollision[i] = 0;
							// BlueFoodTime = true;


						}

							ballColours = "BLUE";

						Bricklevel1();
						break;
					}

				}

				for(int i=0 ; i<5 ; i++)
				{

					if((ballX >= b1.YellowBrickX[i]-10)&&(ballX <= b1.YellowBrickX[i]+90)&&
						(ballY >= b1.YellowBrickY[i]-10)&&(ballY<= b1.YellowBrickY[i]+50))
					{

						if(b1.YellowBrickY[i]+50==ballY&&movement[0]==2)
							{
								movement[0]=1;
							}
							else if(b1.YellowBrickY[i]-10==ballY&&movement[0]==1)
								movement[0] = 2;
								
							else if(ballX==b1.YellowBrickX[i]-10&&movement[1]==2)
							{
								movement[1]=1;
							}
							else if(ballX==b1.YellowBrickX[i]+90&&movement[1]==1)
							{
								movement[1]=2;
							}
						c1.YellowBrickCollision[i] ++;
							ballColours = "YELLOW";


						if(c1.YellowBrickCollision[i] == 2)
						{
							yellowfoodX1 = b1.YellowBrickX[i];
							yellowfoodY1 = b1.YellowBrickY[i];

							yellowFood1 = true;

							b1.YellowBrickX[i] = 900;
							b1.YellowBrickY[i] = 900;

							score+=10;

							c1.YellowBrickCollision[i] = 0;

						}


						Bricklevel1();


						break;
					}
				}

			if((ballX<=8)&&(ballY>=8)&&(ballY<=753))        //left border
			{
				movement[1] = 2;
			}

			if((ballX >= 840) && (ballY>=8) && (ballY <= 753))        // right border
			{
				movement[1] = 1;
			}

			//TOP BORDER
			if((ballX >=8) && (ballX<= 843) &&( ballY >= 757))
			{
				movement[0] = 2;
			}

			glutPostRedisplay();
		}

		static void Drawball2()
		{
			if(ball2Colours == "IVORY")
			{
				DrawCircle(ball2X,ball2Y,10,colors[IVORY]);
			}
			else if(ball2Colours == "RED")
			{
				DrawCircle(ball2X,ball2Y,10,colors[RED]);
			}
			else if(ball2Colours == "GREEN")
			{
				DrawCircle(ball2X,ball2Y,10,colors[GREEN]);

			}
			else if(ball2Colours == "PINK")
			{
				DrawCircle(ball2X,ball2Y,10,colors[PINK]);

			}
			else if(ball2Colours == "YELLOW")
			{
				DrawCircle(ball2X,ball2Y,10,colors[YELLOW]);

			}
			else if(ball2Colours == "BLUE")
			{
				DrawCircle(ball2X,ball2Y,10,colors[BLUE]);

			}

			FoodHitPaddle();
			greenFoodHitPaddle();
			pinkFoodHitPaddle();

			if((((ball2X >= paddleX)&&(ball2X<= paddleX+paddleWidth))
				||((ball2X-10>=paddleX-10)&&(ball2X-10<=paddleX+paddleWidth))
				||((ball2X+10>=paddleX-10)&&(ball2X+10<=paddleX+paddleWidth)))&&(ball2Y-30 == 40))
			{

				ball2Movement[0] = 1;
				PaddleColor = ball2Colours;

				Ball2Movement();
			}
			
				for(int i=0 ; i<7 ; i++)
				{
					if((ball2X >= b1.GreenBrickX[i]-10)&&(ball2X <= b1.GreenBrickX[i]+90)&&
						(ball2Y >= b1.GreenBrickY[i]-10)&&(ball2Y <= b1.GreenBrickY[i]+50))
						{
							if(b1.GreenBrickY[i]+50==ball2Y&&ball2Movement[0]==2)
							{
								ball2Movement[0]=1;
							}
							else if(b1.GreenBrickY[i]-10==ball2Y&&ball2Movement[0]==1)
								ball2Movement[0] = 2;
								
							else if(ball2X==b1.GreenBrickX[i]-10&&ball2Movement[1]==2)
							{
								ball2Movement[1]=1;
							}
							else if(ball2X==b1.GreenBrickX[i]+90&&ball2Movement[1]==1)
							{
								ball2Movement[1]=2;
							}	

							c1.GreenBrickCollision[i]++;

							greenfoodX1 = b1.GreenBrickX[i];
							greenfoodY1 = b1.GreenBrickY[i];
							ballColours = "GREEN";

							greenFood1 = true;


							b1.GreenBrickX[i] = 900;
							b1.GreenBrickY[i] = 900;

							score+=10;


							break;
						}

						if((ball2X >= b1.RedBrickX[i]-10)&&(ball2X <= b1.RedBrickX[i]+90)&&
						(ball2Y >= b1.RedBrickY[i]-10)&&(ball2Y<= b1.RedBrickY[i]+50))
						{
							if(b1.RedBrickY[i]+50==ball2Y&&ball2Movement[0]==2)
							{
								ball2Movement[0]=1;
							}
							else if(b1.RedBrickY[i]-10==ball2Y&&ball2Movement[0]==1)
								ball2Movement[0] = 2;
								
							else if(ball2X==b1.RedBrickX[i]-10&&ball2Movement[1]==2)
							{
								ball2Movement[1]=1;
							}
							else if(ball2X==b1.RedBrickX[i]+90&&ball2Movement[1]==1)
							{
								ball2Movement[1]=2;
							}
							c1.RedBrickCollision[i] ++;

							if(c1.RedBrickCollision[i] == 3)
							{
								redfoodX1 = b1.RedBrickX[i];
								redfoodY1 = b1.RedBrickY[i];

								redFood1 = true;

								b1.RedBrickX[i] = 900;
								b1.RedBrickY[i] = 900;


								score+=10;

								c1.RedBrickCollision[i] = 0;

							}

								ballColours = "RED";

							// Bricklevel1();

							break;
					}


					if((ball2X >= b1.PinkBrickX[i]-10)&&(ball2X <= b1.PinkBrickX[i]+90)&&
						(ball2Y >= b1.PinkBrickY[i]-10)&&(ball2Y <= b1.PinkBrickY[i]+50))
					{
						if(b1.PinkBrickY[i]+50==ball2Y&&ball2Movement[0]==2)
							{
								ball2Movement[0]=1;
							}
							else if(b1.PinkBrickY[i]-10==ball2Y&&ball2Movement[0]==1)
								{
									ball2Movement[0] = 2;
								}
							else if(ball2X==b1.PinkBrickX[i]-10&&ball2Movement[1]==2)
							{
								ball2Movement[1]=1;
							}
							else if(ball2X==b1.PinkBrickX[i]+90&&ball2Movement[1]==1)
							{
								ball2Movement[1]=2;
							}
						c1.PinkBrickCollision [i]++;

						if(c1.PinkBrickCollision[i] == 2)
						{
							pinkfoodX1 = b1.PinkBrickX[i];
							pinkfoodY1 = b1.PinkBrickY[i];

							pinkFood1 = true;

							b1.PinkBrickX[i] = 900;
							b1.PinkBrickY[i] = 900;

							score+=10;
							c1.PinkBrickCollision[i] = 0;


						}
							ballColours = "PINK";


						// Bricklevel1();

						break;
					}

				}

				for(int i=0 ; i< 6 ; i++)
				{
					if((ball2X >= b1.BlueBrickX[i]-10)&&(ball2X <= b1.BlueBrickX[i]+90)&&
						(ball2Y >= b1.BlueBrickY[i]-10)&&(ball2Y<= b1.BlueBrickY[i]+50))
					{
						if(b1.BlueBrickY[i]+50==ball2Y&&ball2Movement[0]==2)
							{
								ball2Movement[0]=1;
							}
							else if(b1.BlueBrickY[i]-10==ball2Y&&ball2Movement[0]==1)
								ball2Movement[0] = 2;
								
							else if(ball2X==b1.BlueBrickX[i]-10&&ball2Movement[1]==2)
							{
								ball2Movement[1]=1;
							}
							else if(ball2X==b1.BlueBrickX[i]+90&&ball2Movement[1]==1)
							{
								ball2Movement[1]=2;
							}
						c1.BlueBrickCollision[i] ++;

						if(c1.BlueBrickCollision[i] == 3)
						{
							bluefoodX1 = b1.BlueBrickX[i];
							bluefoodY1 = b1.BlueBrickY[i];

							blueFood1 = true;

							b1.BlueBrickX[i] = 900;
							b1.BlueBrickY[i] = 900;

							score+=10;

							c1.BlueBrickCollision[i] = 0;
							// BlueFoodTime = true;


						}

							ballColours = "BLUE";

						// Bricklevel1();
						break;
					}

				}

				for(int i=0 ; i<5 ; i++)
				{

					if((ball2X >= b1.YellowBrickX[i]-10)&&(ball2X <= b1.YellowBrickX[i]+90)&&
						(ball2Y >= b1.YellowBrickY[i]-10)&&(ball2Y<= b1.YellowBrickY[i]+50))
					{

						if(b1.YellowBrickY[i]+50==ball2Y&&ball2Movement[0]==2)
							{
								ball2Movement[0]=1;
							}
							else if(b1.YellowBrickY[i]-10==ball2Y&&ball2Movement[0]==1)
								ball2Movement[0] = 2;
								
							else if(ball2X==b1.YellowBrickX[i]-10&&ball2Movement[1]==2)
							{
								ball2Movement[1]=1;
							}
							else if(ball2X==b1.YellowBrickX[i]+90&&ball2Movement[1]==1)
							{
								ball2Movement[1]=2;
							}
						c1.YellowBrickCollision[i] ++;
							ballColours = "YELLOW";


						if(c1.YellowBrickCollision[i] == 2)
						{
							yellowfoodX1 = b1.YellowBrickX[i];
							yellowfoodY1 = b1.YellowBrickY[i];

							yellowFood1 = true;

							b1.YellowBrickX[i] = 900;
							b1.YellowBrickY[i] = 900;

							score+=10;

							c1.YellowBrickCollision[i] = 0;

						}


						Bricklevel1();


						break;
					}
				}

			if((ball2X<=8)&&(ball2Y>=8)&&(ball2Y<=753))        //left border
			{
				ball2Movement[1] = 2;
			}

			if((ball2X >= 840) && (ball2Y>=8) && (ball2Y <= 753))        // right border
			{
				ball2Movement[1] = 1;
			}

			//TOP BORDER
			if((ball2X >=8) && (ball2X<= 843) &&( ball2Y >= 757))
			{
				ball2Movement[0] = 2;
			}

			Ball2Movement();

			glutPostRedisplay();
		}

		static void Drawball3()
		{
			if(ball3Colours == "IVORY")
			{
				DrawCircle(ball3X,ball3Y,10,colors[IVORY]);
			}
			else if(ball3Colours == "RED")
			{
				DrawCircle(ball3X,ball3Y,10,colors[RED]);
			}
			else if(ball3Colours == "GREEN")
			{
				DrawCircle(ball3X,ball3Y,10,colors[GREEN]);

			}
			else if(ball3Colours == "PINK")
			{
				DrawCircle(ball3X,ball3Y,10,colors[PINK]);

			}
			else if(ball3Colours == "YELLOW")
			{
				DrawCircle(ball3X,ball3Y,10,colors[YELLOW]);

			}
			else if(ball3Colours == "BLUE")
			{
				DrawCircle(ball3X,ball3Y,10,colors[BLUE]);

			}
			
			FoodHitPaddle();
			greenFoodHitPaddle();
			pinkFoodHitPaddle();

			if((((ball3X >= paddleX)&&(ball3X<= paddleX+paddleWidth))
				||((ball3X-10>=paddleX-10)&&(ball3X-10<=paddleX+paddleWidth))
				||((ball3X+10>=paddleX-10)&&(ball3X+10<=paddleX+paddleWidth)))&&(ball3Y-30 == 40))
			{

				ball3Movement[0] = 1;
				PaddleColor = ball3Colours;

				Ball3Movement();
			}
			
				for(int i=0 ; i<7 ; i++)
				{
					if((ball3X >= b1.GreenBrickX[i]-10)&&(ball3X <= b1.GreenBrickX[i]+90)&&
						(ball3Y >= b1.GreenBrickY[i]-10)&&(ball3Y <= b1.GreenBrickY[i]+50))
						{
							if(b1.GreenBrickY[i]+50==ball3Y&&ball3Movement[0]==2)
							{
								ball3Movement[0]=1;
							}
							else if(b1.GreenBrickY[i]-10==ball3Y&&ball3Movement[0]==1)
								ball3Movement[0] = 2;
								
							else if(ball3X==b1.GreenBrickX[i]-10&&ball3Movement[1]==2)
							{
								ball3Movement[1]=1;
							}
							else if(ball3X==b1.GreenBrickX[i]+90&&ball3Movement[1]==1)
							{
								ball3Movement[1]=2;
							}	

							c1.GreenBrickCollision[i]++;

							greenfoodX1 = b1.GreenBrickX[i];
							greenfoodY1 = b1.GreenBrickY[i];
							ballColours = "GREEN";

							greenFood1 = true;


							b1.GreenBrickX[i] = 900;
							b1.GreenBrickY[i] = 900;

							score+=10;


							break;
						}

						if((ball3X >= b1.RedBrickX[i]-10)&&(ball3X <= b1.RedBrickX[i]+90)&&
						(ball3Y >= b1.RedBrickY[i]-10)&&(ball3Y<= b1.RedBrickY[i]+50))
						{
							if(b1.RedBrickY[i]+50==ball3Y&&ball3Movement[0]==2)
							{
								ball3Movement[0]=1;
							}
							else if(b1.RedBrickY[i]-10==ball3Y&&ball3Movement[0]==1)
								ball3Movement[0] = 2;
								
							else if(ball3X==b1.RedBrickX[i]-10&&ball3Movement[1]==2)
							{
								ball3Movement[1]=1;
							}
							else if(ball3X==b1.RedBrickX[i]+90&&ball3Movement[1]==1)
							{
								ball3Movement[1]=2;
							}
							c1.RedBrickCollision[i] ++;

							if(c1.RedBrickCollision[i] == 3)
							{
								redfoodX1 = b1.RedBrickX[i];
								redfoodY1 = b1.RedBrickY[i];

								redFood1 = true;

								b1.RedBrickX[i] = 900;
								b1.RedBrickY[i] = 900;


								score+=10;

								c1.RedBrickCollision[i] = 0;

							}

								ballColours = "RED";

							// Bricklevel1();

							break;
					}


					if((ball3X >= b1.PinkBrickX[i]-10)&&(ball3X <= b1.PinkBrickX[i]+90)&&
						(ball3Y >= b1.PinkBrickY[i]-10)&&(ball3Y <= b1.PinkBrickY[i]+50))
					{
						if(b1.PinkBrickY[i]+50==ball3Y&&ball3Movement[0]==2)
							{
								ball3Movement[0]=1;
							}
							else if(b1.PinkBrickY[i]-10==ball3Y&&ball3Movement[0]==1)
								ball3Movement[0] = 2;
								
							else if(ball3X==b1.PinkBrickX[i]-10&&ball3Movement[1]==2)
							{
								ball3Movement[1]=1;
							}
							else if(ball3X==b1.PinkBrickX[i]+90&&ball3Movement[1]==1)
							{
								ball3Movement[1]=2;
							}
						c1.PinkBrickCollision [i]++;

						if(c1.PinkBrickCollision[i] == 2)
						{
							pinkfoodX1 = b1.PinkBrickX[i];
							pinkfoodY1 = b1.PinkBrickY[i];

							pinkFood1 = true;

							b1.PinkBrickX[i] = 900;
							b1.PinkBrickY[i] = 900;

							score+=10;
							c1.PinkBrickCollision[i] = 0;


						}
							ballColours = "PINK";


						// Bricklevel1();

						break;
					}

				}

				for(int i=0 ; i< 6 ; i++)
				{
					if((ball3X >= b1.BlueBrickX[i]-10)&&(ball3X <= b1.BlueBrickX[i]+90)&&
						(ball3Y >= b1.BlueBrickY[i]-10)&&(ball3Y<= b1.BlueBrickY[i]+50))
					{
						if(b1.BlueBrickY[i]+50==ball3Y&&ball3Movement[0]==2)
							{
								ball3Movement[0]=1;
							}
							else if(b1.BlueBrickY[i]-10==ball3Y&&ball3Movement[0]==1)
								ball3Movement[0] = 2;
								
							else if(ball3X==b1.BlueBrickX[i]-10&&ball3Movement[1]==2)
							{
								ball3Movement[1]=1;
							}
							else if(ball3X==b1.BlueBrickX[i]+90&&ball3Movement[1]==1)
							{
								ball3Movement[1]=2;
							}
						c1.BlueBrickCollision[i] ++;

						if(c1.BlueBrickCollision[i] == 3)
						{
							bluefoodX1 = b1.BlueBrickX[i];
							bluefoodY1 = b1.BlueBrickY[i];

							blueFood1 = true;

							b1.BlueBrickX[i] = 900;
							b1.BlueBrickY[i] = 900;

							score+=10;

							c1.BlueBrickCollision[i] = 0;
							// BlueFoodTime = true;


						}

							ballColours = "BLUE";

						// Bricklevel1();
						break;
					}

				}

				for(int i=0 ; i<5 ; i++)
				{

					if((ball3X >= b1.YellowBrickX[i]-10)&&(ball3X <= b1.YellowBrickX[i]+90)&&
						(ball3Y >= b1.YellowBrickY[i]-10)&&(ball3Y<= b1.YellowBrickY[i]+50))
					{

						if(b1.YellowBrickY[i]+50==ball3Y&&ball3Movement[0]==2)
							{
								ball3Movement[0]=1;
							}
							else if(b1.YellowBrickY[i]-10==ball3Y&&ball3Movement[0]==1)
								ball3Movement[0] = 2;
								
							else if(ball3X==b1.YellowBrickX[i]-10&&ball3Movement[1]==2)
							{
								ball3Movement[1]=1;
							}
							else if(ball3X==b1.YellowBrickX[i]+90&&ball3Movement[1]==1)
							{
								ball3Movement[1]=2;
							}
						c1.YellowBrickCollision[i] ++;
							ballColours = "YELLOW";


						if(c1.YellowBrickCollision[i] == 2)
						{
							yellowfoodX1 = b1.YellowBrickX[i];
							yellowfoodY1 = b1.YellowBrickY[i];

							yellowFood1 = true;

							b1.YellowBrickX[i] = 900;
							b1.YellowBrickY[i] = 900;

							score+=10;

							c1.YellowBrickCollision[i] = 0;

						}


						Bricklevel1();


						break;
					}
				}


			if((ball3X<=8)&&(ball3Y>=8)&&(ball3Y<=753))        //left border
			{
				ball3Movement[1] = 2;
			}

			if((ball3X >= 840) && (ball3Y>=8) && (ball3Y <= 753))        // right border
			{
				ball3Movement[1] = 1;
			}

			//TOP BORDER
			if((ball3X >=8) && (ball3X<= 843) &&( ball3Y >= 757))
			{
				ball3Movement[0] = 2;
			}

			Ball3Movement();

			glutPostRedisplay();
		}

		static void ballMovement()
		{
			// <======================== CONTINUE STATEMENTS =====================>

			if((previousMovement[0] == movement[0])&&(previousMovement[1] == movement[1]))
			{
				if(movement[0] == 1)
				{
					ballY++;
				}
				else
				{
					ballY--;
				}

				if(movement[1] == 1)
				{
					ballX--;
				}
				else
				{
					ballX++;
				}
				if((((ballX >= paddleX)&&(ballX<= paddleX+paddleWidth))
				||((ballX-10>=paddleX-10)&&(ballX-10<=paddleX+paddleWidth))
				||((ballX+10>=paddleX-10)&&(ballX+10<=paddleX+paddleWidth)))&&(ballY-30 == 40))
				{

					movement[0] = 1;
					PaddleColor = ballColours;

					ballMovement();
				}				
			}


			//<======================== LOGICAL STATEMENTS ===================>


			if((previousMovement[0] == 2)&&(previousMovement[1] == 2)&&
					(movement[0] == 1)&&(movement[1] == 2))
			{
				ballX++;
				ballY++;
			}
			if((previousMovement[0] == 1)&&(previousMovement[1] == 2)&&
				(movement[0] == 2) &&(movement[1] == 2))
			{
				ballY--;
				ballX++;
			}

			if((previousMovement[0] == 1)&&(previousMovement[1] == 2)&&
				(movement[0] == 1) && (movement[1] == 1))
			{
				ballY++;
				ballX--;
			}
			// if((previousMovement[0] == 1)&&(previousMovement[1] == 1)&&
			// 	(movement[0] == 2)&&( movement[1] == 1))
			// {
			// 	ballX++;
			// 	ballY++;
			// }	

			previousMovement[0] = movement[0];
			previousMovement[1] = movement[1];

			glutPostRedisplay();
		}

		static void Ball2Movement()
		{
			if((ball2PreviousMovement[0] == ball2Movement[0])&&(ball2PreviousMovement[1] == ball2Movement[1]))
			{
				if(ball2Movement[0] == 1)
				{
					ball2Y++;
				}
				else
				{
					ball2Y--;
				}

				if(ball2Movement[1] == 1)
				{
					ball2X--;
				}
				else
				{
					ball2X++;
				}
			}

				if((((ball2X >= paddleX)&&(ball2X<= paddleX+paddleWidth))
				||((ball2X-10>=paddleX-10)&&(ball2X-10<=paddleX+paddleWidth))
				||((ball2X+10>=paddleX-10)&&(ball2X+10<=paddleX+paddleWidth)))&&(ball2Y-30 == 200))
				{

					movement[0] = 1;
					PaddleColor = ballColours;

					ballMovement();
				}


			//<======================== LOGICAL STATEMENTS ===================>


			if((ball2PreviousMovement[0] == 2)&&(ball2PreviousMovement[1] == 2)&&
					(ball2Movement[0] == 1)&&(ball2Movement[1] == 2))
			{
				ball2X++;
				ball2Y++;
			}
			if((ball2PreviousMovement[0] == 1)&&(ball2PreviousMovement[1] == 2)&&
				(ball2Movement[0] == 2) &&(ball2Movement[1] == 2))
			{
				ball2Y--;
				ball2X++;
			}

			if((ball2PreviousMovement[0] == 1)&&(ball2PreviousMovement[1] == 2)&&
				(ball2Movement[0] == 1) && (ball2Movement[1] == 1))
			{
				ball2Y++;
				ball2X--;
			}
			// if((previousMovement[0] == 1)&&(previousMovement[1] == 1)&&
			// 	(movement[0] == 2)&&( movement[1] == 1))
			// {
			// 	ballX++;
			// 	ballY++;
			// }	

			ball2PreviousMovement[0] = ball2Movement[0];
			ball2PreviousMovement[1] = ball2Movement[1];

			glutPostRedisplay();
		}

		static void Ball3Movement()
		{
			if((ball3PreviousMovement[0] == ball3Movement[0])&&(ball3PreviousMovement[1] == ball3Movement[1]))
			{
				if(ball3Movement[0] == 1)
				{
					ball3Y++;
				}
				else
				{
					ball3Y--;
				}

				if(ball3Movement[1] == 1)
				{
					ball3X--;
				}
				else
				{
					ball3X++;
				}
			}


				if((((ball3X >= paddleX)&&(ball3X<= paddleX+paddleWidth))
				||((ball3X-10>=paddleX-10)&&(ball3X-10<=paddleX+paddleWidth))
				||((ball3X+10>=paddleX-10)&&(ball3X+10<=paddleX+paddleWidth)))&&(ball3Y-30 == 200))
				{

					movement[0] = 1;
					PaddleColor = ballColours;

					ballMovement();
				}


			//<======================== LOGICAL STATEMENTS ===================>


			if((ball3PreviousMovement[0] == 2)&&(ball3PreviousMovement[1] == 2)&&
					(ball3Movement[0] == 1)&&(ball3Movement[1] == 2))
			{
				ball3X++;
				ball3Y++;
			}
			if((ball3PreviousMovement[0] == 1)&&(ball3PreviousMovement[1] == 2)&&
				(ball3Movement[0] == 2) &&(ball3Movement[1] == 2))
			{
				ball2Y--;
				ball2X++;
			}

			if((ball3PreviousMovement[0] == 1)&&(ball3PreviousMovement[1] == 2)&&
				(ball3Movement[0] == 1) && (ball3Movement[1] == 1))
			{
				ball3Y++;
				ball3X--;
			}
			// if((previousMovement[0] == 1)&&(previousMovement[1] == 1)&&
			// 	(movement[0] == 2)&&( movement[1] == 1))
			// {
			// 	ballX++;
			// 	ballY++;
			// }	

			ball3PreviousMovement[0] = ball3Movement[0];
			ball3PreviousMovement[1] = ball3Movement[1];

			glutPostRedisplay();
		}

		static void BreakBrick()
		{
				for(int i=0 ; i<7 ; i++)
				{
					if(((ballX) >= (b1.BlueBrickX[i]))&&(ballX <= (b1.BlueBrickX[i]+80))&&
						(ballY >= b1.BlueBrickY[i])&&(ballY>=450))
					{
						// movement[0] = 2;
						b1.BlueBrickX[i] = 900;
						b1.BlueBrickY[i] = 900;
						blueFood1 = true;
						score+=10;
						break;
					}

					if(((ballX) >= (b1.GreenBrickX[i]))&&(ballX <= (b1.GreenBrickX[i]+80))&&
						(ballY>= (b1.GreenBrickY[i]))&&(ballY>=450))
					{

						// movement[0] = 2;

						b1.GreenBrickX[i] = 900;
						b1.GreenBrickY[i] = 900;
						greenFood1 = true;
						score+=10;


						break;
					}

					if(((ballX) >= (b1.PinkBrickX[i]))&&(ballX <= (b1.PinkBrickX[i]+80))&&
						(ballY>= (b1.PinkBrickY[i]))&&(ballY>=450))
					{
						// movement[0] = 2;

						b1.PinkBrickX[i] = 900;
						b1.PinkBrickY[i] = 900;
						pinkFood1 = true;
						score+=10;

						break;
					}

				}

				for(int i=0 ; i<5 ; i++)
				{
					if(((ballX) >= (b1.RedBrickX[i]))&&(ballX <= (b1.RedBrickX[i]+80))&&
					(ballY>= (b1.RedBrickY[i]))&&(ballY>=450))
					{
						// movement[0] = 2;

						b1.RedBrickX[i] = 900;
						b1.RedBrickY[i] = 900;
						redFood1 = true;
						score+=10;

						break;
					}

					if(((ballX) >= (b1.YellowBrickX[i]))&&(ballX <= (b1.YellowBrickX[i]+80))&&
						(ballY>= (b1.YellowBrickY[i]))&&(ballY>=450))
					{

						// movement[0] = 2;

						b1.YellowBrickX[i] = 900;
						b1.YellowBrickY[i] = 900;
						yellowFood1 = true;
						score+=10;

						break;
					}
				}

				glutPostRedisplay();

		}

		static void SpecificTimer1(int m)
		{
			count++;
			glutTimerFunc(5000.0, SpecificTimer1, 0);
		}


		static void BallLevel2()
		{
			if(ballColours == "IVORY")
			{
				DrawCircle(ballX,ballY,10,colors[IVORY]);
			}
			else if(ballColours == "RED")
			{
				DrawCircle(ballX,ballY,10,colors[RED]);
			}
			else if(ballColours == "GREEN")
			{
				DrawCircle(ballX,ballY,10,colors[GREEN]);

			}
			else if(ballColours == "PINK")
			{
				DrawCircle(ballX,ballY,10,colors[PINK]);

			}
			else if(ballColours == "YELLOW")
			{
				DrawCircle(ballX,ballY,10,colors[YELLOW]);

			}
			else if(ballColours == "BLUE")
			{
				DrawCircle(ballX,ballY,10,colors[BLUE]);

			}

			if(BlueFoodTime == true)
			{
				if(ballSlow%5 == 0)
				{
					ballMovement();
					// ballMovement();
					count++;
				}

				if(count == 50)
				{
					BlueFoodTime = false;
					count = 0;
				}
		
			if((((ballX >= paddleX)&&(ballX<= paddleX+paddleWidth))
				||((ballX-10>=paddleX-10)&&(ballX-10<=paddleX+paddleWidth))
				||((ballX+10>=paddleX-10)&&(ballX+10<=paddleX+paddleWidth)))&&(ballY-30 == 40))
			{

				movement[0] = 1;
				PaddleColor = ballColours;

				ballMovement();
			}	

			}
			else
			{
				ballMovement();
			}


			if(RedFoodTime == true)
			{
					ballMovement();
				if(ballFast%5 == 0)
				{
					count++;
				}

				if(count == 50)
				{
					RedFoodTime = false;
					count = 0;
				}
			}
			
			if(YellowFoodTime == true)
			{
				Drawball2();
				Drawball3();
				if(ballFast%5 == 0)
				{
					// ballMovement();
					count++;
				}

				if(count == 100)
				{
					YellowFoodTime = false;
					count = 0;
				}

			}

			FoodHitPaddle2();
			greenFoodHitPaddle();
			pinkFoodHitPaddle();

			if((((ballX >= paddleX)&&(ballX<= paddleX+paddleWidth))
				||((ballX-10>=paddleX-10)&&(ballX-10<=paddleX+paddleWidth))
				||((ballX+10>=paddleX-10)&&(ballX+10<=paddleX+paddleWidth)))&&(ballY-30 == 40))
			{

				movement[0] = 1;
				PaddleColor = ballColours;

				ballMovement();
			}
			
				for(int i=0 ; i<20 ; i++)
				{
					if((ballX >= b2.GreenBrickX[i]-10)&&(ballX <= b2.GreenBrickX[i]+80)&&
						(ballY >= b2.GreenBrickY[i]-10)&&(ballY <= b2.GreenBrickY[i]+25))
						{
							// cout<<"yes"<<endl;
							if(b2.GreenBrickY[i]+25==ballY&&movement[0]==2)
							{
								movement[0]=1;
							}
							else if(b2.GreenBrickY[i]-10==ballY&&movement[0]==1)
								movement[0] = 2;
							
							else if(ballX==b2.GreenBrickX[i]-10&&movement[1]==2)
							{
								movement[1]=1;
							}
							else if(ballX==b2.GreenBrickX[i]+80&&movement[1]==1)
							{
								movement[1]=2;
							}
							
							
							c2.GreenBrickCollision[i]++;

							greenfoodX1 = b2.GreenBrickX[i];
							greenfoodY1 = b2.GreenBrickY[i];
							ballColours = "GREEN";

							greenFood1 = true;


							b2.GreenBrickX[i] = 900;
							b2.GreenBrickY[i] = 900;

							score+=10;


							break;
						}

						if((ballX >= b2.RedBrickX[i]-10)&&(ballX <= b2.RedBrickX[i]+80)&&
						(ballY >= b2.RedBrickY[i]-10)&&(ballY<= b2.RedBrickY[i]+25))
						{
							if(b2.RedBrickY[i]+25==ballY&&movement[0]==2)
							{
								movement[0]=1;
							}
							else if(b2.RedBrickY[i]-10==ballY&&movement[0]==1)
								movement[0] = 2;
							
							else if(ballX==b2.RedBrickX[i]-10&&movement[1]==2)
							{
								movement[1]=1;
							}
							else if(ballX==b2.RedBrickX[i]+80&&movement[1]==1)
							{
								movement[1]=2;
							}
							
							c2.RedBrickCollision[i] ++;

							if(c2.RedBrickCollision[i] == 3)
							{
								redfoodX1 = b2.RedBrickX[i];
								redfoodY1 = b2.RedBrickY[i];

								redFood1 = true;

								b2.RedBrickX[i] = 900;
								b2.RedBrickY[i] = 900;


								score+=10;

								c2.RedBrickCollision[i] = 0;

							}

								ballColours = "RED";

							// Bricklevel1();

							break;
					}

					if((ballX >= b2.PinkBrickX[i]-10)&&(ballX <= b2.PinkBrickX[i]+80)&&
						(ballY >= b2.PinkBrickY[i]-10)&&(ballY <= b2.PinkBrickY[i]+25))
					{
						if(b2.PinkBrickY[i]+25==ballY&&movement[0]==2)
							{
								movement[0]=1;
							}
							else if(b2.PinkBrickY[i]-10==ballY&&movement[0]==1)
								movement[0] = 2;
						
						else if(ballX==b2.PinkBrickX[i]-10&&movement[1]==2)
						{
							movement[1]=1;
						}
						else if(ballX==b2.PinkBrickX[i]+80&&movement[1]==1)
						{
							movement[1]=2;
						}
						
						c2.PinkBrickCollision [i]++;

						if(c2.PinkBrickCollision[i] == 2)
						{
							pinkfoodX1 = b2.PinkBrickX[i];
							pinkfoodY1 = b2.PinkBrickY[i];

							pinkFood1 = true;

							b1.PinkBrickX[i] = 900;
							b1.PinkBrickY[i] = 900;

							score+=10;
							c2.PinkBrickCollision[i] = 0;


						}
							ballColours = "PINK";


						// Bricklevel1();

						break;
					}

					if((ballX >= b2.BlueBrickX[i]-10)&&(ballX <= b2.BlueBrickX[i]+80)&&
						(ballY >= b2.BlueBrickY[i]-10)&&(ballY<= b2.BlueBrickY[i]+25))
					{
						if(b2.BlueBrickY[i]+25==ballY&&movement[0]==2)
							{
								movement[0]=1;
							}
							else if(b2.BlueBrickY[i]-10==ballY&&movement[0]==1)
								movement[0] = 2;

						else if(ballX==b2.BlueBrickX[i]-10&&movement[1]==2)
						{
							movement[1]=1;
						}
						else if(ballX==b2.BlueBrickX[i]+80&&movement[1]==1)
						{
							movement[1]=2;
						}
						
						c2.BlueBrickCollision[i] ++;

						if(c2.BlueBrickCollision[i] == 3)
						{
							bluefoodX1 = b2.BlueBrickX[i];
							bluefoodY1 = b2.BlueBrickY[i];

							blueFood1 = true;

							b2.BlueBrickX[i] = 900;
							b2.BlueBrickY[i] = 900;

							score+=10;

							c2.BlueBrickCollision[i] = 0;
							// BlueFoodTime = true;


						}

							ballColours = "BLUE";

						// Bricklevel1();
						break;

					}

					if((ballX >= b2.YellowBrickX[i]-10)&&(ballX <= b2.YellowBrickX[i]+80)&&
						(ballY >= b2.YellowBrickY[i]-10)&&(ballY<= b2.YellowBrickY[i]+25))
					{

						if(b2.YellowBrickY[i]+25==ballY&&movement[0]==2)
							{
								movement[0]=1;
							}
							else if(b2.YellowBrickY[i]-10==ballY&&movement[0]==1)
								movement[0] = 2;
								
						else if(ballX==b2.YellowBrickX[i]-10&&movement[1]==2)
						{
							movement[1]=1;
						}
						else if(ballX==b2.YellowBrickX[i]+80&&movement[1]==1)
						{
							movement[1]=2;
						}
								

						c2.YellowBrickCollision[i] ++;
							ballColours = "YELLOW";


						if(c2.YellowBrickCollision[i] == 2)
						{
							yellowfoodX1 = b2.YellowBrickX[i];
							yellowfoodY1 = b2.YellowBrickY[i];

							yellowFood1 = true;

							b2.YellowBrickX[i] = 900;
							b2.YellowBrickY[i] = 900;

							score+=10;

							c2.YellowBrickCollision[i] = 0;

						}


						// Bricklevel1();


						break;
					}

				}

			if((ballX<=8)&&(ballY>=8)&&(ballY<=753))        //left border
			{
				movement[1] = 2;
			}

			if((ballX >= 840) && (ballY>=8) && (ballY <= 753))        // right border
			{
				movement[1] = 1;
			}

			//TOP BORDER
			if((ballX >=8) && (ballX<= 843) &&( ballY >= 757))
			{
				movement[0] = 2;
			}

			glutPostRedisplay();
		}
		

		static void BallLevel3()
		{
			if(ballColours == "IVORY")
			{
				DrawCircle(ballX,ballY,10,colors[IVORY]);
			}
			else if(ballColours == "RED")
			{
				DrawCircle(ballX,ballY,10,colors[RED]);
			}
			else if(ballColours == "GREEN")
			{
				DrawCircle(ballX,ballY,10,colors[GREEN]);

			}
			else if(ballColours == "PINK")
			{
				DrawCircle(ballX,ballY,10,colors[PINK]);

			}
			else if(ballColours == "YELLOW")
			{
				DrawCircle(ballX,ballY,10,colors[YELLOW]);

			}
			else if(ballColours == "BLUE")
			{
				DrawCircle(ballX,ballY,10,colors[BLUE]);

			}

			if(BlueFoodTime == true)
			{
				if(ballSlow%5 == 0)
				{
					ballMovement();
					// ballMovement();
					count++;
				}

				if(count == 50)
				{
					BlueFoodTime = false;
					count = 0;
				}

			}
			else
			{
				ballMovement();
			}


			if(RedFoodTime == true)
			{
					ballMovement();
				if(ballFast%5 == 0)
				{
					count++;
				}

				if(count == 50)
				{
					RedFoodTime = false;
					count = 0;
				}
			}
			
			if(YellowFoodTime == true)
			{
				Drawball2();
				Drawball3();
				if(ballFast%5 == 0)
				{
					// ballMovement();
					count++;
				}

				if(count == 50)
				{
					YellowFoodTime = false;
					count = 0;
				}

			}

			FoodHitPaddle();
			greenFoodHitPaddle();
			pinkFoodHitPaddle();

			if((((ballX >= paddleX)&&(ballX<= paddleX+paddleWidth))
				||((ballX-10>=paddleX-10)&&(ballX-10<=paddleX+paddleWidth))
				||((ballX+10>=paddleX-10)&&(ballX+10<=paddleX+paddleWidth)))&&(ballY-30 == 40))
			{

				movement[0] = 1;
				PaddleColor = ballColours;

				ballMovement();
			}
			
			if((((ballX >= paddleX2)&&(ballX<= paddleX2+paddleWidth2))
				||((ballX-10>=paddleX2-10)&&(ballX-10<=paddleX2+paddleWidth2))
				||((ballX+10>=paddleX2-10)&&(ballX+10<=paddleX2+paddleWidth2)))&&(ballY+30 == 750))
			{
				movement[0] = 2;
				PaddleColor2 = ballColours;

				ballMovement();
			}
			

			for(int i=0 ;i<12 ;i++)
			{
				for(int j=0 ;j<11 ; j++)
				{
					if(brick3colours[i][j] == "BLUE")
					{
						// DrawRectangle(Brick3X[i][j],Brick3Y[i][j],40,20,colors[BLUE]);
						if((ballX >= Brick3X[i][j]-10)&&(ballX <= Brick3X[i][j]+50)&&
						(ballY >= Brick3Y[i][j]-10)&&(ballY <= Brick3Y[i][j]+30))
						{
								if(Brick3Y[i][j]+30==ballY&&movement[0]==2)
								{
									movement[0]=1;
								}
								else if(Brick3Y[i][j]-10==ballY&&movement[0]==1)
									movement[0] = 2;
									
								else if(ballX==Brick3X[i][j]-10&&movement[1]==2)
								{
									movement[1]=1;
								}
								else if(ballX==Brick3X[i][j]+50&&movement[1]==1)
								{
									movement[1]=2;
								}
							c1.BlueBrickCollision[i] ++;

							if(c1.BlueBrickCollision[i] == 3)
							{
								bluefoodX1 = Brick3X[i][j];
								bluefoodY1 = Brick3Y[i][j];

								blueFood1 = true;

								Brick3X[i][j] = 900;
								Brick3Y[i][j] = 900;

								score+=10;

								c1.BlueBrickCollision[i] = 0;
								// BlueFoodTime = true;


							}

								ballColours = "BLUE";

							// Bricklevel1();
							break;
						}


					}
					else if(brick3colours[i][j] == "GREEN")
					{
						// DrawRectangle(Brick3X[i][j],Brick3Y[i][j],40,20,colors[GREEN]);
						if((ballX >= Brick3X[i][j]-10)&&(ballX <= Brick3X[i][j]+50)&&
						(ballY >= Brick3Y[i][j]-10)&&(ballY <= Brick3Y[i][j]+30))
						{
							if((Brick3Y[i][j]+30 == ballY)&&(movement[0]==2))
							{
								movement[0]=1;
							}
							else if(Brick3Y[i][j]+30==ballY&&movement[0]==1)
							{
								movement[0] = 2;

							}
								
							else if(ballX==Brick3X[i][j]-10&&movement[1]==2)
							{
								movement[1]=1;
							}
							else if(ballX==Brick3X[i][j]+50&&movement[1]==1)
							{
								movement[1]=2;
							}	

							c1.GreenBrickCollision[i]++;

							greenfoodX1 = Brick3X[i][j];
							greenfoodY1 = Brick3Y[i][j];
							ballColours = "GREEN";

							greenFood1 = true;


							Brick3X[i][j] = 900;
							Brick3Y[i][j] = 900;

							score+=10;


							break;
						}

					}
					else if(brick3colours[i][j] == "PINK")
					{
						// DrawRectangle(Brick3X[i][j],Brick3Y[i][j],40,20,colors[PINK]);

						if((ballX >= Brick3X[i][j]-10)&&(ballX <= Brick3X[i][j]+50)&&
						(ballY >= Brick3Y[i][j]-10)&&(ballY <= Brick3Y[i][j]+30))
						{
							if(Brick3Y[i][j]+30==ballY&&movement[0]==2)
								{
									movement[0]=1;
								}
								else if(Brick3Y[i][j]-10==ballY&&movement[0]==1)
									movement[0] = 2;
									
								else if(ballX==Brick3X[i][j]-10&&movement[1]==2)
								{
									movement[1]=1;
								}
								else if(ballX==Brick3X[i][j]+50&&movement[1]==1)
								{
									movement[1]=2;
								}
							c1.PinkBrickCollision [i]++;

							if(c1.PinkBrickCollision[i] == 2)
							{
								pinkfoodX1 = Brick3X[i][j];
								pinkfoodY1 = Brick3Y[i][j];

								pinkFood1 = true;

								Brick3X[i][j] = 900;
								Brick3Y[i][j] = 900;

								score+=10;
								c1.PinkBrickCollision[i] = 0;


							}
								ballColours = "PINK";


							// Bricklevel1();

							break;
						}


						

					}
					else if(brick3colours[i][j] == "RED")
					{
						// DrawRectangle(Brick3X[i][j],Brick3Y[i][j],40,20,colors[RED]);
						if((ballX >= Brick3X[i][j]-10)&&(ballX <= Brick3X[i][j]+50)&&
						(ballY >= Brick3Y[i][j]-10)&&(ballY <= Brick3Y[i][j]+30))
						{
							if(Brick3Y[i][j]+30==ballY&&movement[0]==2)
							{
								movement[0]=1;
							}
							else if(Brick3Y[i][j]-10==ballY&&movement[0]==1)
								movement[0] = 2;
								
							else if(ballX==Brick3X[i][j]-10&&movement[1]==2)
							{
								movement[1]=1;
							}
							else if(ballX==Brick3X[i][j]+50&&movement[1]==1)
							{
								movement[1]=2;
							}
							c1.RedBrickCollision[i] ++;

							if(c1.RedBrickCollision[i] == 3)
							{
								redfoodX1 = Brick3X[i][j];
								redfoodY1 = Brick3Y[i][j];

								redFood1 = true;

								Brick3X[i][j] = 900;
								Brick3Y[i][j] = 900;


								score+=10;

								c1.RedBrickCollision[i] = 0;

							}

								ballColours = "RED";

							// Bricklevel1();

							break;
					}

					}
					else if(brick3colours[i][j] == "YELLOW")
					{
						// DrawRectangle(Brick3X[i][j],Brick3Y[i][j],40,20,colors[YELLOW]);
						if((ballX >= Brick3X[i][j]-10)&&(ballX <= Brick3X[i][j]+50)&&
						(ballY >= Brick3Y[i][j]-10)&&(ballY <= Brick3Y[i][j]+30))
						{

							if(Brick3Y[i][j]+30==ballY&&movement[0]==2)
								{
									movement[0]=1;
								}
								else if(Brick3Y[i][j]-10==ballY&&movement[0]==1)
									movement[0] = 2;
									
								else if(ballX==Brick3X[i][j]-10&&movement[1]==2)
								{
									movement[1]=1;
								}
								else if(ballX==Brick3X[i][j]+50&&movement[1]==1)
								{
									movement[1]=2;
								}
							c1.YellowBrickCollision[i] ++;
								ballColours = "YELLOW";


							if(c1.YellowBrickCollision[i] == 2)
							{
								yellowfoodX1 = Brick3X[i][j];
								yellowfoodY1 = Brick3Y[i][j];

								yellowFood1 = true;

								Brick3X[i][j] = 900;
								Brick3Y[i][j] = 900;

								score+=10;

								c1.YellowBrickCollision[i] = 0;

							}


							// Bricklevel1();


							break;
						}
					}
				}
			}

			if((ballX<=8)&&(ballY>=8)&&(ballY<=753))        //left border
			{
				movement[1] = 2;
			}

			if((ballX >= 840) && (ballY>=8) && (ballY <= 753))        // right border
			{
				movement[1] = 1;
			}

			glutPostRedisplay();
		}

};

class GameOver
{
	protected:

		static int width;
		static int height;
		static int choice;
		static int gameOverScore;

	public:

	GameOver()
	{
		width = 1020;
		height = 840;
	}

	static void GameOverMain()
	{
			glutInitWindowPosition(50, 50); // set the initial position of our window
			glutInitWindowSize(width, height); // set the size of our window
			glutCreateWindow("GAME OVER"); // set the title of our game window
			GameOverCanvas(width, height); // set the number of pixels...

			// Register your functions to the library,
			// you are telling the library names of function to call for different tasks.
			glutDisplayFunc(GameOverDisplay); // tell library which function to call for drawing Canvas.

			// glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
			// glutSpecialFunc(GameOverNonPrintable); // tell library which function to call for non-printable ASCII characters
			glutKeyboardFunc(GameOverPrintable); // tell library which function to call for printable ASCII characters
			// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
			glutTimerFunc(1000.0, GameOverTimer, 0);

	}

		static void GameOverPrintable(unsigned char key, int x, int y)
		{

			switch(key)
			{
				case 49:

					// Game1Main();

					break;
				
				case 50:

					//Game2Main();

					break;

				case 51:

					//Game3Main();

					break;

				case 52:

					//HighScores();
					break;

				case 5:

					break;

				case 27:

					exit(1);

					break;	
			}

			// if (key == 27/* Escape key ASCII*/) {
			// 	exit(1); // exit the program when escape key is pressed.
			// }

			// if (key == '1' ) //Key for placing the bomb
			// {

				

			// }
			glutPostRedisplay();
		}

		static void GameOverCanvas(int width , int height)
		{
			glMatrixMode (GL_PROJECTION);
			glLoadIdentity();
			glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
			glMatrixMode (GL_MODELVIEW);
			glLoadIdentity();
		}

		static void GameOverDisplay()
		{
			GameOver m;
			glClearColor(0.5, 0,0, 0 ); // Red==Green==Blue==1 --> White Colour
			glClear (GL_COLOR_BUFFER_BIT); //Update the colors
			
			m.GameOverbackground();

			m.GameOverheading();



			m.GameOverSubHeadings();

			m.MenuFooter();


			glutSwapBuffers(); // do not modify this line..
		}

		static void GameOverTimer(int m)
		{

			// implement your functionality here

			// once again we tell the library to call our Timer function after next 1000/FPS
			glutTimerFunc(1000.0, GameOverTimer, 0);
		}

		void GameOverbackground()
		{
			for(int i=0  ; i<1020 ;i+=80)
			{
				for(int j=0 ; j<840 ; j+=80)
				{
					DrawLine(i,j,i,j+40,10,colors[SANDY_BROWN]);	
				}
			}

			for(int i=0  ; i<1020 ;i+=40)
			{
				
				DrawLine(0,i,1020,i,10,colors[SANDY_BROWN]);	
				
			}

			for(int i=40  ; i<1020 ;i+=80)
			{
				for(int j=40 ; j<840 ; j+=80)
				{
					DrawLine(i,j,i,j+40,10,colors[SANDY_BROWN]);	
				}
			}
		}

		void GameOverheading()
		{
			for(int i=0 ; i<63 ; i+=9)
			{
				DrawLine(340,770-i,660,770-i,10,colors[BEIGE]);

			}

			for(int i=0 ; i<45 ; i+=9)
			{
				DrawLine(350,760-i,650,760-i,10,colors[SANDY_BROWN]);

			}

			DrawString(390,730,"BRICK BREAKER GAME",colors[BROWN]);

			DrawRectangle(280,570,470,60,colors[BEIGE]);
			DrawRectangle(290,580,450,40,colors[SANDY_BROWN]);

			DrawString(350,590, ":( ===== GAME OVER !!! ===== :(" , colors[BROWN]);

		}

		void GameOverSubHeadings()
		{
			DrawRectangle(350,430,300,60,colors[BEIGE]);
			DrawRectangle(360,440,280,40,colors[SANDY_BROWN]);
			
			DrawString(440,450,"SCORE: ",colors[BROWN]);
			DrawString(530,450,to_string(gameOverScore),colors[BROWN]);
			
			
			fstream File;                       
			File.open("detail.txt", ios::app);                
			if (!File) 
			{                            
				cout<<" Error while creating the file ";          
			}
			else 
			{
		//		cout<<"File created and High Score written to file";    
			    	File<< gameOverScore <<" \n ";
			        	File.close();                   
			}
		}

		void GameOverHeadings2()
		{
			for(int i=0 ; i<63 ; i+=9)
			{
				DrawLine(340,770-i,660,770-i,10,colors[BEIGE]);

			}

			for(int i=0 ; i<45 ; i+=9)
			{
				DrawLine(350,760-i,650,760-i,10,colors[SANDY_BROWN]);

			}

			DrawString(390,730,"BRICK BREAKER GAME",colors[BROWN]);

			DrawRectangle(280,570,470,60,colors[BEIGE]);
			DrawRectangle(290,580,450,40,colors[SANDY_BROWN]);

			DrawString(350,590, ":) ===== CONGRATULATIONS !!! ===== :)" , colors[BROWN]);

			DrawRectangle(350,300,300,60,colors[BEIGE]);
			DrawRectangle(360,310,280,40,colors[SANDY_BROWN]);
			
			DrawString(440,310,"YOU WON!!!!! :) ",colors[BROWN]);
			// DrawString(530,320,to_string(gameOverScore),colors[BROWN]);
		
		}

		void MenuFooter()
		{
			for(int i=0 ; i<45 ; i+=9)
			{
				DrawLine(600,75-i+1,850,75-i+1,10,colors[SANDY_BROWN]);
			}

			DrawString(610,45,"Made by : Hamda Shahid",colors[BROWN]);
		}


	
};

class Game3 : public Brick , public Paddle , public Ball, public Food , public GameOver
{
	protected:

		static int width3;
		static int height3;

		static int speed3;
		static int lives3;


	public:

		Game3()
		{
			width3 = 850;
			height3 = 840;
		}

		static void Game3MouseMoved(int x , int y)
		{
			paddleX = x;
			paddleY = y;
			glutPostRedisplay();
		}

		static void Game3Printable(unsigned char key, int x, int y)
		{

			if (key == 27/* Escape key ASCII*/) {
				exit(1); // exit the program when escape key is pressed.
			}

			if((key == 'w')||(key == 'W'))
			{
				paddleX2 -=10;
				// cout<<"x : "<<x<<" y : "<<y<<endl;
				// x--;
			}

			if((key == 'r')||(key == 'R'))
			{
				// paddleY2 = y;
				paddleX2+=10;
			}

			//any key 'a','b' etc
			glutPostRedisplay();
		}

		static void Game3Canvas(int w , int h)
		{
			glMatrixMode (GL_PROJECTION);
			glLoadIdentity();
			glOrtho(0, w, 0, h, -1, 1); // set the screen size to given width and height.
			glMatrixMode (GL_MODELVIEW);
			glLoadIdentity();
		}

		static void Game3Display()
		{
			Game3 m;
			
			glClearColor(0.2, 0,0, 0 ); // Red==Green==Blue==1 --> White Colour
			glClear (GL_COLOR_BUFFER_BIT); //Update the colors
			// cout<<"yes"<<endl;
			m.Game3background();

			m.Game3heading();

			BrickLevel3();

			PaddleLevel3();

			BallLevel3();

			FoodLevel1();

			GameOver3();


			glutSwapBuffers(); // do not modify this line..
		}

		static void Game3Timer(int m)
		{
			ballSlow++;
			ballFast++;

			glutTimerFunc(1, Game3Timer, 0);
		}

		static void Game3Main()
		{
			// ballX++;
			// ballY--;
			// Menu m;
			storeBricks3();
			glutInitWindowPosition(50, 50); // set the initial position of our window
			glutInitWindowSize(width3, height3); // set the size of our window
			glutCreateWindow("Level 3"); // set the title of our game window
			Game3Canvas(width3, height3); // set the number of pixels...

			// Register your functions to the library,
			// you are telling the library names of function to call for different tasks.
			glutDisplayFunc(Game3Display); // tell library which function to call for drawing Canvas.

			// glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
			// glutSpecialFunc(Game3NonPrintable); // tell library which function to call for non-printable ASCII characters
			glutKeyboardFunc(Game3Printable); // tell library which function to call for printable ASCII characters
			// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
			glutTimerFunc(1000.0, Game3Timer, 0);

			// glutMouseFunc(MouseClicked);
			glutPassiveMotionFunc(Game3MouseMoved); // Mouse
			// glutMotionFunc(MousePressedAndMoved); // Mouse

		}

		void Game3background()
		{

			for(int i=8  ; i<1020 ;i+=80)
			{
				for(int j=0 ; j<740 ; j+=80)
				{
					DrawLine(i,j,i,j+40,2,colors[SANDY_BROWN]);	
				}
			}

			for(int i=0  ; i<730 ;i+=40)
			{
				
				DrawLine(8,i,840,i,2,colors[SANDY_BROWN]);	
				
			}

			for(int i=40  ; i<1020 ;i+=80)
			{
				for(int j=40 ; j<750 ; j+=80)
				{
					DrawLine(i,j,i,j+40,2,colors[SANDY_BROWN]);	
				}
			}
			

			DrawLine(8,757,843,757,10,colors[SILVER]); //top border
			DrawLine(8,5,843,5,10,colors[SILVER]);  //bottom border
			DrawLine(10,8,10,754,10,colors[SILVER]);   // left border
			DrawLine(840,8,840,753,10,colors[SILVER]);  // right border

		}

		void Game3heading()
		{
			for(int i=0 ; i<45 ; i+=9)
			{
				DrawLine(0,800-i,850,800-i,10,colors[SANDY_BROWN]);

			}

			DrawString(10,770,"SCORE: ",colors[BROWN]);
			DrawString(100,770,to_string(score),colors[BROWN]);

			DrawString(150,770, "LIVES: ",colors[BROWN]);
			DrawString(230,770,to_string(lives3),colors[BROWN]);

			DrawString(280,770,"HIGH SCORE: ",colors[BROWN]);
			DrawString(450,770,"820",colors[BROWN]);

			DrawString(520,770,"HAMDA SHAHID",colors[BROWN]);
			DrawString(730,770,"23I-0069",colors[BROWN]);


		}


		static void GameOver3()
		{
				// cout<<lives<<endl;

			if((ballY <= 40)||(ballY>=757))
			{
				lives3--;
			}
			if(((ballY <= 40)||(ballY>=757))&&(lives3 == 0))
			{
				ballX = 50;
				ballY = 400;
				gameOverScore = score;
				GameOverMain();
			}
			else if ((lives3 == 1)&&((ballY <= 40)||(ballY>=757)))
			{
				ballX = 50;
				ballY = 400;
			}

			
		}



};

class Game2 : public Brick , public Paddle , public Ball, public Food , public GameOver
{
	protected:

		static int width2;
		static int height2;

		static int speed2;
		static int lives2;


	public:

		Game2()
		{
			width2 = 850;
			height2 = 840;
		}

		static void Game2MouseMoved(int x , int y)
		{
			paddleX = x;
			paddleY = y;
			glutPostRedisplay();
		}

		static void Game2Printable(unsigned char key, int x, int y)
		{

			if (key == 27/* Escape key ASCII*/) {
				exit(1); // exit the program when escape key is pressed.
			}

			//any key 'a','b' etc
			glutPostRedisplay();
		}

		static void Game2Canvas(int w , int h)
		{
			glMatrixMode (GL_PROJECTION);
			glLoadIdentity();
			glOrtho(0, w, 0, h, -1, 1); // set the screen size to given width and height.
			glMatrixMode (GL_MODELVIEW);
			glLoadIdentity();
		}

		static void Game2Display()
		{
			Game2 m;
			
			glClearColor(0.2, 0,0, 0 ); // Red==Green==Blue==1 --> White Colour
			glClear (GL_COLOR_BUFFER_BIT); //Update the colors
			
			m.Game2background();

			m.Game2heading();

			Bricklevel2();

			PaddleLevel2();

			BallLevel2();

			FoodLevel1();

			GameOver2();


			glutSwapBuffers(); // do not modify this line..
		}

		static void Game2Timer(int m)
		{
			ballSlow++;
			ballFast++;

			glutTimerFunc(1, Game2Timer, 0);
		}

		static void Game2Main()
		{
			// ballX++;
			// ballY--;
			// Menu m;
			storeBricks2();
			glutInitWindowPosition(50, 50); // set the initial position of our window
			glutInitWindowSize(width2, height2); // set the size of our window
			glutCreateWindow("Level 2"); // set the title of our game window
			Game2Canvas(width2, height2); // set the number of pixels...

			// Register your functions to the library,
			// you are telling the library names of function to call for different tasks.
			glutDisplayFunc(Game2Display); // tell library which function to call for drawing Canvas.

			// glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
			// glutSpecialFunc(Game2NonPrintable); // tell library which function to call for non-printable ASCII characters
			glutKeyboardFunc(Game2Printable); // tell library which function to call for printable ASCII characters
			// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
			glutTimerFunc(1000.0, Game2Timer, 0);

			// glutMouseFunc(MouseClicked);
			glutPassiveMotionFunc(Game2MouseMoved); // Mouse
			// glutMotionFunc(MousePressedAndMoved); // Mouse

		}

		void Game2background()
		{

			for(int i=8  ; i<1020 ;i+=80)
			{
				for(int j=0 ; j<740 ; j+=80)
				{
					DrawLine(i,j,i,j+40,2,colors[SANDY_BROWN]);	
				}
			}

			for(int i=0  ; i<730 ;i+=40)
			{
				
				DrawLine(8,i,840,i,2,colors[SANDY_BROWN]);	
				
			}

			for(int i=40  ; i<1020 ;i+=80)
			{
				for(int j=40 ; j<750 ; j+=80)
				{
					DrawLine(i,j,i,j+40,2,colors[SANDY_BROWN]);	
				}
			}
			

			DrawLine(8,757,843,757,10,colors[SILVER]); //top border
			DrawLine(8,5,843,5,10,colors[SILVER]);  //bottom border
			DrawLine(10,8,10,754,10,colors[SILVER]);   // left border
			DrawLine(840,8,840,753,10,colors[SILVER]);  // right border

		}

		void Game2heading()
		{
			for(int i=0 ; i<45 ; i+=9)
			{
				DrawLine(0,800-i,850,800-i,10,colors[SANDY_BROWN]);

			}

			DrawString(10,770,"SCORE: ",colors[BROWN]);
			DrawString(100,770,to_string(score),colors[BROWN]);

			DrawString(150,770, "LIVES: ",colors[BROWN]);
			DrawString(230,770,to_string(lives2),colors[BROWN]);

			DrawString(280,770,"HIGH SCORE: ",colors[BROWN]);
			DrawString(450,770,"1000",colors[BROWN]);

			DrawString(520,770,"HAMDA SHAHID",colors[BROWN]);
			DrawString(730,770,"23I-0069",colors[BROWN]);


		}


		static void GameOver2()
		{
				// cout<<lives<<endl;

			if(ballY <= 20)
			{
				lives2--;
			}
			if((ballY <= 20)&&(lives2 == 0))
			{
				ballX = 50;
				ballY = 400;
				gameOverScore = score;
				GameOverMain();
			}
			else if ((lives2 == 1)&&(ballY <= 20))
			{
				ballX = 50;
				ballY = 400;
			}

			
		}

};

class Game1 : public Brick , public Paddle , public Ball, public Food , public GameOver, public Game2
{
	private:

		static int width;
		static int height;

		static int Greentime;
		static int Pinktime;
		static int Bluetime;
		// static int Redtime;
		// static int Yelowtime;

		static bool GreenFoodTime;
		static bool PinkFoodTime;
		// static bool RedFoodTime;
		// static bool YellowFoodTime;

		static int speed;

		static int lives;

	public:


		Game1()
		{
			width = 850;
			height = 840;
		}

		static void Game1MouseMoved(int x , int y)
		{
			paddleX = x;
			paddleY = y;
			glutPostRedisplay();
		}

		static void Game1NonPrintable(int key, int x, int y)
		{
			if (key
					== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
				// what to do when left key is pressed...
				

			} else if (key
					== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
			// dx++;

			} else if (key
					== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

			}

			else if (key
					== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {

			}

			/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
			* this function*/

			// glutPostRedisplay();

			
			glutPostRedisplay();
			
		}

		static void Game1Printable(unsigned char key, int x, int y)
		{

			if (key == 27/* Escape key ASCII*/) {
				exit(1); // exit the program when escape key is pressed.
			}

			if (key == 'b' || key == 'B') //Key for placing the bomb
			{
				//do something if b is pressed
				// cout << "b pressed" << endl;
				// return;

			}
			glutPostRedisplay();
		}

		static void Game1Canvas(int width , int height)
		{
			glMatrixMode (GL_PROJECTION);
			glLoadIdentity();
			glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
			glMatrixMode (GL_MODELVIEW);
			glLoadIdentity();
		}

		static void Game1Display()
		{
			Game1 m;
			
			glClearColor(0.2, 0,0, 0 ); // Red==Green==Blue==1 --> White Colour
			glClear (GL_COLOR_BUFFER_BIT); //Update the colors
			
			m.Game1background();

			m.Game1heading();

			Bricklevel1();

			PaddleLevel1();

			BallLevel1();

			FoodLevel1();

			GameOver1();


			glutSwapBuffers(); // do not modify this line..
		}

		static void Game1Timer(int m)
		{
			ballSlow++;
			ballFast++;

			glutTimerFunc(speed, Game1Timer, 0);
		}

		static void Game1Main()
		{
			// ballX++;
			// ballY--;
			// Menu m;
			storeBricks();
			glutInitWindowPosition(50, 50); // set the initial position of our window
			glutInitWindowSize(width, height); // set the size of our window
			glutCreateWindow("Level 1"); // set the title of our game window
			Game1Canvas(width, height); // set the number of pixels...

			// Register your functions to the library,
			// you are telling the library names of function to call for different tasks.
			glutDisplayFunc(Game1Display); // tell library which function to call for drawing Canvas.

			// glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
			glutSpecialFunc(Game1NonPrintable); // tell library which function to call for non-printable ASCII characters
			glutKeyboardFunc(Game1Printable); // tell library which function to call for printable ASCII characters
			// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
			glutTimerFunc(1000.0, Game1Timer, 0);

			// glutMouseFunc(MouseClicked);
			glutPassiveMotionFunc(Game1MouseMoved); // Mouse
			// glutMotionFunc(MousePressedAndMoved); // Mouse

		}

		void Game1background()
		{

			for(int i=8  ; i<1020 ;i+=80)
			{
				for(int j=0 ; j<740 ; j+=80)
				{
					DrawLine(i,j,i,j+40,2,colors[SANDY_BROWN]);	
				}
			}

			for(int i=0  ; i<730 ;i+=40)
			{
				
				DrawLine(8,i,840,i,2,colors[SANDY_BROWN]);	
				
			}

			for(int i=40  ; i<1020 ;i+=80)
			{
				for(int j=40 ; j<750 ; j+=80)
				{
					DrawLine(i,j,i,j+40,2,colors[SANDY_BROWN]);	
				}
			}
			

			DrawLine(8,757,843,757,10,colors[SILVER]); //top border
			DrawLine(8,5,843,5,10,colors[SILVER]);  //bottom border
			DrawLine(10,8,10,754,10,colors[SILVER]);   // left border
			DrawLine(840,8,840,753,10,colors[SILVER]);  // right border

		}

		void Game1heading()
		{
			for(int i=0 ; i<45 ; i+=9)
			{
				DrawLine(0,800-i,850,800-i,10,colors[SANDY_BROWN]);

			}

			DrawString(10,770,"SCORE: ",colors[BROWN]);
			DrawString(100,770,to_string(score),colors[BROWN]);

			DrawString(150,770, "LIVES: ",colors[BROWN]);
			DrawString(230,770,to_string(lives),colors[BROWN]);

			DrawString(280,770,"HIGH SCORE: ",colors[BROWN]);
			DrawString(450,770,"320",colors[BROWN]);

			DrawString(520,770,"HAMDA SHAHID",colors[BROWN]);
			DrawString(730,770,"23I-0069",colors[BROWN]);



		}

		static void GreenTimeCheck()
		{
			GreenFoodTime = greenFood1;

			if(GreenFoodTime == true)
			{
				Greentime++;
				GreenFoodTime = false;
			}

			if(Greentime>0)
			{
				Greentime++;
				paddleWidth = 160;
			}

			if(Greentime == 10)
			{
				paddleWidth = 80;
				Greentime = 0;
			}
		}

		static void PinkTimeCheck()
		{
			PinkFoodTime = pinkFood1;

			if(PinkFoodTime == true)
			{
				Pinktime++;
				PinkFoodTime = false;
			}

			if(Pinktime>0)
			{
				Pinktime++;
				paddleWidth = 40;
			}

			if(Pinktime == 10)
			{
				paddleWidth = 80;
				Pinktime = 0;
			}
		}

		static void BlueTimeCheck()
		{
			// BlueFoodTime = blueFood1;

			if(blueFood1 == true)
			{
				Bluetime++;
				// BlueFoodTime = false;
			}

			if(Bluetime > 0)
			{
				Bluetime++;
				speed = 30000;
			}

			if(Bluetime == 10)
			{
				Bluetime = 0;
				speed = 1;
			}
			cout<<speed<<endl;
		}

		static void RedTimeCheck()
		{
			// RedFoodTime = redFood1;

			// if(RedFoodTime == true)
			// {
			// 	// Redtime++;
			// 	RedFoodTime = false;
			// }

			// if(Redtime > 0)
			// {
			// 	Redtime++;
			// 	speed = 2000;
			// }

			// if(Redtime == 10)
			// {
			// 	Redtime = 0;
			// 	speed = 1000;
			// }
		}

		static void YellowTimeCheck()
		{
			// bool go = true;
			// YellowFoodTime = yellowFood1;

			// if(YellowFoodTime == true)
			// {
			// 	YellowFoodTime = false;
			// 	Yelowtime++;
			// 	// DrawCircle(500,300,10,colors[ORANGE_RED]);
			// }
			// else
			// {
			// 	go = false;
			// }

			// if(go == true)
			// {
			// 	DrawCircle(500,300,10,colors[ORANGE_RED]);
			// }

			// if(Yelowtime > 0)
			// {
			// 	// DrawCircle(500-Yelowtime,300-Yelowtime,10,colors[ORANGE_RED]);
			// 	Yelowtime++;
			// }

			// if(Yelowtime == 10)
			// {
			// 	Yelowtime = 0;
			// }
		}

		static void GameOver1()
		{
				// cout<<lives<<endl;

			if(ballY <= 20)
			{
				lives--;
			}
			if((ballY <= 20)&&(lives == 0))
			{
				ballX = 50;
				ballY = 400;
				gameOverScore = score;
				GameOverMain();
			}
			else if ((lives == 1)&&(ballY <= 20))
			{
				ballX = 50;
				ballY = 400;
			}

			// if(score >= 320)
			// {
			// 	// GameOverMain();
			// 	score = 0;
			// 	lives = 2;
			// 	// Game2Main();
			// }

		}

};

class Menu : public Game1, public Game2 , public Game3
{
	private:

		int choice;
		int width;
		int height;

	public:

		Menu()
		{
			width = 1020;
			height = 840;
		}

		static void MenuNonPrintable(int key, int x, int y)
		{
			if (key
					== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
				// what to do when left key is pressed...
				

			} else if (key
					== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
			// dx++;

			} else if (key
					== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

			}

			else if (key
					== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {

			}

			/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
			* this function*/

			// glutPostRedisplay();

			
			glutPostRedisplay();
			
		}

		static void MenuPrintable(unsigned char key, int x, int y)
		{

			switch(key)
			{
				case 49:

					Game1Main();

					break;
				
				case 50:

					Game2Main();

					break;

				case 51:

					Game3Main();

					break;

				case 52:

					//HighScores();
					break;

				case 5:

					break;

				case 27:

					exit(1);

					break;	
			}

			// if (key == 27/* Escape key ASCII*/) {
			// 	exit(1); // exit the program when escape key is pressed.
			// }

			// if (key == '1' ) //Key for placing the bomb
			// {

				

			// }
			glutPostRedisplay();
		}

		void MenuCanvas(int width , int height)
		{
			glMatrixMode (GL_PROJECTION);
			glLoadIdentity();
			glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
			glMatrixMode (GL_MODELVIEW);
			glLoadIdentity();
		}

		static void menuDisplay()
		{
			Menu m;
			glClearColor(0.5, 0,0, 0 ); // Red==Green==Blue==1 --> White Colour
			glClear (GL_COLOR_BUFFER_BIT); //Update the colors
			
			m.Menubackground();

			m.Menuheading();

			m.MenuChoices();

			m.MenuFooter();


			glutSwapBuffers(); // do not modify this line..
		}

		static void MenuTimer(int m)
		{

			// implement your functionality here

			// once again we tell the library to call our Timer function after next 1000/FPS
			glutTimerFunc(1000.0, MenuTimer, 0);
		}
		void MenuMain()
		{
			// Menu m;
			glutInitWindowPosition(50, 50); // set the initial position of our window
			glutInitWindowSize(width, height); // set the size of our window
			glutCreateWindow("MAIN MENU"); // set the title of our game window
			MenuCanvas(width, height); // set the number of pixels...

			// Register your functions to the library,
			// you are telling the library names of function to call for different tasks.
			glutDisplayFunc(menuDisplay); // tell library which function to call for drawing Canvas.

			// glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
			glutSpecialFunc(MenuNonPrintable); // tell library which function to call for non-printable ASCII characters
			glutKeyboardFunc(MenuPrintable); // tell library which function to call for printable ASCII characters
			// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
			glutTimerFunc(1000.0, MenuTimer, 0);

			// glutMouseFunc(MouseClicked);
			// glutPassiveMotionFunc(MouseMoved); // Mouse
			// glutMotionFunc(MousePressedAndMoved); // Mouse

		}

		void Menubackground()
		{
			for(int i=0  ; i<1020 ;i+=80)
			{
				for(int j=0 ; j<840 ; j+=80)
				{
					DrawLine(i,j,i,j+40,10,colors[SANDY_BROWN]);	
				}
			}

			for(int i=0  ; i<1020 ;i+=40)
			{
				
				DrawLine(0,i,1020,i,10,colors[SANDY_BROWN]);	
				
			}

			for(int i=40  ; i<1020 ;i+=80)
			{
				for(int j=40 ; j<840 ; j+=80)
				{
					DrawLine(i,j,i,j+40,10,colors[SANDY_BROWN]);	
				}
			}
		}

		void Menuheading()
		{
			for(int i=0 ; i<63 ; i+=9)
			{
				DrawLine(340,770-i,660,770-i,10,colors[BEIGE]);

			}

			for(int i=0 ; i<45 ; i+=9)
			{
				DrawLine(350,760-i,650,760-i,10,colors[SANDY_BROWN]);

			}

			DrawString(390,730,"BRICK BREAKER GAME",colors[BROWN]);

		}

		void MenuChoices()
		{
			for(int i=0 ; i<63 ; i+=9)
			{
				DrawLine(370,650-i,610,650-i,10,colors[BEIGE]);

			}

			for(int i=0 ; i<45 ; i+=9)
			{
				DrawLine(380,640-i,600,640-i,10,colors[SANDY_BROWN]);

			}

			DrawString(410,610,"1. Level 1",colors[BROWN]);

			for(int i=0 ; i<63 ; i+=9)
			{
				DrawLine(370,525-i+1,610,525-i+1,10,colors[BEIGE]);

			}

			for(int i=0 ; i<45 ; i+=9)
			{
				DrawLine(380,515-i,600,515-i,10,colors[SANDY_BROWN]);

			}

			DrawString(410,490,"2. Level 2",colors[BROWN]);
			
			for(int i=0 ; i<63 ; i+=9)
			{
				DrawLine(370,406-i+1,610,406-i+1,10,colors[BEIGE]);

			}

			for(int i=0 ; i<45 ; i+=9)
			{
				DrawLine(380,396-i,600,396-i,10,colors[SANDY_BROWN]);

			}

			DrawString(410,370,"3. Level 3",colors[BROWN]);

			for(int i=0 ; i<63 ; i+=9)
			{
				DrawLine(370,288-i+1,610,288-i+1,10,colors[BEIGE]);

			}


			for(int i=0 ; i<45 ; i+=9)
			{
				DrawLine(380,277-i,600,277-i,10,colors[SANDY_BROWN]);

			}

			DrawString(410,250,"4. High Scores",colors[BROWN]);

		}

		void MenuFooter()
		{
			for(int i=0 ; i<45 ; i+=9)
			{
				DrawLine(600,75-i+1,850,75-i+1,10,colors[SANDY_BROWN]);
			}

			DrawString(610,45,"Made by : Hamda Shahid",colors[BROWN]);
		}

};

string Brick:: ball2Colours = "IVORY";
string Brick:: ball3Colours = "IVORY";


int Game1:: width = 0;
int Game1:: height = 0;

int Game1:: Greentime = 0;
int Game1::Pinktime = 0;
int Game1::Bluetime = 0;
// int Game1::Redtime = 0;
// int Game1::Yelowtime = 0;

bool Game1:: GreenFoodTime = false;
bool Game1:: PinkFoodTime = false;
// bool Game1:: RedFoodTime = false;
// bool Game1:: YellowFoodTime = false;

int Game1:: lives = 2;

int Game1:: speed = 1;


int Game3 ::  width3 = 0;
int Game3 ::  height3 = 0;
int Game3 ::  speed3 = 1;
int Game3 ::  lives3 = 2;


int Paddle:: paddleX  = 0;
int Paddle:: paddleY = 200;
int Paddle:: paddleWidth = 80;
string Paddle :: PaddleColor = "BLUE_VIOLET";

int Ball:: ballX = 50;
int Ball:: ballY = 400;
int Ball:: ballSlow = 0;
int Ball:: ballFast = 0;

int Ball:: ball2X = 750;
int Ball:: ball2Y = 400;
int Ball:: ball2PreviousMovement[2] = {2,2};
int Ball:: ball2Movement[2] = {2,2};

int Ball:: ball3X = 400;
int Ball:: ball3Y = 750;
int Ball:: ball3PreviousMovement[2] = {2,2};
int Ball:: ball3Movement[2] = {2,2};

int Paddle :: paddleX2 = 0;
int Paddle ::paddleY2 = 750;
int Paddle :: paddleWidth2 = 80;
string Paddle :: PaddleColor2 = "IVORY";


int Brick:: brickX = 0;
int Brick:: brickY = 0;
int Brick:: score = 0;
string Brick:: ballColours = "IVORY";
bool Brick:: BlueFoodTime = false;
bool Brick:: RedFoodTime = false;
bool Brick:: YellowFoodTime = false;

bool Food:: another = false;
bool Food:: also = false;
bool Ball:: check = false;

int BrickColours1:: PinkBrickX[] = {0,0,0,0,0,0,0};
int BrickColours1:: PinkBrickY []= {0,0,0,0,0,0,0};
int BrickColours1:: GreenBrickX []= {0,0,0,0,0,0,0};
int BrickColours1:: GreenBrickY []= {0,0,0,0,0,0,0};
int BrickColours1:: BlueBrickX []= {0,0,0,0,0,0};
int BrickColours1:: BlueBrickY []= {0,0,0,0,0,0};
int BrickColours1:: RedBrickX []= {0,0,0,0,0,0,0};
int BrickColours1:: RedBrickY []= {0,0,0,0,0,0,0};
int BrickColours1:: YellowBrickX []= {0,0,0,0,0};
int BrickColours1:: YellowBrickY []= {0,0,0,0,0};

int Ball:: previousMovement[] = {2,2};
int Ball:: movement[] = {2,2};
int Ball:: count = 0;


bool Food:: greenFood1 = false;
bool Food:: pinkFood1 = false;
bool Food:: blueFood1 = false;
bool Food:: redFood1 = false;
bool Food:: yellowFood1 = false;

int Food:: greenfoodX1 = 0;
int Food:: greenfoodY1 = 0;


int Food:: pinkfoodX1 = 0;
int Food:: pinkfoodY1 = 0;

int Food:: bluefoodX1 = 0;
int Food:: bluefoodY1 = 0;

int Food:: redfoodX1 = 0;
int Food:: redfoodY1 = 0;

int Food:: yellowfoodX1 = 0;
int Food:: yellowfoodY1 = 0;

bool Food:: some = false;

int BrickCollisions1:: PinkBrickCollision[7] = {0,0,0,0,0,0,0};
int BrickCollisions1:: GreenBrickCollision[7]= {0,0,0,0,0,0,0};
int BrickCollisions1:: BlueBrickCollision[6] = {0,0,0,0,0,0};
int BrickCollisions1:: RedBrickCollision[7] = {0,0,0,0,0,0,0};
int BrickCollisions1:: YellowBrickCollision[5] = {0,0,0,0,0};

int GameOver:: width = 0;
int GameOver:: height = 0;
int GameOver:: choice = 0;
int GameOver:: gameOverScore = 0;


int BrickColours2 :: PinkBrickX[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickColours2 :: PinkBrickY[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickColours2 :: GreenBrickX[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickColours2 :: GreenBrickY[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickColours2 :: BlueBrickX[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickColours2 :: BlueBrickY[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickColours2 :: RedBrickX[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickColours2 :: RedBrickY[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickColours2 :: YellowBrickX[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickColours2 :: YellowBrickY[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


int BrickCollisions2 :: PinkBrickCollision[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickCollisions2 :: GreenBrickCollision[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickCollisions2 :: BlueBrickCollision[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickCollisions2 :: RedBrickCollision[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int BrickCollisions2 :: YellowBrickCollision[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

int Game2 :: width2 = 0;
int Game2 :: height2 = 0;
int Game2 :: speed2 = 1;
int Game2 :: lives2 = 2;


string Brick :: brick3colours[12][11] ;
int Brick :: Brick3X[12][11] = {{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0}};
int Brick:: Brick3Y[12][11] = {{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0}};

#endif 