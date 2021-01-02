#pragma once

#include "devicemenu.hpp"

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
#include <gtkmm/scale.h>

class MainMenu: public Gtk::PopoverMenu
{
public:
	MainMenu();

protected:
	void on_show() override;

private:
	Gtk::Stack stack;
	Gtk::Box content;

	Gtk::Box playback_options;
	Gtk::ToggleButton shuffle;
	Gtk::ToggleButton repeat;

	Gtk::Box volume_control;
	Gtk::Image volume_icon;
	Gtk::Scale volume;

	Gtk::Separator separator1;

	Gtk::ModelButton devices;
	DeviceMenu device_menu;
	Gtk::ModelButton settings;

	Gtk::Separator separator2;

	Gtk::ModelButton log_out;
	Gtk::ModelButton quit;
};
