#include <GL/glut.h>  第18行留下,使用GLUT 外掛

void display(){

    glutSolidTeapot(0.3);
    glutSwapBuffers();
}

int main(int argc, char *argv[])   ///第138行,main函式
{
    glutInit(&argc, argv); ///140行,開啟GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///143,設定顯示模式
    glutCreateWindow("GLUT Shapes"); ///145 開一個GLUT視窗
    glutDisplayFunc(display); ///148,要用display()函式畫圖


    glutMainLoop(); ///174行,主要的迴圈,在這裡一直操作,不結束
}

