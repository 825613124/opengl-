

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
	glClearColor(1.0f, 1.0f, 1.0f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.67f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.67f, -0.7f);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.0f);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-0.67f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.67f, -0.7f);
	glEnd();
	glColor3f(0.63f, 0.63f, 0.63f);
	glBegin(GL_POLYGON);
	glVertex2f(0.02f, 0.0f);
	glVertex2f(0.5f, 0.0f);
	glVertex2f(0.5f, -0.7f);
	glVertex2f(0.02f, -0.7f);
	glEnd();
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.05f, -0.27f);
	glVertex2f(-0.4f, -0.27f);
	glVertex2f(-0.4f, 0.35f);
	glVertex2f(-0.05f, 0.35f);
	glEnd();
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.22f, 0.6f);
	glVertex2f(0.04f, 0.35f);
	glVertex2f(-0.48f, 0.35f);
	glEnd();
	glColor3f(0.84f, 0.8f, 0.557f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.08f, -0.06f);
	glVertex2f(-0.32f, -0.06f);
	glVertex2f(-0.32f, 0.34f);
	glVertex2f(-0.08f, 0.34f);
	glEnd();
	glColor3f(0.84f, 0.8f, 0.557f);
	glBegin(GL_POLYGON);
	glVertex2f(0.08f, 0.0f);
	glVertex2f(0.28f, 0.0f);
	glVertex2f(0.28f, 0.3f);
	glVertex2f(0.08f, 0.3f);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.08f, 0.3f);
	glVertex2f(0.28f, 0.3f);
	glVertex2f(0.28f, 0.5f);
	glVertex2f(0.08f, 0.5f);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.0f);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.02f, 0.0f);
	glVertex2f(0.5f, 0.0f);
	glVertex2f(0.5f, -0.7f);
	glVertex2f(0.02f, -0.7f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(-0.05f, -0.27f);
	glVertex2f(-0.4f, -0.27f);
	glVertex2f(-0.4f, 0.35f);
	glVertex2f(-0.05f, 0.35f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(-0.22f, 0.6f);
	glVertex2f(0.04f, 0.35f);
	glVertex2f(-0.48f, 0.35f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(-0.08f, -0.06f);
	glVertex2f(-0.32f, -0.06f);
	glVertex2f(-0.32f, 0.34f);
	glVertex2f(-0.08f, 0.34f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.08f, 0.0f);
	glVertex2f(0.28f, 0.0f);
	glVertex2f(0.28f, 0.3f);
	glVertex2f(0.08f, 0.3f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.08f, 0.3f);
	glVertex2f(0.28f, 0.3f);
	glVertex2f(0.28f, 0.5f);
	glVertex2f(0.08f, 0.5f);
	glEnd();
	glFlush();
}


int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1100, 800);
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
