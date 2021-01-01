#pragma once

#include <gtkmm/application.h>
#include <gtkmm/applicationwindow.h>
#include <gtkmm/headerbar.h>
#include <gtkmm/menubutton.h>
#include <gtkmm/image.h>
#include <gtkmm/popovermenu.h>
#include <gtkmm/box.h>
#include <gtkmm/modelbutton.h>
#include <gtkmm/settings.h>
#include <gtkmm/stacksidebar.h>
#include <gtkmm/stack.h>
#include <gtkmm/separator.h>

class MainWindow: public Gtk::ApplicationWindow
{
public:
	MainWindow();

private:
	Gtk::HeaderBar header_bar;

};
