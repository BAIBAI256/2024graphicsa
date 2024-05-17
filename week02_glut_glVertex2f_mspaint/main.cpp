#include <GL/glut.h>  第18行留下,使用GLUT 外掛
#include<math.h>


void display(){


    glBegin(GL_POLYGON); ///開始畫
        for(float a=0 ; a<=3.1415*2 ; a+=0.1){
            glVertex2f(cos(a),sin(a));
    }
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char *argv[])   ///main函式
{
    glutInit(&argc, argv); ///開啟GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///設定顯示模式
    glutCreateWindow("week02_glut_glVertex2f_mspaint"); /// 開一個GLUT視窗
    glutDisplayFunc(display); ///要用display()函式畫圖


    glutMainLoop(); ///1主要的迴圈,在這裡一直操作,不結束
}
