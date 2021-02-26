#include "Arbol.h"

Arbol::Arbol() {}

void Arbol::draw(float x, float y, float z) {

	glPushMatrix();
		glTranslatef(x, y, z);

		//Copa del Arbol
		glPushMatrix();
			glTranslatef(0.0f, 1.0f, 0.0f);
			glutSolidSphere(1.0f, 20, 20);
		glPopMatrix();

		//Tronco
		glPushMatrix();
			glRotatef(99, 1, 0, 0);
			glutSolidCylinder(0.5f, 1.0f, 20, 20);
		glPopMatrix();

	glPopMatrix();

}

Arbol::~Arbol() {}