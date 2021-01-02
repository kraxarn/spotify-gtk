#include "trackslist.hpp"

TracksList::TracksList()
{
	model = Gtk::ListStore::create(columns);
	set_model(model);

	// Header
	append_column("#", columns.index);
	append_column("Title", columns.title);
	append_column("Artist", columns.artist);
	append_column("Album", columns.album);
	append_column("Length", columns.length);
	append_column("Added", columns.added);

	// Reorder columns
	for (auto column : get_columns())
		column->set_reorderable();

	// Example data
	Gtk::TreeRow row;
	for (auto i = 0; i < 10; i++)
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
