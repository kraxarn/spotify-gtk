#pragma once

#include "titlebar.hpp"
#include "list/leftsidepanel.hpp"
#include "trackslist/trackslist.hpp"

#include <gtkmm/applicationwindow.h>
#include <gtkmm/headerbar.h>
#include <gtkmm/menubutton.h>
#include <gtkmm/image.h>
#include <gtkmm/popovermenu.h>
#include <gtkmm/box.h>
#include <gtkmm/modelbutton.h>
#include <gtkmm/separator.h>

class MainWindow: public Gtk::ApplicationWindow
{
public:
	MainWindow();

private:
	TitleBar title_bar;

	Gtk::Box layout;
	LeftSidePanel left_side_panel;
	Gtk::Separator separator;
	TracksList tracks_list;
};
