#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#include "Obj.h"


class Arbol : public Obj{
public:
	Arbol();
	void draw(float x, float y, float z);
	~Arbol();
};

