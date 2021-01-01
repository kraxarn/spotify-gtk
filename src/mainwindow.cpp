#include "mainwindow.hpp"

MainWindow::MainWindow()
{
	set_titlebar(title_bar);

	set_default_size(1280, 720);
	set_icon_name("spotify-qt");

	show_all();
}
