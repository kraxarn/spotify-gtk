#include "trackslistmodel.hpp"

TracksListModel::TracksListModel()
{
	add(index);
	add(title);
	add(artist);
	add(album);
	add(length);
	add(added);
}
