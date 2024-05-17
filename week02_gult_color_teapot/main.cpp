#include <GL/glut.h>  第18行留下,使用GLUT 外掛

void display(){

    glColor3f(247/255.0,180/255.0,171/255.0);
    glutSolidTeapot(0.3);

    glColor3f(251/255.0,233/255.0,219/255.0);
    glutSolidTeapot(0.2);

    glutSwapBuffers();
}

int main(int argc, char *argv[])   ///main函式
{
    glutInit(&argc, argv); ///開啟GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///設定顯示模式
    glutCreateWindow("week02_gult_color_teapot"); /// 開一個GLUT視窗
    glutDisplayFunc(display); ///要用display()函式畫圖


    glutMainLoop(); ///1主要的迴圈,在這裡一直操作,不結束
}
