#include <GL/glut.h>
#include <math.h> ///���Fcos()��sing()

void myCircle(float cx, float cy, float r)
{
    glBegin(GL_POLYGON);
    for(float a=0; a<=3.14159*2; a+=0.1)
    {
        glVertex2f(r*cos(a)+cx, r*sin(a)+cy);
    }  ///x=cos(a),y=sin(y)
    glEnd();
}
void display()
{
    glColor3f(1,1,1);myCircle(0, 0, 1);
    glColor3f(0,0,0);myCircle(-0.5, +0.5, 0.3);
    glColor3f(0,0,0);myCircle(+0.5, +0.5, 0.3);
    glColor3f(0,0,0);myCircle(0, -0.3, 0.7);
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week02_glut_cos_sin_circle");
    glutDisplayFunc(display);

    glutMainLoop();
}
