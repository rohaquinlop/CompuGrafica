#include "TrianguloEquilatero.h"

TrianguloEquilatero::TrianguloEquilatero() {}

void TrianguloEquilatero::draw(float x, float y, float z, float sideSize) {
	glPushMatrix();
        glTranslatef(x, y, z);

        float m = sideSize / 2; //Valor de los catetos
        float altura = sqrt((sideSize * sideSize) - (m * m));

        glBegin(GL_TRIANGLES);
            //Indicando coordenadas del triangulo
            glVertex3f(m, 0.0f, 0.0f);
            glVertex3f(0.0f, altura, 0.0f);
            glVertex3f(-m, 0.0f, 0.0f);
        glEnd();
	glPopMatrix();
}

TrianguloEquilatero::~TrianguloEquilatero() {}