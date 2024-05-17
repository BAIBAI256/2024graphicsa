#include <GL/glut.h>  第18行留下,使用GLUT 外掛


void display(){


     glBegin(GL_POLYGON); ///開始畫
        glColor3f(1,1,1);  ///顏色預設白色
        glVertex2f((30-200)/200.0,-(45-200)/200.0);
        glVertex2f((46-200)/200.0,-(106-200)/200.0);
        glVertex2f((84-200)/200.0,-(23-200)/200.0);

    glEnd();


    glutSwapBuffers();
}

int main(int argc, char *argv[])   ///main函式
{
    glutInit(&argc, argv); ///開啟GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///設定顯示模式
    glutCreateWindow("week02_glut_mspaint_help_draw"); /// 開一個GLUT視窗
    glutDisplayFunc(display); ///要用display()函式畫圖


    glutMainLoop(); ///1主要的迴圈,在這裡一直操作,不結束
}
