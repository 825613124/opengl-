

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
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex2f(-0.4f, -0.2f);
	glVertex2f(0.6f, -0.2f);
	glVertex2f(-0.2f, -0.45f);
	glVertex2f(-0.2f, 0.4f);
	glVertex2f(-0.2f, 0.37f);
	glVertex2f(-0.22f, 0.37f);
	glVertex2f(-0.2f, 0.18f);
	glVertex2f(-0.22f, 0.18f);
	glVertex2f(-0.2f, -0.01f);
	glVertex2f(-0.22f, -0.01f);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(0.0f, 0.08f);
	glVertex2f(0.1f, 0.35f);
	glVertex2f(0.2f, 0.07f);
	glVertex2f(0.3f, 0.4f);
	glVertex2f(0.4f, 0.3f);
	glEnd();
	glPointSize(5.0f);
	glBegin(GL_POINTS);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(0.0f, 0.08f);
	glVertex2f(0.1f, 0.35f);
	glVertex2f(0.2f, 0.07f);
	glVertex2f(0.3f, 0.4f);
	glVertex2f(0.4f, 0.3f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(-0.12f, -0.2f);
	glVertex2f(-0.08f, -0.2f);
	glVertex2f(-0.08f, -0.05f);
	glVertex2f(-0.12f, -0.05f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(-0.02f, -0.2f);
	glVertex2f(0.02f, -0.2f);
	glVertex2f(0.02f, 0.03f);
	glVertex2f(-0.02f, 0.03f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.08f, -0.2f);
	glVertex2f(0.12f, -0.2f);
	glVertex2f(0.12f, 0.2f);
	glVertex2f(0.08f, 0.2f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.18f, -0.2f);
	glVertex2f(0.22f, -0.2f);
	glVertex2f(0.22f, 0.02f);
	glVertex2f(0.18f, 0.02f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.28f, -0.2f);
	glVertex2f(0.32f, -0.2f);
	glVertex2f(0.32f, 0.25f);
	glVertex2f(0.28f, 0.25f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.38f, -0.2f);
	glVertex2f(0.42f, -0.2f);
	glVertex2f(0.42f, 0.17f);
	glVertex2f(0.38f, 0.17f);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glRectf(-0.12f, -0.2f, -0.08f, -0.05f);
	glRectf(-0.02f, -0.2f, 0.02f, 0.03f);
	glRectf(0.08f, -0.2f, 0.12f, 0.2f);
	glRectf(0.18f, -0.2f, 0.22f, 0.02f);
	glRectf(0.28f, -0.2f, 0.32f, 0.25f);
	glRectf(0.38f, -0.2f, 0.42f, 0.17f);
	glEnd();
	glColor3f(0.0f, 1.0f, 0.0f);
	glRasterPos2f(-0.12f, -0.25f);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'J');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'a');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'n');
	glRasterPos2f(-0.02f, -0.25f);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'F');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'e');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'b');
	glRasterPos2f(0.08f, -0.25f);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'M');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'a');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'r');
	glRasterPos2f(0.18f, -0.25f);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'A');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'p');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'r');
	glRasterPos2f(0.28f, -0.25f);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'M');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'a');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'y');
	glRasterPos2f(0.38f, -0.25f);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'J');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'u');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'n');
	glRasterPos2f(-0.25f, -0.02f);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
	glRasterPos2f(-0.25f, 0.17f);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '2');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
	glRasterPos2f(-0.25f, 0.36f);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '3');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
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
