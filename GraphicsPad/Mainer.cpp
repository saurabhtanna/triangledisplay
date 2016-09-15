#include <Qt\qapplication.h>
#include <DaGlWindow.h>

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	DaGlWindow meWindow;
	meWindow.show();
	return app.exec();
}