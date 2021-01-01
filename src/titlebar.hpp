#pragma once

#include "menu/mainmenu.hpp"
#include "progress.hpp"

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

class TitleBar: public Gtk::HeaderBar
{
public:
	TitleBar();

private:
	Gtk::ToolButton previous;
	Gtk::ToolButton play_pause;
	Gtk::ToolButton next;

	Gtk::Image album;
	Gtk::Label currently_playing;

	Progress progress;

	Gtk::MenuButton main_menu_button;
	MainMenu main_menu;
};
