

#pragma once

#include <Windows.h>
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <GL/glut.h>
using namespace std;

#define Pi 3.1415926

void MyDisplay(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	int i;
	float x, y;
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.0f);
	glBegin(GL_LINE_LOOP);
	for (i = 0; i < 100; i++)
	{
		x = 0.5 * cos(2 * Pi / 100 * i);
		y = 0.5 * sin(2 * Pi / 100 * i);
		glVertex2f(x, y);
	}
	glEnd();
	glBegin(GL_LINES);
	for (i = 0; i < 100; i++)
	{
		if (i == 12 || i == 42 || i == 62 || i == 77 || i == 87 || i == 97)
		{
			x = 0.5 * cos(2 * Pi / 100 * i);
			y = 0.5 * sin(2 * Pi / 100 * i);
			glVertex2f(x, y);
			glVertex2f(0.0f, 0.0f);
		}
	}
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	for (i = 12; i <= 42; i++)
	{
		if (i == 12)
		{
			glVertex2f(0.0f, 0.0f);
		}
		x = 0.5 * cos(2 * Pi / 100 * i);
		y = 0.5 * sin(2 * Pi / 100 * i);
		glVertex2f(x, y);
		if (i == 42)
		{
			glVertex2f(0.0f, 0.0f);
		}
	}
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	for (i = 42; i <= 62; i++)
	{
		if (i == 42)
		{
			glVertex2f(0.0f, 0.0f);
		}
		x = 0.5 * cos(2 * Pi / 100 * i);
		y = 0.5 * sin(2 * Pi / 100 * i);
		glVertex2f(x, y);
		if (i == 62)
		{
			glVertex2f(0.0f, 0.0f);
		}
	}
	glEnd();
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	for (i = 62; i <= 77; i++)
	{
		if (i == 62)
		{
			glVertex2f(0.0f, 0.0f);
		}
		x = 0.5 * cos(2 * Pi / 100 * i);
		y = 0.5 * sin(2 * Pi / 100 * i);
		glVertex2f(x, y);
		if (i == 77)
		{
			glVertex2f(0.0f, 0.0f);
		}
	}
	glEnd();
	glColor3f(0.25f, 0.2f, 0.25f);
	glBegin(GL_POLYGON);
	for (i = 77; i <= 87; i++)
	{
		if (i == 77)
		{
			glVertex2f(0.0f, 0.0f);
		}
		x = 0.5 * cos(2 * Pi / 100 * i);
		y = 0.5 * sin(2 * Pi / 100 * i);
		glVertex2f(x, y);
		if (i == 87)
		{
			glVertex2f(0.0f, 0.0f);
		}
	}
	glEnd();
	glColor3f(0.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	for (i = 87; i <= 97; i++)
	{
		if (i == 87)
		{
			glVertex2f(0.0f, 0.0f);
		}
		x = 0.5 * cos(2 * Pi / 100 * i);
		y = 0.5 * sin(2 * Pi / 100 * i);
		glVertex2f(x, y);
		if (i == 97)
		{
			glVertex2f(0.0f, 0.0f);
		}
	}
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for (i = 12;; i--)
	{
		if (i == 12)
		{
			glVertex2f(0.0f, 0.0f);
		}
		x = 0.5 * cos(2 * Pi / 100 * i);
		y = 0.5 * sin(2 * Pi / 100 * i);
		glVertex2f(x, y);
		if (i == 0)
		{
			i = 100;
		}
		if (i == 97)
		{
			glVertex2f(0.0f, 0.0f);
			break;
		}
	}
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.0f);
	glBegin(GL_LINE_LOOP);
	for (i = 0; i < 100; i++)
	{
		x = 0.5 * cos(2 * Pi / 100 * i);
		y = 0.5 * sin(2 * Pi / 100 * i);
		glVertex2f(x, y);
	}
	glEnd();
	glBegin(GL_LINES);
	for (i = 0; i < 100; i++)
	{
		if (i == 12 || i == 42 || i == 62 || i == 77 || i == 87 || i == 97)
		{
			x = 0.5 * cos(2 * Pi / 100 * i);
			y = 0.5 * sin(2 * Pi / 100 * i);
			glVertex2f(x, y);
			glVertex2f(0.0f, 0.0f);
		}
	}
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glRasterPos2f(-0.05f, 0.25f);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'J');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'a');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'n');
	glRasterPos2f(-0.4f, -0.05f);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'J');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'u');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'n');
	glRasterPos2f(-0.1f, -0.3f);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'M');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'a');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'y');
	glRasterPos2f(0.1f, -0.31f);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'A');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'p');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'r');
	glRasterPos2f(0.25f, -0.15f);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'M');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'a');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'r');
	glRasterPos2f(0.25f, 0.12f);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'F');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'e');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'b');
	glRasterPos2f(-0.05f, 0.22f);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '3');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '0');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '%');
	glRasterPos2f(-0.4f, -0.08f);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '2');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '0');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '%');
	glRasterPos2f(-0.1f, -0.33f);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '1');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '5');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '%');
	glRasterPos2f(0.1f, -0.34f);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '1');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '0');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '%');
	glRasterPos2f(0.25f, -0.18f);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '1');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '0');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '%');
	glRasterPos2f(0.25f, 0.09f);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '1');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '5');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '%');
	glFlush();
}


int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 800);
	glutCreateWindow("第一个OpenGL程序");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();

	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
