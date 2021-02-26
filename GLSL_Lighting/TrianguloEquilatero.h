#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#include "Obj.h"

class TrianguloEquilatero : public Obj {
public:
	TrianguloEquilatero();
	void draw(float x, float y, float z, float sideSize);
	~TrianguloEquilatero();
};

