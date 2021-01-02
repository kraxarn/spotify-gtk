#pragma once

#include <gtkmm/treemodel.h>

class TracksListModel: public Gtk::TreeModel::ColumnRecord
{
public:
	TracksListModel();

	Gtk::TreeModelColumn<unsigned int> index;
	Gtk::TreeModelColumn<std::string> title;
	Gtk::TreeModelColumn<std::string> artist;
	Gtk::TreeModelColumn<std::string> album;
	Gtk::TreeModelColumn<std::string> length;
	Gtk::TreeModelColumn<std::string> added;
};
