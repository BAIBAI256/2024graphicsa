#include <GL/glut.h>  ��18��d�U,�ϥ�GLUT �~��

void display(){

    glColor3f(247/255.0,180/255.0,171/255.0);
    glutSolidTeapot(0.3);

    glColor3f(251/255.0,233/255.0,219/255.0);
    glutSolidTeapot(0.2);

    glutSwapBuffers();
}

int main(int argc, char *argv[])   ///main�禡
{
    glutInit(&argc, argv); ///�}��GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///�]�w��ܼҦ�
    glutCreateWindow("week02_gult_color_teapot"); /// �}�@��GLUT����
    glutDisplayFunc(display); ///�n��display()�禡�e��


    glutMainLoop(); ///1�D�n���j��,�b�o�̤@���ާ@,������
}
