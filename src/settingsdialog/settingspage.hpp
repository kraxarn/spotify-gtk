#pragma once

#include <gtkmm/box.h>

class SettingsPage: public Gtk::Box
{
public:
	virtual std::string icon_name() const = 0;
	virtual std::string name() const = 0;
	virtual std::string title() const = 0;

	virtual bool save() = 0;

protected:

	SettingsPage();
};
