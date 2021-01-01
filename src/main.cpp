#include "mainwindow.hpp"

int main(int argc, char **argv)
{
	auto app = Gtk::Application::create(argc, argv, "com.kraxarn.spotify-gtk");

	MainWindow window;
	return app->run(window);
}
