#include <GL/glut.h>  ��18��d�U,�ϥ�GLUT �~��


void display(){


     glBegin(GL_POLYGON); ///�}�l�e
        glColor3f(1,1,1);  ///�C��w�]�զ�
        glVertex2f((30-200)/200.0,-(45-200)/200.0);
        glVertex2f((46-200)/200.0,-(106-200)/200.0);
        glVertex2f((84-200)/200.0,-(23-200)/200.0);

    glEnd();


    glutSwapBuffers();
}

int main(int argc, char *argv[])   ///main�禡
{
    glutInit(&argc, argv); ///�}��GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///�]�w��ܼҦ�
    glutCreateWindow("week02_glut_mspaint_help_draw"); /// �}�@��GLUT����
    glutDisplayFunc(display); ///�n��display()�禡�e��


    glutMainLoop(); ///1�D�n���j��,�b�o�̤@���ާ@,������
}
