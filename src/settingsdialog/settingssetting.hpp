#pragma once

#include "format.hpp"

#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <gtkmm/listboxrow.h>

class SettingsSetting: public Gtk::ListBoxRow
{
public:
	SettingsSetting(const std::string &name, const std::string &description, Gtk::Widget &value);

private:
	Gtk::Box layout;
	Gtk::Box title_layout;

	Gtk::Label title;
	Gtk::Label subtitle;
	Gtk::Widget &widget;
};
