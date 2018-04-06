/*
 * Semestre 2018-2
 * Cabrera López Oscar Emilio
 */
#define _USE_MATH_DEFINES
#include <GL/glut.h>
#include <cmath>

float ang = 0.0;
const double sqrt2 = M_SQRT2;

void glInit()
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
}

void dibujaCuboUnitario()
{
    GLfloat vertice [8][3] = {
        { 0.5f,  -0.5f,   0.5f},   // Vértice 0
        {-0.5f,  -0.5f,   0.5f},   // Vértice 1
        {-0.5f,  -0.5f,  -0.5f},   // Vértice 2
        { 0.5f,  -0.5f,  -0.5f},   // Vértice 3
        { 0.5f,   0.5f,   0.5f},   // Vértice 4
        { 0.5f,   0.5f,  -0.5f},   // Vértice 5
        {-0.5f,   0.5f,  -0.5f},   // Vértice 6
        {-0.5f,   0.5f,   0.5f},   // Vértice 7
    };

    glBegin(GL_POLYGON);    //Front
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3fv(vertice[0]);
    glVertex3fv(vertice[4]);
    glVertex3fv(vertice[7]);
    glVertex3fv(vertice[1]);
    glEnd();

    glBegin(GL_POLYGON);    //Right
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3fv(vertice[0]);
    glVertex3fv(vertice[3]);
    glVertex3fv(vertice[5]);
    glVertex3fv(vertice[4]);
    glEnd();

    glBegin(GL_POLYGON);    //Back
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex3fv(vertice[6]);
    glVertex3fv(vertice[5]);
    glVertex3fv(vertice[3]);
    glVertex3fv(vertice[2]);
    glEnd();

    glBegin(GL_POLYGON);    //Left
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3fv(vertice[1]);
    glVertex3fv(vertice[7]);
    glVertex3fv(vertice[6]);
    glVertex3fv(vertice[2]);
    glEnd();

    glBegin(GL_POLYGON);    //Bottom
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3fv(vertice[0]);
    glVertex3fv(vertice[1]);
    glVertex3fv(vertice[2]);
    glVertex3fv(vertice[3]);
    glEnd();

    glBegin(GL_POLYGON);    //Top
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3fv(vertice[4]);
    glVertex3fv(vertice[5]);
    glVertex3fv(vertice[6]);
    glVertex3fv(vertice[7]);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW_MATRIX);
    glLoadIdentity();

    ang = (ang > 360) ? 0.0f : ang + 0.1f;

    glTranslatef(1.0f, 0.0f, -7.0f);
    glRotatef(ang, 0.0, 0.0f, 1.0f);
    dibujaCuboUnitario();

    glFlush ();
}

void idleFunc()
{
    glutPostRedisplay();
}

void reshape(int width, int height) {
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //gluPerspective(45, (GLfloat)width / (GLfloat)height, 0.01, 100.0);
    glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 20.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key) {
        case 'e':
        case 'E':
            break;
        case 'p':
        case 'P':
            break;
        case 27:
            exit(0);
        default:
            break;
    }
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Tarea 3");
    glInit();
    glutDisplayFunc(display);
    glutIdleFunc(idleFunc);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}

