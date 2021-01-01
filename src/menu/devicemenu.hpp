#pragma once

#include <gtkmm/popovermenu.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <gtkmm/modelbutton.h>
#include <gtkmm/menu.h>

class DeviceMenu: public Gtk::Box
{
public:
	DeviceMenu();

private:
	Gtk::Label loading;
};
