#include "mainwindow.hpp"

MainWindow::MainWindow()
	: layout(Gtk::ORIENTATION_HORIZONTAL)
{
	set_titlebar(title_bar);
	set_default_size(1280, 720);
	set_icon_name("spotify-qt");
	add(layout);

	layout.pack_start(left_side_panel, false, false);
	layout.pack_start(separator, false, false);
	layout.pack_start(tracks_list, true, true);

	show_all();
}
