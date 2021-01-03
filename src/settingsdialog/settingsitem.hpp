#pragma once

#include "settingspage.hpp"

#include <gtkmm/listboxrow.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <gtkmm/image.h>

class SettingsItem: public Gtk::ListBoxRow
{
public:
	explicit SettingsItem(const SettingsPage &page);

private:
	Gtk::Box layout;

	Gtk::Image icon;
	Gtk::Label label;
};
