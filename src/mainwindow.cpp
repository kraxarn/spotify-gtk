#include "mainwindow.hpp"

MainWindow::MainWindow()
{
	header_bar.set_show_close_button(true);
	header_bar.set_title("spotify-gtk");
	set_titlebar(header_bar);

	set_default_size(1280, 720);
	set_icon_name("spotify-qt");

	show_all();
}
