/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"


	double xcord=70, ycord=200;
/* 
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	
	//place your drawing codes here	
	//iClear();
	//iFilledCircle(xco, yco, 5);
	//iText(xco, yco, "Aminur Rahman", GLUT_BITMAP_8_BY_13);
	iSetColor(0,255,0);
	iLine(60,60,60,260);
	iLine(60,260,160,260);
	iLine(160,260,160,180);
	iLine(160,180,60,180);
	
	
	iSetColor(255,0,0);
	iCircle(110,220,25);
	iFilledCircle(110,220,25);
	iSetColor(255,150,100);
	iRectangle(45,60,55,5);
	iFilledRectangle(45,60,55,5);
	//iFilledRectangle();
	iText(xcord,ycord,"Bangladesh",GLUT_BITMAP_TIMES_ROMAN_24);
	

}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	xcord=mx;
	ycord=my;
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//xcord=mx;
		//ycord=my;
		//printf("left button clicked at %d and %d\n", mx, my);
		//place your codes here	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//printf("Right button clicked at %d and %d\n", mx, my);
		//place your codes here	
	}
}
/*iPassiveMouseMove is called to detect and use 
the mouse point without pressing any button */

void iPassiveMouseMove(int mx,int my)
{
	//xcord=mx;
	//ycord=my;
	//place your code here
	
 
	//xco = mx;
	//yco = my;
	//if(mx== 2){}        /*Something to do with mx*/
	//else if(my== 2){}   /*Something to do with my*/
 
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	//place your codes for other keys here
}
//
int main()
{
	//place your own initialization codes here. 
	iInitialize(400, 400, "Software Developemnt-I A2");
	return 0;
}	