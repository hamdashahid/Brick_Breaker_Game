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
#include "header.h"
#include <iostream>
#include<string>
#include<fstream>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;
// int dx=400;



int main(int argc, char*argv[]) 
{
	// cout<<"yes"<<endl;

	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	Menu m;

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode

	m.MenuMain();

	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
