//============================================================================
// Name        : .cpp
// Author      : Sibt ul Hussain
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Centipede...
//============================================================================

#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;
int dx=400;

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

	public:

		static void PaddleLevel1()
		{
			if(PaddleColor == "BLUE_VIOLET")
			{
				DrawRectangle(paddleX,200,paddleWidth,20,colors[BLUE_VIOLET]);
			}
			else if(PaddleColor == "BLUE")
			{
				DrawRectangle(paddleX,200,paddleWidth,20,colors[BLUE]);

			}
			else if(PaddleColor == "GREEN")
			{
				DrawRectangle(paddleX,200,paddleWidth,20,colors[GREEN]);

			}
			else if(PaddleColor == "PINK")
			{
				DrawRectangle(paddleX,200,paddleWidth,20,colors[PINK]);

			}
			else if(PaddleColor == "RED")
			{
				DrawRectangle(paddleX,200,paddleWidth,20,colors[RED]);

			}
			else if(PaddleColor == "YELLOW")
			{
				DrawRectangle(paddleX,200,paddleWidth,20,colors[YELLOW]);

			}
			else if(PaddleColor == "IVORY")
			{
				DrawRectangle(paddleX,200,paddleWidth,20,colors[IVORY]);
			}
		}

		static bool FoodHitPaddle()
		{
			bool check = true;
			if((((greenfoodX1>=paddleX)&&(greenfoodX1<=paddleX+80))
				||((greenfoodX1+40>=paddleX)&&(greenfoodX1+40<=paddleX+80)))&&(greenfoodY1 == 200+20))
			{
				greenFood1 = false;
				check = true;
				// bluefoodTime
				// paddleWidth*=2;
				// paddleWidth*=2;
			}

			if((((pinkfoodX1>=paddleX)&&(pinkfoodX1<=paddleX+40))
				||((pinkfoodX1+40>=paddleX)&&(pinkfoodX1+40<=paddleX+80)))&&(pinkfoodY1 == 200+20))
			{
				pinkFood1 = false;
				check = true;
			}

			if((((bluefoodX1-20>=paddleX) && (bluefoodX1-20<=paddleX+80))
				||((bluefoodX1+20>=paddleX)&&(bluefoodX1+20<=paddleX+80)))&&(bluefoodY1-20 == 200+20))
			{
				blueFood1 = false;
				check = true;
			}

			if((((redfoodX1>=paddleX)&&(redfoodX1<=paddleX+80))
				||((redfoodX1+50>=paddleX)&&(redfoodX1+50<=paddleX+80)))&&(redfoodY1 == 200+20))
			{
				redFood1 = false;
				check = true;
			}

			if((((yellowfoodX1>=paddleX)&&(yellowfoodX1<=paddleX+40))
				||((yellowfoodX1+40>=paddleX)&&(yellowfoodX1+40<=paddleX+80)))&&(yellowfoodY1 == 200+20))
			{
				yellowFood1 = false;
				check = true;
			}

			return check;
		}

		static bool greenFoodHitPaddle()
		{
			bool checkGreen = false;
			if((((greenfoodX1>=paddleX)&&(greenfoodX1<=paddleX+80))
				||((greenfoodX1+40>=paddleX)&&(greenfoodX1+40<=paddleX+80)))&&(greenfoodY1 == 200+20))
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

			if((((pinkfoodX1>=paddleX)&&(pinkfoodX1<=paddleX+40))
				||((pinkfoodX1+40>=paddleX)&&(pinkfoodX1+40<=paddleX+80)))&&(pinkfoodY1 == 200+20))
			{
				pinkFood1 = false;
				check = true;
				paddleWidth/=2;
				pinkfoodX1 = 900;
				pinkfoodY1 = 900;
			}
		}

		static bool blueFoodHitPaddle()
		{
			bool check = false;
			if((((bluefoodX1-20>=paddleX) && (bluefoodX1-20<=paddleX+80))
				||((bluefoodX1+20>=paddleX)&&(bluefoodX1+20<=paddleX+80)))&&(bluefoodY1-20 == 200+20))
			{
				blueFood1 = false;
				check = true;
			}

			return check;
		}

		static bool redFoodHitPaddle()
		{
			bool check = false;
			if((((redfoodX1>=paddleX)&&(redfoodX1<=paddleX+80))
				||((redfoodX1+50>=paddleX)&&(redfoodX1+50<=paddleX+80)))&&(redfoodY1 == 200+20))
			{
				redFood1 = false;
				check = true;
			}

			return check;

		}

		static bool yellowFoodHitPaddle()
		{
			bool check = false;
			if((((yellowfoodX1>=paddleX)&&(yellowfoodX1<=paddleX+40))
				||((yellowfoodX1+40>=paddleX)&&(yellowfoodX1+40<=paddleX+80)))&&(yellowfoodY1 == 200+20))
			{
				yellowFood1 = false;
				check = true;
			}

			return check;
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

				if(count == 100)
				{
					YellowFoodTime = false;
					count = 0;
				}

			}

			FoodHitPaddle();
			greenFoodHitPaddle();
			pinkFoodHitPaddle();

			if((((ballX >= paddleX)&&(ballX<= paddleX+80))
				||((ballX-10>=paddleX-10)&&(ballX-10<=paddleX+80))
				||((ballX+10>=paddleX-10)&&(ballX+10<=paddleX+80)))&&(ballY-30 == 200))
			{

				movement[0] = 1;
				PaddleColor = ballColours;

				ballMovement();
			}
			
				for(int i=0 ; i<7 ; i++)
				{

					if(((ballX) >= (b1.GreenBrickX[i]))&&(ballX <= (b1.GreenBrickX[i]+80))&&
						(ballY>= (b1.GreenBrickY[i]))&&(ballY>=450))
					{

						movement[0] = 2;

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

					if(((ballX) >= (b1.PinkBrickX[i]))&&(ballX <= (b1.PinkBrickX[i]+80))&&
						(ballY>= (b1.PinkBrickY[i]))&&(ballY>=450))
					{
						movement[0] = 2;

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
					if(((ballX) >= (b1.BlueBrickX[i]))&&(ballX <= (b1.BlueBrickX[i]+80))&&
						(ballY >= b1.BlueBrickY[i])&&(ballY>=450))
					{
						movement[0] = 2;

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
					if(((ballX) >= (b1.RedBrickX[i]))&&(ballX <= (b1.RedBrickX[i]+80))&&
					(ballY>= (b1.RedBrickY[i]))&&(ballY>=450))
					{
						movement[0] = 2;

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

					if(((ballX) >= (b1.YellowBrickX[i]))&&(ballX <= (b1.YellowBrickX[i]+80))&&
						(ballY>= (b1.YellowBrickY[i]))&&(ballY>=450))
					{

						movement[0] = 2;

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

			if(BlueFoodTime == true)
			{
				if(ballSlow%5 == 0)
				{
					Ball2Movement();
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
				Ball2Movement();
			}


			if(RedFoodTime == true)
			{
				Ball2Movement();
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
			
			// if(YellowFoodTime == true)
			// {
			// 	Drawball2();
			// 	Drawball3();
			// 	if(ballFast%5 == 0)
			// 	{
			// 		// ballMovement();
			// 		count++;
			// 	}

			// 	if(count == 50)
			// 	{
			// 		YellowFoodTime = false;
			// 		count = 0;
			// 	}

			// }

			FoodHitPaddle();
			greenFoodHitPaddle();
			pinkFoodHitPaddle();

			if((((ball2X >= paddleX)&&(ball2X<= paddleX+80))
				||((ball2X-10>=paddleX-10)&&(ball2X-10<=paddleX+80))
				||((ball2X+10>=paddleX-10)&&(ball2X+10<=paddleX+80)))&&(ball2Y-30 == 200))
			{

				ball2Movement[0] = 1;
				PaddleColor = ball2Colours;

				Ball2Movement();
			}
			
				for(int i=0 ; i<7 ; i++)
				{

					if(((ball2X) >= (b1.GreenBrickX[i]))&&(ball2X <= (b1.GreenBrickX[i]+80))&&
						(ball2Y>= (b1.GreenBrickY[i]))&&(ball2Y>=450))
					{

						ball2Movement[0] = 2;

						c1.GreenBrickCollision[i]++;

						greenfoodX1 = b1.GreenBrickX[i];
						greenfoodY1 = b1.GreenBrickY[i];
						ball2Colours = "GREEN";

						greenFood1 = true;


						b1.GreenBrickX[i] = 900;
						b1.GreenBrickY[i] = 900;

						score+=10;


						break;
					}

					if(((ball2X) >= (b1.PinkBrickX[i]))&&(ball2X <= (b1.PinkBrickX[i]+80))&&
						(ball2Y>= (b1.PinkBrickY[i]))&&(ball2Y>=450))
					{
						ball2Movement[0] = 2;

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
							ball2Colours = "PINK";


						Bricklevel1();

						break;
					}

				}

				for(int i=0 ; i< 6 ; i++)
				{
					if(((ball2X) >= (b1.BlueBrickX[i]))&&(ball2X <= (b1.BlueBrickX[i]+80))&&
						(ball2Y >= b1.BlueBrickY[i])&&(ball2Y>=450))
					{
						ball2Movement[0] = 2;

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

							ball2Colours = "BLUE";

						Bricklevel1();
						break;
					}

				}

				for(int i=0 ; i<5 ; i++)
				{
					if(((ball2X) >= (b1.RedBrickX[i]))&&(ball2X <= (b1.RedBrickX[i]+80))&&
					(ball2Y>= (b1.RedBrickY[i]))&&(ball2Y>=450))
					{
						ball2Movement[0] = 2;

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

							ball2Colours = "RED";

						Bricklevel1();

						break;
					}

					if(((ball2X) >= (b1.YellowBrickX[i]))&&(ball2X <= (b1.YellowBrickX[i]+80))&&
						(ball2Y>= (b1.YellowBrickY[i]))&&(ball2Y>=450))
					{

						ball2Movement[0] = 2;

						c1.YellowBrickCollision[i] ++;
							ball2Colours = "YELLOW";


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

			if(BlueFoodTime == true)
			{
				if(ballSlow%5 == 0)
				{
					Ball2Movement();
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
				Ball3Movement();
			}


			if(RedFoodTime == true)
			{
				Ball3Movement();
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
			
			// if(YellowFoodTime == true)
			// {
			// 	Drawball2();
			// 	Drawball3();
			// 	if(ballFast%5 == 0)
			// 	{
			// 		// ballMovement();
			// 		count++;
			// 	}

			// 	if(count == 50)
			// 	{
			// 		YellowFoodTime = false;
			// 		count = 0;
			// 	}

			// }

			FoodHitPaddle();
			greenFoodHitPaddle();
			pinkFoodHitPaddle();

			if((((ball3X >= paddleX)&&(ball3X<= paddleX+80))
				||((ball3X-10>=paddleX-10)&&(ball3X-10<=paddleX+80))
				||((ball3X+10>=paddleX-10)&&(ball3X+10<=paddleX+80)))&&(ball3Y-30 == 200))
			{

				ball3Movement[0] = 1;
				PaddleColor = ball3Colours;

				Ball3Movement();
			}
			
				for(int i=0 ; i<7 ; i++)
				{

					if(((ball3X) >= (b1.GreenBrickX[i]))&&(ball3X <= (b1.GreenBrickX[i]+80))&&
						(ball3Y>= (b1.GreenBrickY[i]))&&(ball3Y>=450))
					{

						ball3Movement[0] = 2;

						c1.GreenBrickCollision[i]++;

						greenfoodX1 = b1.GreenBrickX[i];
						greenfoodY1 = b1.GreenBrickY[i];
						ball3Colours = "GREEN";

						greenFood1 = true;


						b1.GreenBrickX[i] = 900;
						b1.GreenBrickY[i] = 900;

						score+=10;


						break;
					}

					if(((ball3X) >= (b1.PinkBrickX[i]))&&(ball3X <= (b1.PinkBrickX[i]+80))&&
						(ball3Y>= (b1.PinkBrickY[i]))&&(ball3Y>=450))
					{
						ball3Movement[0] = 2;

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
							ball3Colours = "PINK";


						Bricklevel1();

						break;
					}

				}

				for(int i=0 ; i< 6 ; i++)
				{
					if(((ball3X) >= (b1.BlueBrickX[i]))&&(ball3X <= (b1.BlueBrickX[i]+80))&&
						(ball3Y >= b1.BlueBrickY[i])&&(ball3Y>=450))
					{
						ball3Movement[0] = 2;

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

							ball3Colours = "BLUE";

						Bricklevel1();
						break;
					}

				}

				for(int i=0 ; i<5 ; i++)
				{
					if(((ball3X) >= (b1.RedBrickX[i]))&&(ball3X <= (b1.RedBrickX[i]+80))&&
					(ball3Y>= (b1.RedBrickY[i]))&&(ball3Y>=450))
					{
						ball3Movement[0] = 2;

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

							ball3Colours = "RED";

						Bricklevel1();

						break;
					}

					if(((ball3X) >= (b1.YellowBrickX[i]))&&(ball3X <= (b1.YellowBrickX[i]+80))&&
						(ball3Y>= (b1.YellowBrickY[i]))&&(ball3Y>=450))
					{

						ball3Movement[0] = 2;

						c1.YellowBrickCollision[i] ++;
							ball3Colours = "YELLOW";


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

// class GameWin
// {
// 	protected:
// 		static int width;
// 		static int height;
// 		static int choice;
// 		static int gameWinScore;

// 	public:


// 	GameOver()
// 	{
// 		width = 1020;
// 		height = 840;
// 	}

// 	static void GameOverMain()
// 	{
// 			glutInitWindowPosition(50, 50); // set the initial position of our window
// 			glutInitWindowSize(width, height); // set the size of our window
// 			glutCreateWindow("GAME OVER"); // set the title of our game window
// 			GameOverCanvas(width, height); // set the number of pixels...

// 			// Register your functions to the library,
// 			// you are telling the library names of function to call for different tasks.
// 			glutDisplayFunc(GameOverDisplay); // tell library which function to call for drawing Canvas.

// 			// glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
// 			// glutSpecialFunc(GameOverNonPrintable); // tell library which function to call for non-printable ASCII characters
// 			glutKeyboardFunc(GameOverPrintable); // tell library which function to call for printable ASCII characters
// 			// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
// 			glutTimerFunc(1000.0, GameOverTimer, 0);

// 	}

// 		// if (key == 27/* Escape key ASCII*/) {
// 			// 	exit(1); // exit the program when escape key is pressed.
// 			// }

// 			// if (key == '1' ) //Key for placing the bomb
// 			// {

				

// 		// 	// }
// 		// 	glutPostRedisplay();
// 		// }

// 		static void GameOverCanvas(int width , int height)
// 		{
// 			glMatrixMode (GL_PROJECTION);
// 			glLoadIdentity();
// 			glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
// 			glMatrixMode (GL_MODELVIEW);
// 			glLoadIdentity();
// 		}

// 		static void GameOverDisplay()
// 		{
// 			GameOver m;
// 			glClearColor(0.5, 0,0, 0 ); // Red==Green==Blue==1 --> White Colour
// 			glClear (GL_COLOR_BUFFER_BIT); //Update the colors
			
// 			m.GameOverbackground();

// 			m.GameOverheading();

// 			m.GameOverSubHeadings();

// 			m.MenuFooter();


// 			glutSwapBuffers(); // do not modify this line..
// 		}

// 		static void GameOverTimer(int m)
// 		{

// 			// implement your functionality here

// 			// once again we tell the library to call our Timer function after next 1000/FPS
// 			glutTimerFunc(1000.0, GameOverTimer, 0);
// 		}

// 		void GameOverbackground()
// 		{
// 			for(int i=0  ; i<1020 ;i+=80)
// 			{
// 				for(int j=0 ; j<840 ; j+=80)
// 				{
// 					DrawLine(i,j,i,j+40,10,colors[SANDY_BROWN]);	
// 				}
// 			}

// 			for(int i=0  ; i<1020 ;i+=40)
// 			{
				
// 				DrawLine(0,i,1020,i,10,colors[SANDY_BROWN]);	
				
// 			}

// 			for(int i=40  ; i<1020 ;i+=80)
// 			{
// 				for(int j=40 ; j<840 ; j+=80)
// 				{
// 					DrawLine(i,j,i,j+40,10,colors[SANDY_BROWN]);	
// 				}
// 			}
// 		}

// 		void GameOverheading()
// 		{
// 			for(int i=0 ; i<63 ; i+=9)
// 			{
// 				DrawLine(340,770-i,660,770-i,10,colors[BEIGE]);

// 			}

// 			for(int i=0 ; i<45 ; i+=9)
// 			{
// 				DrawLine(350,760-i,650,760-i,10,colors[SANDY_BROWN]);

// 			}

// 			DrawString(390,730,"BRICK BREAKER GAME",colors[BROWN]);

// 			DrawRectangle(280,570,470,60,colors[BEIGE]);
// 			DrawRectangle(290,580,450,40,colors[SANDY_BROWN]);

// 			DrawString(350,590, ":( ===== GAME OVER !!! ===== :(" , colors[BROWN]);

// 		}

// 		void GameOverSubHeadings()
// 		{
// 			DrawRectangle(350,430,300,60,colors[BEIGE]);
// 			DrawRectangle(360,440,280,40,colors[SANDY_BROWN]);

// 			DrawString(440,450,"SCORE: ",colors[BROWN]);
// 			DrawString(530,450,to_string(gameOverScore),colors[BROWN]);
// 		}

// 		void MenuFooter()
// 		{
// 			for(int i=0 ; i<45 ; i+=9)
// 			{
// 				DrawLine(600,75-i+1,850,75-i+1,10,colors[SANDY_BROWN]);
// 			}

// 			DrawString(610,45,"Made by : Hamda Shahid",colors[BROWN]);
// 		}


// };


class Game1 : public Brick , public Paddle , public Ball, public Food , public GameOver
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
			dx++;

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

			DrawString(60,770,"SCORE: ",colors[BROWN]);
			DrawString(160,770,to_string(score),colors[BROWN]);

			DrawString(230,770, "LIVES: ",colors[BROWN]);
			DrawString(320,770,to_string(lives),colors[BROWN]);

			DrawString(400,770,"HAMDA SHAHID",colors[BROWN]);
			DrawString(670,770,"23I-0069",colors[BROWN]);



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

			if(ballY <= 200)
			{
				lives--;
			}
			if((ballY <= 200)&&(lives == 0))
			{
				ballX = 50;
				ballY = 400;
				gameOverScore = score;
				GameOverMain();
			}
			else if ((lives == 1)&&(ballY <= 200))
			{
				ballX = 50;
				ballY = 400;
			}
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


// int GameWin:: width = 0;
// int GameWin:: height = 0;
// int GameWin:: choice = 0;
// int GameWin:: gameWinScore = 0;


class Menu : public Game1
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
			dx++;

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


// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) 
{
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


/*
 * Main Canvas drawing function.
 * */
void GameDisplay()/**/
{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Fire Gun
	
	DrawSquare( dx , 20 ,40,colors[RED]); 
	//Mushroom
	DrawSquare( 250 , 250 ,20,colors[GREEN]); 
	//Display Score
	DrawString( 50, 800, "Score=0", colors[MISTY_ROSE]);
	//Spider
	DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[MISTY_ROSE] ); 
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	DrawLine( 550 , 50 ,  550 , 480 , 10 , colors[MISTY_ROSE] );	
	
	DrawCircle(50,670,10,colors[RED]);
	DrawCircle(70,670,10,colors[RED]);
	DrawCircle(90,670,10,colors[RED]);
	DrawRoundRect(500,200,50,100,colors[DARK_SEA_GREEN],70);
	DrawRoundRect(100,200,100,50,colors[DARK_OLIVE_GREEN],20);	
	DrawRoundRect(100,100,50,100,colors[DARK_OLIVE_GREEN],30);
	DrawRoundRect(200,100,100,50,colors[LIME_GREEN],40);
	DrawRoundRect(350,100,100,50,colors[LIME_GREEN],20);
	
	glutSwapBuffers(); // do not modify this line..

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


void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
	dx++;

	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {

	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) 
{
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}
	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) 
{
	cout << x <<" moved " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) 
{

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << "LEFT BUTTON PRESSED" << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) 
{

	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	Menu m;

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode

	m.MenuMain();

	// glutInitWindowPosition(50, 50); // set the initial position of our window
	// glutInitWindowSize(width, height); // set the size of our window
	// glutCreateWindow("OOP Project"); // set the title of our game window
	// SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	// glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	// glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	// glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// // This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	// glutTimerFunc(1000.0, Timer, 0);

	// glutMouseFunc(MouseClicked);
	// glutPassiveMotionFunc(MouseMoved); // Mouse
	// glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
