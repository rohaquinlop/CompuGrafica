#include "Tetera.h"

Tetera::Tetera() {}

void Tetera::draw(float x, float y, float z, float scale) {
	glPushMatrix();
		glTranslatef(x, y, z);
		glutSolidTeapot(scale);
	glPopMatrix();
}

Tetera::~Tetera() {}