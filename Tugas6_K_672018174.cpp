#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void initial();
void display();
void rumah();
void kabin();
void kursi();
void meja();
void lemari();
void kasur();
void keyboard(unsigned char, int, int);
void mouse(int button, int size, int x, int y);
void mouseMotion(int x, int y);
void size(int, int);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(350, 30);
	glutCreateWindow("ANDREAS KRISNA NUGRAHA - 672018174");
	initial();
	glutReshapeFunc(size);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);
	glutMainLoop();
	return 0;
}

void initial(){
	glClearColor(0,0,0,0);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);  
	glEnable(GL_DEPTH_TEST);	
	is_depth = 1;
	glMatrixMode(GL_MODELVIEW);
	glLineWidth(4.0);
}

void meja(){
	//meja
	glBegin(GL_QUADS);
	glColor3f(0.15, 0.05, 0.0);
	glVertex3f(-37.0, -40.0, -10.0);
	glVertex3f(9.0, -40.0, -10.0);
	glVertex3f(9.0, -40.0, -30.0);
	glVertex3f(-37.0, -40.0, -30.0);
	
	glVertex3f(-37.0, -35.0, -10.0);
	glVertex3f(9.0, -35.0, -10.0);
	glVertex3f(9.0, -35.0, -30.0);
	glVertex3f(-37.0, -35.0, -30.0);
	
	glVertex3f(-37.0, -40.0, -10.0);
	glVertex3f(-37.0, -40.0, -30.0);
	glVertex3f(-37.0, -35.0, -30.0);
	glVertex3f(-37.0, -35.0, -10.0);
	
	glVertex3f(9.0, -40.0, -10.0);
	glVertex3f(9.0, -40.0, -30.0);
	glVertex3f(9.0, -35.0, -30.0);
	glVertex3f(9.0, -35.0, -10.0);
	
	glVertex3f(-37.0, -35.0, -10.0);
	glVertex3f(9.0, -35.0, -10.0);
	glVertex3f(9.0, -40.0, -10.0);
	glVertex3f(-37.0, -40.0, -10.0);
	
	glVertex3f(-37.0, -35.0, -30.0);
	glVertex3f(9.0, -35.0, -30.0);
	glVertex3f(9.0, -40.0, -30.0);
	glVertex3f(-37.0, -40.0, -30.0);
	
	//kaki meja
	glVertex3f(-30.0, -40.0, -10.0);
	glVertex3f(-30.0, -40.0, -30.0);
	glVertex3f(-30.0, -50.0, -30.0);
	glVertex3f(-30.0, -50.0, -10.0);
	
	glVertex3f(-25.0, -40.0, -10.0);
	glVertex3f(-25.0, -40.0, -30.0);
	glVertex3f(-25.0, -50.0, -30.0);
	glVertex3f(-25.0, -50.0, -10.0);
	
	glVertex3f(-30.0, -40.0, -10.0);
	glVertex3f(-30.0, -50.0, -10.0);
	glVertex3f(-25.0, -50.0, -10.0);
	glVertex3f(-25.0, -40.0, -10.0);
	
	glVertex3f(-30.0, -40.0, -30.0);
	glVertex3f(-30.0, -50.0, -30.0);
	glVertex3f(-25.0, -50.0, -30.0);
	glVertex3f(-25.0, -40.0, -30.0);
	
	glVertex3f(-30.0, -49.0, -10.0);
	glVertex3f(-30.0, -49.0, -30.0);
	glVertex3f(-25.0, -49.0, -30.0);
	glVertex3f(-25.0, -49.0, -10.0);
	
	glVertex3f(2.0, -40.0, -10.0);
	glVertex3f(2.0, -40.0, -30.0);
	glVertex3f(2.0, -50.0, -30.0);
	glVertex3f(2.0, -50.0, -10.0);
	
	glVertex3f(-3.0, -40.0, -10.0);
	glVertex3f(-3.0, -40.0, -30.0);
	glVertex3f(-3.0, -50.0, -30.0);
	glVertex3f(-3.0, -50.0, -10.0);
	
	glVertex3f(2.0, -40.0, -10.0);
	glVertex3f(2.0, -50.0, -10.0);
	glVertex3f(-3.0, -50.0, -10.0);
	glVertex3f(-3.0, -40.0, -10.0);
	
	glVertex3f(2.0, -40.0, -30.0);
	glVertex3f(2.0, -50.0, -30.0);
	glVertex3f(-3.0, -50.0, -30.0);
	glVertex3f(-3.0, -40.0, -30.0);
	
	glVertex3f(2.0, -49.0, -10.0);
	glVertex3f(2.0, -49.0, -30.0);
	glVertex3f(-3.0, -49.0, -30.0);
	glVertex3f(-3.0, -49.0, -10.0);
	glEnd();
}

void kursi(){
	//sofa
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.25, 0.5);
	glVertex3f(10.0, -50.0, -69.2);
	glVertex3f(10.0, -40.0, -69.2);
	glVertex3f(10.0, -40.0, -45.2);
	glVertex3f(10.0, -50.0, -45.2);
	
	glVertex3f(-40.0, -50.0, -69.2);
	glVertex3f(-40.0, -40.0, -69.2);
	glVertex3f(-40.0, -40.0, -45.2);
	glVertex3f(-40.0, -50.0, -45.2);
	
	glVertex3f(10.0, -50.0, -45.2);
	glVertex3f(10.0, -40.0, -45.2);
	glVertex3f(-40.0, -40.0, -45.2);
	glVertex3f(-40.0, -50.0, -45.2);
	
	glVertex3f(10.0, -50.0, -69.2);
	glVertex3f(10.0, -40.0, -69.2);
	glVertex3f(-40.0, -40.0, -69.2);
	glVertex3f(-40.0, -50.0, -69.2);
	
	glVertex3f(10.0, -49.9, -69.2);
	glVertex3f(-40.0, -49.9, -69.2);
	glVertex3f(-40.0, -49.9, -45.2);
	glVertex3f(10.0, -49.9, -45.2);
	
	glVertex3f(10.0, -40.0, -69.2);
	glVertex3f(-40.0, -40.0, -69.2);
	glVertex3f(-40.0, -40.0, -45.2);
	glVertex3f(10.0, -40.0, -45.2);
	
	//sandaran sofa
	glVertex3f(10.0, -40.0, -69.2);
	glVertex3f(10.0, -25.0, -69.2);
	glVertex3f(-40.0, -25.0, -69.2);
	glVertex3f(-40.0, -40.0, -69.2);
	
	glVertex3f(10.0, -25.0, -69.2);
	glVertex3f(10.0, -25.0, -65.2);
	glVertex3f(-40.0, -25.0, -66.2);
	glVertex3f(-40.0, -25.0, -69.2);
	
	glVertex3f(10.0, -25.0, -65.2);
	glVertex3f(-40.0, -25.0, -65.2);
	glVertex3f(-40.0, -40.0, -60.2);
	glVertex3f(10.0, -40.0, -60.2);
	
	glVertex3f(10.0, -25.0, -69.2);
	glVertex3f(10.0, -25.0, -65.2);
	glVertex3f(10.0, -40.0, -60.2);
	glVertex3f(10.0, -40.0, -69.2);
	
	glVertex3f(-40.0, -25.0, -69.2);
	glVertex3f(-40.0, -25.0, -65.2);
	glVertex3f(-40.0, -40.0, -60.2);
	glVertex3f(-40.0, -40.0, -69.2);
	
	//samping sofa
	glVertex3f(10.0, -40.0, -69.2);
	glVertex3f(10.0, -35.0, -69.2);
	glVertex3f(10.0, -35.0, -45.2);
	glVertex3f(10.0, -40.0, -45.2);
	
	glVertex3f(2.0, -40.0, -69.2);
	glVertex3f(2.0, -35.0, -69.2);
	glVertex3f(2.0, -35.0, -45.2);
	glVertex3f(2.0, -40.0, -45.2);
	
	glVertex3f(10.0, -35.0, -69.2);
	glVertex3f(2.0, -35.0, -69.2);
	glVertex3f(2.0, -35.0, -45.2);
	glVertex3f(10.0, -35.0, -45.2);
	
	glVertex3f(10.0, -35.0, -45.2);
	glVertex3f(2.0, -35.0, -45.2);
	glVertex3f(2.0, -40.0, -45.2);
	glVertex3f(10.0, -40.0, -45.2);
	
	glVertex3f(-40.0, -40.0, -69.2);
	glVertex3f(-40.0, -35.0, -69.2);
	glVertex3f(-40.0, -35.0, -45.2);
	glVertex3f(-40.0, -40.0, -45.2);
	
	glVertex3f(-32.0, -40.0, -69.2);
	glVertex3f(-32.0, -35.0, -69.2);
	glVertex3f(-32.0, -35.0, -45.2);
	glVertex3f(-32.0, -40.0, -45.2);
	
	glVertex3f(-40.0, -35.0, -69.2);
	glVertex3f(-32.0, -35.0, -69.2);
	glVertex3f(-32.0, -35.0, -45.2);
	glVertex3f(-40.0, -35.0, -45.2);
	
	glVertex3f(-40.0, -35.0, -45.2);
	glVertex3f(-32.0, -35.0, -45.2);
	glVertex3f(-32.0, -40.0, -45.2);
	glVertex3f(-40.0, -40.0, -45.2);
	glEnd();
}

void kasur(){
	glBegin(GL_QUADS);
	glColor3f(0.35, 0.0, 0.0);
	
	//deket dinding
	glVertex3f(115.0, -50.0, 9.0);
	glVertex3f(80.0, -50.0, 9.0);
	glVertex3f(80.0, -15.0, 9.0);
	glVertex3f(115.0, -15.0, 9.0);
	
	glVertex3f(115.0, -50.0, 9.0);
	glVertex3f(115.0, -50.0, 0.0);
	glVertex3f(115.0, -15.0, 0.0);
	glVertex3f(115.0, -15.0, 9.0);
	
	glVertex3f(80.0, -50.0, 9.0);
	glVertex3f(80.0, -50.0, 0.0);
	glVertex3f(80.0, -15.0, 0.0);
	glVertex3f(80.0, -15.0, 9.0);
	
	glVertex3f(115.0, -50.0, 0.0);
	glVertex3f(80.0, -50.0, 0.0);
	glVertex3f(80.0, -15.0, 0.0);
	glVertex3f(115.0, -15.0, 0.0);
	
	glVertex3f(115.0, -49.0, 9.0);
	glVertex3f(80.0, -49.0, 9.0);
	glVertex3f(80.0, -49.0, 0.0);
	glVertex3f(115.0, -49.0, 0.0);
	
	glVertex3f(115.0, -15.0, 9.0);
	glVertex3f(80.0, -15.0, 9.0);
	glVertex3f(80.0, -15.0, 0.0);
	glVertex3f(115.0, -15.0, 0.0);
	
	//deket lantai
	glVertex3f(115.0, -50.0, 0.0);
	glVertex3f(115.0, -40.0, 0.0);
	glVertex3f(115.0, -40, -45.0);
	glVertex3f(115.0, -50.0, -45.0);
	
	glVertex3f(80.0, -50.0, 0.0);
	glVertex3f(80.0, -40.0, 0.0);
	glVertex3f(80.0, -40.0, -45.0);
	glVertex3f(80.0, -50.0, -45.0);
	
	glVertex3f(115.0, -50.0, -45.0);
	glVertex3f(115.0, -40.0, -45.0);
	glVertex3f(80.0, -40.0, -45.0);
	glVertex3f(80.0, -50.0, -45.0);
	
	glVertex3f(115.0, -49.0, -45.0);
	glVertex3f(115.0, -49.0, 0.0);
	glVertex3f(80.0, -49.0, 0.0);
	glVertex3f(80.0, -49.0, -45.0);
	
	glVertex3f(115.0, -40.0, -45.0);
	glVertex3f(115.0, -40.0, 0.0);
	glVertex3f(80.0, -40.0, 0.0);
	glVertex3f(80.0, -40.0, -45.0);
	
	//kasur
	glColor3f(0.9, 0.9, 0.9);
	glVertex3f(115.0, -39.9, -45.0);
	glVertex3f(115.0, -39.9, -0.9);
	glVertex3f(80.0, -39.9, -0.9);
	glVertex3f(80.0, -39.9, -45.0);
	
	glVertex3f(115.0, -30.0, -45.0);
	glVertex3f(115.0, -30.0, -0.9);
	glVertex3f(80.0, -30.0, -0.9);
	glVertex3f(80.0, -30.0, -45.0);
	
	glVertex3f(115.0, -39.9, -45.0);
	glVertex3f(115.0, -30.0, -45.0);
	glVertex3f(80.0, -30.0, -45.0);
	glVertex3f(80.0, -39.9, -45.0);
	
	glVertex3f(115.0, -39.9, -45.0);
	glVertex3f(115.0, -30.0, -45.0);
	glVertex3f(115.0, -30.0, -0.9);
	glVertex3f(115.0, -39.9, -0.9);
	
	glVertex3f(80.0, -39.9, -45.0);
	glVertex3f(80.0, -30.0, -45.0);
	glVertex3f(80.0, -30.0, -0.9);
	glVertex3f(80.0, -39.9, -0.9);
	
	glVertex3f(115.0, -39.9, -0.9);
	glVertex3f(115.0, -30.0, -0.9);
	glVertex3f(80.0, -30.0, -0.9);
	glVertex3f(80.0, -39.9, -0.9);
	glEnd();
}

void kabin(){
	//tv
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(85.0, -10.0, -69.2);
	glVertex3f(110.0, -10.0, -69.2);
	glVertex3f(110.0, 10.0, -69.2);
	glVertex3f(85.0, 10.0, -69.2);
	
	glVertex3f(85.0, -10.0, -66.2);
	glVertex3f(110.0, -10.0, -66.2);
	glVertex3f(110.0, 10.0, -66.2);
	glVertex3f(85.0, 10.0, -66.2);
	
	glVertex3f(110.0, -10.0, -69.2);
	glVertex3f(110.0, 10.0, -69.2);
	glVertex3f(110.0, 10.0, -66.2);
	glVertex3f(110.0, -10.0, -66.2);
	
	glVertex3f(110.0, 10.0, -69.2);
	glVertex3f(85.0, 10.0, -69.2);
	glVertex3f(85.0, 10.0, -66.2);
	glVertex3f(110.0, 10.0, -66.2);
	
	glVertex3f(110.0, -10.0, -69.2);
	glVertex3f(85.0, -10.0, -69.2);
	glVertex3f(85.0, -10.0, -66.2);
	glVertex3f(110.0, -10.0, -66.2);
	
	glVertex3f(85.0, -10.0, -69.2);
	glVertex3f(85.0, 10.0, -69.2);
	glVertex3f(85.0, 10.0, -66.2);
	glVertex3f(85.0, -10.0, -66.2);
	
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(88.0, -8.0, -66.5);
	glVertex3f(108.0, -8.0, -66.5);
	glVertex3f(108.0, 8.0, -66.5);
	glVertex3f(88.0, 8.0, -66.5);
	glEnd();
}

void lemari(){
	//lemari
	glBegin(GL_QUADS);
	glColor3f(0.35, 0.2, 0.0);
	glVertex3f(70.0, -50.0, -69.2);
	glVertex3f(70.0, 10.0, -69.2);
	glVertex3f(70.0, 10.0, -50.2);
	glVertex3f(70.0, -50.0, -50.2);
	
	glVertex3f(40.0, -50.0, -69.2);
	glVertex3f(40.0, 10.0, -69.2);
	glVertex3f(40.0, 10.0, -50.2);
	glVertex3f(40.0, -50.0, -50.2);
	
	glVertex3f(70.0, 10.0, -69.2);
	glVertex3f(40.0, 10.0, -69.2);
	glVertex3f(40.0, 10.0, -50.2);
	glVertex3f(70.0, 10.0, -50.2);
	
	glVertex3f(70.0, -49.0, -69.2);
	glVertex3f(40.0, -49.0, -69.2);
	glVertex3f(40.0, -49.0, -50.2);
	glVertex3f(70.0, -49.0, -50.2);
	
	glVertex3f(70.0, -50.0, -69.2);
	glVertex3f(40.0, -50.0, -69.2);
	glVertex3f(40.0, 10.0, -69.2);
	glVertex3f(70.0, 10.0, -69.2);
	
	glVertex3f(70.0, -50.0, -50.2);
	glVertex3f(40.0, -50.0, -50.2);
	glVertex3f(40.0, 10.0, -50.2);
	glVertex3f(70.0, 10.0, -50.2);
	
	//bonjolan lemari
	glVertex3f(56.0, -50.0, -50.3);
	glVertex3f(56.0, -50.0, -48.3);
	glVertex3f(56.0, 10.0, -48.3);
	glVertex3f(56.0, 10.0, -50.3);
	
	glVertex3f(54.0, -50.0, -50.3);
	glVertex3f(54.0, -50.0, -48.3);
	glVertex3f(54.0, 10.0, -48.3);
	glVertex3f(54.0, 10.0, -50.3);
	
	glVertex3f(56.0, -50.0, -48.3);
	glVertex3f(56.0, 10.0, -48.3);
	glVertex3f(54.0, 10.0, -48.3);
	glVertex3f(54.0, -50.0, -48.3);
	
	glVertex3f(56.0, -49.0, -48.3);
	glVertex3f(56.0, -49.0, -50.3);
	glVertex3f(54.0, -49.0, -50.3);
	glVertex3f(54.0, -49.0, -48.3);
	
	glVertex3f(56.0, 10.0, -48.3);
	glVertex3f(56.0, 10.0, -50.3);
	glVertex3f(54.0, 10.0, -50.3);
	glVertex3f(54.0, 10.0, -48.3);
	glEnd();
}

void rumah(){
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.9, 0.9, 0.7);
	glVertex3f(-40.0, -50.0, 10.0);
	glVertex3f(120.0, -50.0, 10.0);
	glVertex3f(120.0, 30.0, 10.0);
	glVertex3f(-40.0, 30.0, 10.0);
	
	glVertex3f(-40.0, -50.0, 10.0);
	glVertex3f(-40.0, 30.0, 10.0);
	glVertex3f(-40.0, 30.0, 35.0);
	glVertex3f(-40.0, -50.0, 35.0);
	
	glVertex3f(-40.0, 30.0, 35.0);
	glVertex3f(-40.0, -50.0, 35.0);
	glVertex3f(-120.0, -50.0, 35.0);
	glVertex3f(-120.0, 30.0, 35.0);
	glEnd();	
	
	//tiang kiri
	glBegin(GL_QUADS);
	glVertex3f(-30.0, -50.0, 65.0);
	glVertex3f(-15.0, -50.0, 65.0);
	glVertex3f(-15.0, 10.0, 65.0);
	glVertex3f(-30.0, 10.0, 65.0);
	glEnd();
	
	glBegin(GL_QUADS);
	glVertex3f(-30.0, -50.0, 55.0);
	glVertex3f(-15.0, -50.0, 55.0);
	glVertex3f(-15.0, 10.0, 55.0);
	glVertex3f(-30.0, 10.0, 55.0);
	glEnd();
	
	glBegin(GL_QUADS);
	glVertex3f(-30.0, -50.0, 65.0);
	glVertex3f(-30.0, 10.0, 65.0);
	glVertex3f(-30.0, 10.0, 55.0);
	glVertex3f(-30.0, -50.0, 55.0);
	glEnd();
	
	glBegin(GL_QUADS);
	glVertex3f(-15.0, -50.0, 65.0);
	glVertex3f(-15.0, 10.0, 65.0);
	glVertex3f(-15.0, 10.0, 55.0);
	glVertex3f(-15.0, -50.0, 55.0);
	
	glBegin(GL_QUADS);
	glVertex3f(-30.0, -50.0, 55.0);
	glVertex3f(-15.0, -50.0, 55.0);
	glVertex3f(-15.0, -50.0, 65.0);
	glVertex3f(-30.0, -50.0, 65.0);
	glEnd();
	
	//tiang kanan
	glBegin(GL_QUADS);
	glVertex3f(15.0, -50.0, 65.0);
	glVertex3f(30.0, -50.0, 65.0);
	glVertex3f(30.0, 10.0, 65.0);
	glVertex3f(15.0, 10.0, 65.0);
	glEnd();
	
	glBegin(GL_QUADS);
	glVertex3f(15.0, -50.0, 55.0);
	glVertex3f(30.0, -50.0, 55.0);
	glVertex3f(30.0, 10.0, 55.0);
	glVertex3f(15.0, 10.0, 55.0);
	glEnd();
	
	glBegin(GL_QUADS);
	glVertex3f(15.0, -50.0, 65.0);
	glVertex3f(15.0, 10.0, 65.0);
	glVertex3f(15.0, 10.0, 55.0);
	glVertex3f(15.0, -50.0, 55.0);
	glEnd();
	
	glBegin(GL_QUADS);
	glVertex3f(30.0, -50.0, 65.0);
	glVertex3f(30.0, 10.0, 65.0);
	glVertex3f(30.0, 10.0, 55.0);
	glVertex3f(30.0, -50.0, 55.0);
	
	glBegin(GL_QUADS);
	glVertex3f(30.0, -50.0, 55.0);
	glVertex3f(15.0, -50.0, 55.0);
	glVertex3f(15.0, -50.0, 65.0);
	glVertex3f(30.0, -50.0, 65.0);
	glEnd();
	
	//atap depan
	glBegin(GL_POLYGON);
	glVertex3f(-30.0, 10.0, 65.0);
	glVertex3f(-30.0, 30.0, 65.0);
	glVertex3f(0.0, 55.0, 65.0);
	glVertex3f(30.0, 30.0, 65.0);
	glVertex3f(30.0, 10.0, 65.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex3f(-30.0, 10.0, 65.0);
	glVertex3f(-30.0, 30.0, 65.0);
	glVertex3f(-30.0, 30.0, 10.0);
	glVertex3f(-30.0, 10.0, 10.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex3f(30.0, 10.0, 65.0);
	glVertex3f(30.0, 30.0, 65.0);
	glVertex3f(30.0, 30.0, 10.0);
	glVertex3f(30.0, 10.0, 10.0);
	glEnd();
	
	//genteng depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-30.0, 30.0, 75.0);
	glVertex3f(0.0, 55.0, 75.0);
	glVertex3f(0.0, 55.0, 10.0);
	glVertex3f(-30.0, 30.0, 10.0);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(30.0, 30.0, 75.0);
	glVertex3f(0.0, 55.0, 75.0);
	glVertex3f(0.0, 55.0, 10.0);
	glVertex3f(30.0, 30.0, 10.0);
	glEnd();
	
	//pintu
	glBegin(GL_QUADS);
	glColor3f(0.25, 0.1, 0.0);
	glVertex3f(-20.0, -50.0, 10.1);
	glVertex3f(20.0, -50.0, 10.1);
	glVertex3f(20.0, 0.0, 10.1);
	glVertex3f(-20.0, 0.0, 10.1);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3f(0.25, 0.09, 0.0);
	glVertex3f(0.0, -50.0, 10.2);
	glVertex3f(0.0, 0.0, 10.2);
	glEnd();
	
	//jendela kanan
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(30.0, -30.0, 10.1);
	glVertex3f(45.0, -30.0, 10.1);
	glVertex3f(45.0, 0.0, 10.1);
	glVertex3f(30.0, 0.0, 10.1);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3f(0.25, 0.1, 0.0);
	glVertex3f(30.0, -30.0, 10.1);
	glVertex3f(45.0, -30.0, 10.1);
	glVertex3f(45.0, 0.0, 10.1);
	glVertex3f(30.0, 0.0, 10.1);
	glEnd();
	
	//jendela kamar
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(70.0, -30.0, 10.1);
	glVertex3f(100.0, -30.0, 10.1);
	glVertex3f(100.0, 0.0, 10.1);
	glVertex3f(70.0, 0.0, 10.1);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3f(0.25, 0.1, 0.0);
	glVertex3f(70.0, -30.0, 10.1);
	glVertex3f(100.0, -30.0, 10.1);
	glVertex3f(100.0, 0.0, 10.1);
	glVertex3f(70.0, 0.0, 10.1);
	glEnd();
	
	//pintu garasi
	glBegin(GL_QUADS);
	glColor3f(0.25, 0.1, 0.0);
	glVertex3f(-50.0, 0.0, 35.1);
	glVertex3f(-50.0, -50.0, 35.1);
	glVertex3f(-110.0, -50.0, 35.1);
	glVertex3f(-110.0, 0.0, 35.1);
	glEnd();
	
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.9, 0.9, 0.7);
	glVertex3f(-120.0, -50.0, -70.0);
	glVertex3f(120.0, -50.0, -70.0);
	glVertex3f(120.0, 30.0, -70.0);
	glVertex3f(-120.0, 30.0, -70.0);
	glEnd();
	
	//kanan
	glBegin(GL_QUADS);
	glColor3f(0.9, 0.9, 0.7);
	glVertex3f(120.0, -50.0, -70.0);
	glVertex3f(120.0, 30.0, -70.0);
	glVertex3f(120.0, 30.0, 70.0);
	glVertex3f(120.0, -50.0, 70.0);
	glEnd();
	
	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.9, 0.9, 0.7);
	glVertex3f(-120.0, -50.0, -70.0);
	glVertex3f(-120.0, 30.0, -70.0);
	glVertex3f(-120.0, 30.0, 35.0);
	glVertex3f(-120.0, -50.0, 35.0);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(-120.0, 30.0, 35.0);
	glVertex3f(-120.0, -50.0, 35.0);
	glVertex3f(-120.0, -50.0, 70.0);
	glVertex3f(-120.0, 30.0, 70.0);
	glEnd();
	
	//atas
	glBegin(GL_TRIANGLES);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(120.0, 30.0, 45.0);
	glVertex3f(120.0, 30.0, -70.0);
	glVertex3f(120.0, 70.0, -15.0);
	
	glVertex3f(-120.0, 30.0, 45.0);
	glVertex3f(-120.0, 30.0, -70.0);
	glVertex3f(-120.0, 70.0, -15.0);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(120.0, 70.0, -15.0);
	glVertex3f(-120.0, 70.0, -15.0);
	glVertex3f(-120.0, 30.0, 45.0);
	glVertex3f(120.0, 30.0, 45.0);
	
	glVertex3f(120.0, 70.0, -15.0);
	glVertex3f(-120.0, 70.0, -15.0);
	glVertex3f(-120.0, 30.0, -70.0);
	glVertex3f(120.0, 30.0, -70.0);
	glEnd();
	
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.25, 0.1, 0.0);
	glVertex3f(-40.0, -50.0, -70.0);
	glVertex3f(-120.0, -50.0, -70.0);
	glVertex3f(-120.0, -50.0, 35.0);
	glVertex3f(-40.0, -50.0, 35.0);
	
	glVertex3f(120.0, -50.0, -70.0);
	glVertex3f(-40.0, -50.0, -70.0);
	glVertex3f(-40.0, -50.0, 10.0);
	glVertex3f(120.0, -50.0, 10.0);
	glEnd();
}

void display(){
	glPushMatrix();
		if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
		glClear(GL_COLOR_BUFFER_BIT);	
	
	glRotatef(xrot, 1.0, 0.0, 0.0);
	glRotatef(yrot, 0.0, 1.0, 0.0);
	rumah();
	kabin();
	lemari();
	kasur();
	kursi();
	meja();
	glPopMatrix();
	glutSwapBuffers();
}
	
void keyboard(unsigned char key, int bx, int by){
	switch(key){
		//maju
		case 'w':
		case 'W':
			glTranslatef(0, 0, 5);
			break;
		
		//kanan
		case 'd':
		case 'D':
			glTranslatef(5, 0, 0);
			break;
		
		//mundur
		case 's':
		case 'S':
			glTranslatef(0, 0, -5);
			break;
		
		//kiri
		case 'a':
		case 'A':
			glTranslatef(-5, 0, 0);
			break;
		
		//atas
		case '9':
			glTranslatef(0, 5, 0);
			break;
		
		//bawah
		case '0':
			glTranslatef(0, -5, 0);
			break;
			
		//rotasi bawah
		case 'k':
		case 'K':
			glRotatef(3, 1, 0, 0);
			break;
		
		//rotas atas
		case 'i':
		case 'I':
			glRotatef(-3, 1, 0, 0);
			break;
		
		//rotasi kanan
		case 'l':
		case 'L':
			glRotatef(3, 0, 1, 0);
			break;
			
		//rotasi kiri
		case 'j':
		case 'J':
			glRotatef(-3, 0, 1, 0);
			break;
			
		//rotasi miring kiri
		case '7':
			glRotatef(3, 0, 0, 1);
			break;
			
		//rotasi miring kanan
		case '8':
			glRotatef(-3, 0, 0, 1);
			break;
			
		//masuk ruangan
		case '5':
			if(is_depth){
				is_depth=0;
				glDisable(GL_DEPTH_TEST);
			}
			else{
				is_depth=1;
				glEnable(GL_DEPTH_TEST);
			}
	}
	display();
}

void mouse(int button, int state, int x, int y){
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		mouseDown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	}
	
	else
	mouseDown = false;
}

void mouseMotion(int x, int y){
	if(mouseDown){
		yrot = x- xdiff;
		xrot = y + ydiff;
		
		glutPostRedisplay();
	}
}

void size(int lebar, int tinggi){
	if(tinggi==0) tinggi = 1;
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(130, lebar/tinggi, 5, 500);
	glTranslatef(0,-5,-150);
	glMatrixMode(GL_MODELVIEW);
}
