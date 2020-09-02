#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>



GLfloat position = 1.2f;
GLfloat position2 = -0.2f;
GLfloat position3 = 2.5f;
GLfloat position4 = 0.0f;
GLfloat position5 = 1.2f;
GLfloat position6 = -1.5f;
GLfloat speed = 0.025f;
GLfloat speed2 = 0.02f;
GLfloat speed3 = 0.01f;
GLfloat speed4 = 0.032f;
GLfloat speed5 = 0.029;
GLfloat a =0.0f;
int r=135;int g=206;int b=250;int n;
int s=127;int e=234;int m=230;
int l=19;int i=30;int h=100;
int k=0,o=0;







void update(int value) {

    if(position > 1.2f)
        position = -2.0f;
    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void updateSun(int value) {

    if(position2 > 0.7f)
        speed2=0.0f;
        else
    position2 += speed2;

	glutPostRedisplay();


	glutTimerFunc(100, updateSun, 0);
}
void updateCloud1(int value) {

    if(position3 > 1.2f)
        position3=-1.8f;
    position3 += speed3;

	glutPostRedisplay();


	glutTimerFunc(100, updateCloud1, 0);
}

void updateSmoke(int value) {

    if(position4 > 0.3f)
        position4 = 0.0f;
    position4 += speed3;

	glutPostRedisplay();


	glutTimerFunc(100, updateSmoke, 0);
}

void updateCar(int value) {

    if(position5 > 1.2f)
        position5 = -2.0f;
    position5 += speed4;

	glutPostRedisplay();


	glutTimerFunc(100, updateCar, 0);
}

void updateCar2(int value) {

    if(position6 < -2.0)
        position6 = 1.2f;
    position6 -= speed5;

	glutPostRedisplay();


	glutTimerFunc(100, updateCar2, 0);
}

void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    speed= 0.0f;
    break;
case 'w':
    speed += 0.01f;
    break;
    case 's':
    speed -= 0.01f;
    break;

case 'n':
     r=0;
     g=0;
     b=128;
     position2=-0.2;
     speed2=0.02;
     n=255;
     s=0;
     e=105;
     m=148;
     l=255;
     i=255;
     h=0;
     k=255;
     o=255;
     break;


case 'd':
     r=135;
     g=206;
     b=250;
     position2=-0.2;
     speed2=0.02;
     n=0;
     s=127;
     e=234;
     m=230;
     l=19;
     i=30;
     h=100;
     k=0;
     o=0;



     break;




glutPostRedisplay();


	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();



glTranslatef(a,0.0f, 0.0f);

 glBegin(GL_POLYGON);//SKY

   glColor3ub(r,g,b);
   glVertex2f(1.0f, 0.0f);
   glVertex2f(1.0f, 1.0f);
   glVertex2f(-1.0f, 1.0f);
   glVertex2f(-1.0f, 0.0f);

   glEnd();

   glPushMatrix();

glTranslatef(0.3f,position2, 0.0f);//sun moon
glColor3ub(255,255,n);
glutSolidSphere(0.12,30,15);

glPopMatrix();

glBegin(GL_POLYGON);//Mountains 1

   glColor3ub(96,142,107);
   glVertex2f(1.2f, 0.0f);
   glVertex2f(0.97f, 0.4f);
   glVertex2f(0.8f, 0.0f);
  glEnd();
glBegin(GL_POLYGON);//Mountains 1

   glColor3ub(96,142,107);
   glVertex2f(1.0f, 0.0f);
   glVertex2f(0.8f, 0.6f);
   glVertex2f(0.6f, 0.0f);
  glEnd();

  glBegin(GL_POLYGON);//Mountains 2
   glColor3ub(96,142,107);
   glVertex2f(0.7f, 0.0f);
   glVertex2f(0.55f, 0.4f);
   glVertex2f(0.4f, 0.0f);

   glEnd();

   glBegin(GL_POLYGON);//Mountains small 3

   glColor3ub(96,142,107);
   glVertex2f(.45f, 0.0f);
   glVertex2f(0.35f, 0.3f);
   glVertex2f(0.25f, 0.0f);
  glEnd();

glBegin(GL_POLYGON);//Mountains 4

   glColor3ub(96,142,107);
   glVertex2f(.3f, 0.0f);
   glVertex2f(0.15f, 0.4f);
   glVertex2f(0.0f, 0.0f);
  glEnd();

  glBegin(GL_POLYGON);//Mountains 5

   glColor3ub(96,142,107);
   glVertex2f(.1f, 0.0f);
   glVertex2f(-.05f, 0.45f);
   glVertex2f(-.2f, 0.0f);
  glEnd();


  glBegin(GL_POLYGON);//Mountains 5

   glColor3ub(96,142,107);
   glVertex2f(-.055f, 0.0f);
   glVertex2f(-0.325f, 0.6f);
   glVertex2f(-.55f, 0.0f);
  glEnd();



  glBegin(GL_POLYGON);//Mountains 5

   glColor3ub(96,142,107);
   glVertex2f(-.45f, 0.0f);
   glVertex2f(-0.6f, 0.4f);
   glVertex2f(-.75f, 0.0f);
  glEnd();

    glBegin(GL_POLYGON);//Mountains 5

   glColor3ub(96,142,107);
   glVertex2f(-.65f, 0.0f);
   glVertex2f(-0.8f, 0.45f);
   glVertex2f(-.95f, 0.0f);
  glEnd();
    glBegin(GL_POLYGON);//Mountains 5

   glColor3ub(96,142,107);
   glVertex2f(-.8f, 0.0f);
   glVertex2f(-0.95f, 0.55f);
   glVertex2f(-1.1f, 0.0f);
  glEnd();



glBegin(GL_POLYGON);//SEA

   glColor3ub(s,e,m);
   glVertex2f(1.0f, -0.0f);
   glVertex2f(1.0f, -1.0f);
   glVertex2f(-1.0f, -1.0f);
   glVertex2f(-1.0f, -0.0f);

   glEnd();


glPushMatrix();
   glBegin(GL_POLYGON);//road

   glColor3ub(80,80,80);
   glVertex2f(1.0f, -0.15f);
   glVertex2f(1.0f, 0.0f);
   glVertex2f(-1.0f, 0.0f);
   glVertex2f(-1.0f, -0.15f);

   glEnd();

     glBegin(GL_POLYGON);//road white

   glColor3ub(255,255,255);
   glVertex2f(1.0f, -0.08f);
   glVertex2f(1.0f, -0.0775f);
   glVertex2f(-1.0f, -0.0775f);
   glVertex2f(-1.0f, -0.08f);

   glEnd();
   glBegin(GL_POLYGON);//lamp

   glColor3ub(210,210,210);
   glVertex2f(.910f, 0.15f);
   glVertex2f(.910f, 0.0f);
   glVertex2f(.9f, 0.0f);
   glVertex2f(.9f, 0.15f);

   glEnd();

   glBegin(GL_POLYGON);//lamp

   glColor3ub(k,o,10);
   glVertex2f(.880f, 0.15f);
   glVertex2f(.90f, 0.2f);
   glVertex2f(.91f, 0.2f);
   glVertex2f(.93f, 0.15f);

   glEnd();

   glBegin(GL_POLYGON);//lamp

   glColor3ub(210,210,210);
   glVertex2f(.610f, 0.15f);
   glVertex2f(.610f, 0.0f);
   glVertex2f(.6f, 0.0f);
   glVertex2f(.6f, 0.15f);

   glEnd();

   glBegin(GL_POLYGON);//lamp

   glColor3ub(k,o,10);
   glVertex2f(.580f, 0.15f);
   glVertex2f(.60f, 0.2f);
   glVertex2f(.61f, 0.2f);
   glVertex2f(.63f, 0.15f);

   glEnd();

     glBegin(GL_POLYGON);//lamp

   glColor3ub(210,210,210);
   glVertex2f(.310f, 0.15f);
   glVertex2f(.310f, 0.0f);
   glVertex2f(.3f, 0.0f);
   glVertex2f(.3f, 0.15f);

   glEnd();

   glBegin(GL_POLYGON);//lamp

   glColor3ub(k,o,10);
   glVertex2f(.280f, 0.15f);
   glVertex2f(.30f, 0.2f);
   glVertex2f(.31f, 0.2f);
   glVertex2f(.33f, 0.15f);

   glEnd();

        glBegin(GL_POLYGON);//lamp

   glColor3ub(210,210,210);
   glVertex2f(.010f, 0.15f);
   glVertex2f(.010f, 0.0f);
   glVertex2f(.0f, 0.0f);
   glVertex2f(.0f, 0.15f);

   glEnd();

   glBegin(GL_POLYGON);//lamp

   glColor3ub(k,o,10);
   glVertex2f(-.0180f, 0.15f);
   glVertex2f(.00f, 0.2f);
   glVertex2f(.01f, 0.2f);
   glVertex2f(.03f, 0.15f);

   glEnd();

       glBegin(GL_POLYGON);//lamp

   glColor3ub(210,210,210);
   glVertex2f(-.310f, 0.15f);
   glVertex2f(-.310f, 0.0f);
   glVertex2f(-.30f, 0.0f);
   glVertex2f(-.30f, 0.15f);

   glEnd();

   glBegin(GL_POLYGON);//lamp

   glColor3ub(k,o,10);
    glVertex2f(-.280f, 0.15f);
   glVertex2f(-.30f, 0.2f);
   glVertex2f(-.31f, 0.2f);
   glVertex2f(-.33f, 0.15f);

   glEnd();

   glBegin(GL_POLYGON);//lamp

   glColor3ub(210,210,210);
   glVertex2f(-.610f, 0.15f);
   glVertex2f(-.610f, 0.0f);
   glVertex2f(-.60f, 0.0f);
   glVertex2f(-.60f, 0.15f);

   glEnd();

   glBegin(GL_POLYGON);//lamp

   glColor3ub(k,o,10);
    glVertex2f(-.580f, 0.15f);
   glVertex2f(-.60f, 0.2f);
   glVertex2f(-.61f, 0.2f);
   glVertex2f(-.63f, 0.15f);

   glEnd();

      glBegin(GL_POLYGON);//lamp

   glColor3ub(210,210,210);
   glVertex2f(-.910f, 0.15f);
   glVertex2f(-.910f, 0.0f);
   glVertex2f(-.90f, 0.0f);
   glVertex2f(-.90f, 0.15f);

   glEnd();

   glBegin(GL_POLYGON);//lamp

   glColor3ub(k,o,10);
    glVertex2f(-.880f, 0.15f);
   glVertex2f(-.90f, 0.2f);
   glVertex2f(-.91f, 0.2f);
   glVertex2f(-.93f, 0.15f);

   glEnd();

   glPopMatrix();

glPushMatrix();
glTranslatef(position5,-0.01f, 0.0f);
   //car
    glPushMatrix();
      glBegin(GL_POLYGON);// white

   glColor3ub(44, 50, 135);
   glVertex2f(0.0f, -0.025f);
   glVertex2f(0.0f, -0.045f);
   glVertex2f(.085f, -0.045f);
   glVertex2f(.085f, -0.025f);

   glEnd();
      glBegin(GL_POLYGON);// white

   glColor3ub(44, 50, 135);
   glVertex2f(0.03f, -0.00650f);
   glVertex2f(0.02f, -0.045f);
   glVertex2f(.075f, -0.045f);
   glVertex2f(.065f, -0.0065f);

   glEnd();
         glBegin(GL_POLYGON);// glass

   glColor3ub(k, o, 10);
  glVertex2f(0.065f, -0.00650f);
   glVertex2f(0.075f, -0.025f);
   glVertex2f(.04f, -0.025f);
   glVertex2f(.04f, -0.0065f);

   glEnd();

   glPopMatrix();


     glPushMatrix();

glTranslatef(0.025f,-0.041f, 0.0f);//tyres
glColor3ub(0,0,0);
glutSolidSphere(0.01,30,15);

glPopMatrix();
     glPushMatrix();

glTranslatef(0.065f,-0.041f, 0.0f);//tyres
glColor3ub(0,0,0);
glutSolidSphere(0.01,30,15);

glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(position6,-0.08f, 0.0f);
   //car
    glPushMatrix();
      glBegin(GL_POLYGON);// white

   glColor3ub(195, 48, 61);
   glVertex2f(0.0f, -0.025f);
   glVertex2f(0.0f, -0.045f);
   glVertex2f(.085f, -0.045f);
   glVertex2f(.085f, -0.025f);

   glEnd();
      glBegin(GL_POLYGON);// white

   glColor3ub(195, 48, 61);
   glVertex2f(0.03f, -0.00650f);
   glVertex2f(0.02f, -0.045f);
   glVertex2f(.075f, -0.045f);
   glVertex2f(.065f, -0.0065f);

   glEnd();
         glBegin(GL_POLYGON);// glass

   glColor3ub(k, o, 10);
  glVertex2f(0.03f, -0.00650f);
   glVertex2f(0.02f, -0.025f);
   glVertex2f(.04f, -0.025f);
   glVertex2f(.04f, -0.0065f);

   glEnd();

   glPopMatrix();


     glPushMatrix();

glTranslatef(0.025f,-0.041f, 0.0f);//tyres
glColor3ub(0,0,0);
glutSolidSphere(0.01,30,15);

glPopMatrix();
     glPushMatrix();

glTranslatef(0.065f,-0.041f, 0.0f);//tyres
glColor3ub(0,0,0);
glutSolidSphere(0.01,30,15);

glPopMatrix();
glPopMatrix();



glPushMatrix();

    glBegin(GL_POLYGON);//Border brown


   glColor3ub(200, 140, 100);
   glVertex2f(-1.0f, -0.150f);
   glVertex2f(-1.0f, -0.18f);
   glVertex2f(1.0f, -0.18f);
   glVertex2f(1.0f, -0.150f);

   glEnd();



glPopMatrix();



glPushMatrix();

glTranslatef(position,0.0f, 0.0f);
   //ship
glPushMatrix();
glPushMatrix();
     glBegin(GL_POLYGON);//base red
   glColor3ub(213,82,82);
   glVertex2f(0.0f, -.8f);
   glVertex2f(0.6f, -.8f);
   glVertex2f(0.8f, -.5f);
    glVertex2f(-0.07f, -.5f);

   glEnd();
        glBegin(GL_POLYGON);//border white
   glColor3ub(255,255,255);
   glVertex2f(-0.07f, -.51f);
   glVertex2f(0.8f, -.51f);
   glVertex2f(0.8f, -.5f);
    glVertex2f(-0.07f, -.5f);

   glEnd();

        glBegin(GL_POLYGON);//body yellow
   glColor3ub(219,188,82);
    glVertex2f(0.6f, -.5f);
    glVertex2f(0.0f, -.5f);
    glVertex2f(0.1f, -.2f);
    glVertex2f(0.4f, -.2f);
   glEnd();

      glBegin(GL_POLYGON);//window bellow
   glColor3ub(l,i,h);
    glVertex2f(0.48f, -.43f);
    glVertex2f(0.08f, -.43f);
    glVertex2f(0.08f, -.38f);
     glVertex2f(0.48f, -.38f);


   glEnd();
      glBegin(GL_POLYGON);//window above
  glColor3ub(l,i,h);
    glVertex2f(0.4f, -.25f);
    glVertex2f(0.1f, -.25f);
    glVertex2f(0.1f, -.30f);
     glVertex2f(0.4f, -.30f);


   glEnd();

   glBegin(GL_POLYGON);//chimney border
   glColor3ub(255,255,255);
   glVertex2f(0.38f, -.2);
   glVertex2f(0.38, 0.05f);
   glVertex2f(0.28f, 0.05f);
    glVertex2f(0.28f, -.2f);

   glEnd();




   glBegin(GL_POLYGON);//chimney white border
   glColor3ub(255,255,255);
   glVertex2f(0.12f, -.2);
   glVertex2f(0.12f, 0.05f);
   glVertex2f(0.22f, 0.05f);
    glVertex2f(0.22f, -.2f);

   glEnd();
   glPopMatrix();

glPushMatrix();

glTranslatef(0.33f,position4, 0.0f); //Smoke
glColor3ub(255,255,255);
glutSolidSphere(0.045f,30,15);

glPopMatrix();

glPushMatrix();

glTranslatef(0.17f,position4, 0.0f); //Smoke
glColor3ub(255,255,255);
glutSolidSphere(0.045f,30,15);

glPopMatrix();

   glPushMatrix();

      glBegin(GL_POLYGON);//chimney
   glColor3ub(100,100,100);
   glVertex2f(0.12f, -.2);
   glVertex2f(0.12f, 0.0f);
   glVertex2f(0.22f, 0.0f);
    glVertex2f(0.22f, -.2f);

   glEnd();

     glBegin(GL_POLYGON);//chimney
   glColor3ub(100,100,100);
   glVertex2f(0.38f, -.2);
   glVertex2f(0.38, 0.00f);
   glVertex2f(0.28f, 0.00f);
    glVertex2f(0.28f, -.2f);

   glEnd();

glPopMatrix();
glPopMatrix();



    glPushMatrix(); //cloud
    glTranslatef(position3, 0.2f, 0);

 glPushMatrix();
    glTranslatef(0.5, 0.5f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.52f, 0.5f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.026,30,15); //cloud
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.54f, 0.5f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15); //cloud
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position3, 0.25f, 0);

 glPushMatrix();
    glTranslatef(0.6f, 0.55f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.62f, 0.55f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.026,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.64f, 0.55f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();
    glPopMatrix();

glPushMatrix();
    glTranslatef(position3, 0.25f, 0);

 glPushMatrix();
    glTranslatef(0.4f, 0.55f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.42f, 0.55f, 0); //cloud
    glColor3ub(255,255,255);
    glutSolidSphere(0.026,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.44f, 0.55f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2f, 0.30f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.22f, 0.30f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.026,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.24f, 0.30f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();


     glPushMatrix();
    glTranslatef(-0.4f, 0.20f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.42f, 0.20f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.026,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.44f, 0.20f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();


     glPushMatrix();
    glTranslatef(-0.6f, 0.25f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.62f, 0.25f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.026,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.64f, 0.25f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();
    glPopMatrix();









   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1280,820);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutTimerFunc(1000, updateSun, 0);
   glutTimerFunc(100, updateCloud1, 0);
   glutTimerFunc(100, updateSmoke, 0);
   glutTimerFunc(100, updateCar, 0);
   glutTimerFunc(100, updateCar2, 0);

   glutMainLoop();
   return 0;
}
