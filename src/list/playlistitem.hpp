#pragma once

#include <gtkmm/listboxrow.h>
#include <gtkmm/label.h>

class PlaylistItem: public Gtk::ListBoxRow
{
public:
	explicit PlaylistItem(const std::string &name);

private:
	Gtk::Label label;
};
