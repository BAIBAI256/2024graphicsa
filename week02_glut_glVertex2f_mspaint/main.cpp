#include <GL/glut.h>  ��18��d�U,�ϥ�GLUT �~��
#include<math.h>


void display(){


    glBegin(GL_POLYGON); ///�}�l�e
        for(float a=0 ; a<=3.1415*2 ; a+=0.1){
            glVertex2f(cos(a),sin(a));
    }
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char *argv[])   ///main�禡
{
    glutInit(&argc, argv); ///�}��GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///�]�w��ܼҦ�
    glutCreateWindow("week02_glut_glVertex2f_mspaint"); /// �}�@��GLUT����
    glutDisplayFunc(display); ///�n��display()�禡�e��


    glutMainLoop(); ///1�D�n���j��,�b�o�̤@���ާ@,������
}
