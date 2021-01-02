#pragma once

#include <gtkmm/listboxrow.h>
#include <gtkmm/box.h>
#include <gtkmm/image.h>
#include <gtkmm/label.h>

class LibraryItem: public Gtk::ListBoxRow
{
public:
	LibraryItem(const std::string &icon, const std::string &name);

private:
	Gtk::Box layout;

	Gtk::Image icon;
	Gtk::Label label;
};
