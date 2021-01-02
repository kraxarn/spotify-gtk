#pragma once

#include "libraryitem.hpp"
#include "playlistitem.hpp"
#include "format.hpp"

#include <gtkmm/listbox.h>
#include <gtkmm/separator.h>
#include <gtkmm/scrolledwindow.h>

class LeftSidePanel: public Gtk::ScrolledWindow
{
public:
	LeftSidePanel();

private:
	Gtk::ListBox list;

	std::vector<LibraryItem> libraryItems;
	Gtk::Separator separator;
	std::vector<PlaylistItem> playlistItems;
};
