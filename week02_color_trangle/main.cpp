#include <GL/glut.h>  第18行留下,使用GLUT 外掛


void display(){


     glBegin(GL_POLYGON); ///開始畫
        glColor3f(1,0,0);glVertex2f(0,1);
        glColor3f(0,1,0);glVertex2f(1,-0.6);
        glColor3f(0,0,1);glVertex2f(-1,-0.6);

    glEnd();


    glutSwapBuffers();
}

int main(int argc, char *argv[])   ///main函式
{
    glutInit(&argc, argv); ///開啟GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///設定顯示模式
    glutCreateWindow("week02_color_trangle"); /// 開一個GLUT視窗
    glutDisplayFunc(display); ///要用display()函式畫圖


    glutMainLoop(); ///1主要的迴圈,在這裡一直操作,不結束
}
