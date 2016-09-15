#ifndef DA_GL_WINDOW
#define DA_GL_WINDOW
#include <QtOpenGL\qglwidget>

class DaGlWindow : public QGLWidget
{
	
protected:
	void initializeGL();
	void paintGL();
public:
	
	
};

#endif
