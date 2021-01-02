#include "trackslist.hpp"

TracksList::TracksList()
{
	add(tree);

	model = Gtk::ListStore::create(columns);
	tree.set_model(model);

	// Header
	tree.append_column("#", columns.index);
	tree.append_column("Title", columns.title);
	tree.append_column("Artist", columns.artist);
	tree.append_column("Album", columns.album);
	tree.append_column("Length", columns.length);
	tree.append_column("Added", columns.added);

	// Sortable columns
	auto i = 0;
	for (auto column : tree.get_columns())
	{
		column->set_min_width(i > 0 ? 80 : 40);
		column->set_max_width(260);
		column->set_resizable();
		column->set_sort_column(i++);
	}

	// Example data
	Gtk::TreeRow row;
	for (i = 0; i < 50; i++)
	{
		row = *(model->append());

		row[columns.index] = i;
		row[columns.title] = lib::fmt::format("Track {}", (i % 10) + 1);
		row[columns.artist] = lib::fmt::format("Artist {}", (i / 10) + 1);
		row[columns.album] = lib::fmt::format("Album {}", (i / 10) + 1);
		row[columns.length] = "0:00";
		row[columns.added] = lib::fmt::format("1 week ago");
	}
}
