#include <GL/glut.h>  ��18��d�U,�ϥ�GLUT �~��


void display(){


     glBegin(GL_POLYGON); ///�}�l�e
        glColor3f(1,0,0);glVertex2f(0,1);
        glColor3f(0,1,0);glVertex2f(1,-0.6);
        glColor3f(0,0,1);glVertex2f(-1,-0.6);

    glEnd();


    glutSwapBuffers();
}

int main(int argc, char *argv[])   ///main�禡
{
    glutInit(&argc, argv); ///�}��GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///�]�w��ܼҦ�
    glutCreateWindow("week02_color_trangle"); /// �}�@��GLUT����
    glutDisplayFunc(display); ///�n��display()�禡�e��


    glutMainLoop(); ///1�D�n���j��,�b�o�̤@���ާ@,������
}
