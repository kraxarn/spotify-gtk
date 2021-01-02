#pragma once

#include "trackslistmodel.hpp"
#include "format.hpp"

#include <gtkmm/treeview.h>
#include <gtkmm/treestore.h>
#include <gtkmm/liststore.h>
#include <gtkmm/scrolledwindow.h>

class TracksList: public Gtk::ScrolledWindow
{
public:
	TracksList();

private:
	Gtk::TreeView tree;
	TracksListModel columns;
	Glib::RefPtr<Gtk::ListStore> model;
};
