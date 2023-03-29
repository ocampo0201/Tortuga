#include<gl/glut.h>
void DibujarTortuga() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.1, 0.0, 0.1);
	glBegin(GL_POLYGON);//Pata morada
	glVertex2i(550, 90);
	glVertex2i(515, 65);
	glVertex2i(535, 30);
	glVertex2i(560, 30);
	glVertex2i(580, 50);
	glEnd();

	glColor3f(1, 0.1, 0.1);
	glBegin(GL_POLYGON);//Cola roja
	glVertex2i(455, 90);
	glVertex2i(445, 65);
	glVertex2i(480, 30);
	glVertex2i(515, 65);
	glVertex2i(505, 90);
	glEnd();

	glColor3f(0.1, 0.0, 0.1);
	glBegin(GL_POLYGON);//Pata morada
	glVertex2i(425, 30);
	glVertex2i(445, 65);
	glVertex2i(410, 90);
	glVertex2i(380, 50);
	glVertex2i(400, 30);
	glEnd();

	glColor3f(0.0, 1.0, 0.1);
	glBegin(GL_POLYGON);//Pata verde
	glVertex2i(505, 90);
	glVertex2i(515, 65);
	glVertex2i(550, 90);
	glVertex2i(525, 120);
	glEnd();

	glColor3f(0.0, 1.0, 0.1);
	glBegin(GL_POLYGON);//pata verde
	glVertex2i(410, 90);
	glVertex2i(445, 65);
	glVertex2i(455, 90);
	glVertex2i(430, 120);
	glEnd();

	glColor3f(1.1, 1.1, 0.0);
	glBegin(GL_POLYGON);//Caparazon centro inferior amarillo 
	glVertex2i(525, 120);
	glVertex2i(505, 90);
	glVertex2i(455, 90);
	glVertex2i(430, 120);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);//lateral blanco
	glVertex2i(410, 155);
	glVertex2i(375, 160);
	glVertex2i(410, 90);
	glVertex2i(430, 120);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);//lateral blanco
	glVertex2i(580, 160);
	glVertex2i(545, 155);
	glVertex2i(525, 120);
	glVertex2i(550, 90);
	glEnd();

	glColor3f(1.1, 0.1, 0.1);
	glBegin(GL_POLYGON);//centro caparazon rojo
	glVertex2i(410, 155);
	glVertex2i(430, 190);
	glVertex2i(525, 190);
	glVertex2i(545, 155);
	glVertex2i(525, 120);
	glVertex2i(430, 120);
	glEnd();

	glColor3f(0.0, 0.1, 0.0);
	glBegin(GL_POLYGON);//lateral verde marron
	glVertex2i(545, 155);
	glVertex2i(580, 160);
	glVertex2i(550, 240);
	glVertex2i(525, 190);
	glEnd();

	glColor3f(0.0, 0.1, 0.0);
	glBegin(GL_POLYGON);//lateral verde marron
	glVertex2i(410, 155);
	glVertex2i(375, 160);
	glVertex2i(405, 240);
	glVertex2i(430, 190);
	glEnd();

	glColor3f(0.1, 1.0, 1.0);
	glBegin(GL_POLYGON);//caparazon centro superior celeste
	glVertex2i(420, 210);
	glVertex2i(440, 225);
	glVertex2i(515, 225);
	glVertex2i(535, 210);
	glVertex2i(525, 190);
	glVertex2i(430, 190);
	glEnd();

	glColor3f(1.1, 0.0, 0.0);
	glBegin(GL_POLYGON);//frente de caparazon rojo
	glVertex2i(550, 240);
	glVertex2i(520, 260);
	glVertex2i(515, 225);
	glVertex2i(535, 210);
	glEnd();

	glColor3f(1.1, 0.0, 0.0);
	glBegin(GL_POLYGON);//frente de caparazon rojo
	glVertex2i(435, 260);
	glVertex2i(405, 240);
	glVertex2i(420, 210);
	glVertex2i(440, 225);
	glEnd();

	glColor3f(1, 0.1, 0.5);
	glBegin(GL_POLYGON);//Frente de caparazon color rosa
	glVertex2i(480, 280);
	glVertex2i(435, 260);
	glVertex2i(440, 225);
	glVertex2i(515, 225);
	glVertex2i(520, 260);
	glEnd();

	glColor3f(0.1, 0.1, 1.1);
	glBegin(GL_POLYGON);//aleta azul marino inicio
	glVertex2i(620, 290);
	glVertex2i(560, 290);
	glVertex2i(520, 260);
	glVertex2i(550, 240);
	glEnd();

	glColor3f(1.1, 0.0, 1.0);
	glBegin(GL_TRIANGLES);//triangulo aleta purpura
	glVertex2i(620, 290);
	glVertex2i(630, 240);
	glVertex2i(550, 240);
	glEnd();

	glColor3f(0.1, 1.0, 0.0);
	glBegin(GL_POLYGON);//aleta final verde fosforesente
	glVertex2i(620, 290);
	glVertex2i(630, 240);
	glVertex2i(660, 200);
	glVertex2i(650, 260);
	glEnd();

	glColor3f(0.1, 0.1, 1.1);
	glBegin(GL_POLYGON);//aleta azul marino inicio
	glVertex2i(400, 290);
	glVertex2i(335, 290);
	glVertex2i(405, 240);
	glVertex2i(435, 260);
	glEnd();

	glColor3f(1.1, 0.0, 1.0);
	glBegin(GL_TRIANGLES);//triangulo aleta purpura
	glVertex2i(335, 290);
	glVertex2i(325, 240);
	glVertex2i(405, 240);
	glEnd();

	glColor3f(0.1, 1.0, 0.0);
	glBegin(GL_POLYGON);//aleta final verde fosforesente
	glVertex2i(335, 290);
	glVertex2i(325, 240);
	glVertex2i(295, 200);
	glVertex2i(305, 260);
	glEnd();

	glColor3f(1, 1.5, 0.5);
	glBegin(GL_POLYGON);//Cabeza color piel
	glVertex2i(480, 330);
	glVertex2i(450, 310);
	glVertex2i(455, 270);
	glVertex2i(480, 280);
	glVertex2i(500, 270);
	glVertex2i(505, 310);

	glEnd();
	glFlush();

}
void IniciarConfiguracion() {
	glClearColor(.5, .8, .8, 0.5);//Fondo
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(3.0);
	glOrtho(0, 800, 0, 600, 1, -1);
}
int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("TORTUGA.5");
	glutDisplayFunc(DibujarTortuga);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}