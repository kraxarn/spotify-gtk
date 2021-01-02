#pragma once

#include "trackslistmodel.hpp"
#include "format.hpp"

#include <gtkmm/treeview.h>
#include <gtkmm/treestore.h>
#include <gtkmm/liststore.h>

class TracksList: public Gtk::TreeView
{
public:
	TracksList();

private:
	TracksListModel columns;
	Glib::RefPtr<Gtk::ListStore> model;
};
