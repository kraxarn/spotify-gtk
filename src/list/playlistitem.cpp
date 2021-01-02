#include "playlistitem.hpp"

PlaylistItem::PlaylistItem(const std::string &name)
	: label(name)
{
	label.property_margin().set_value(8);
	label.set_alignment(Gtk::ALIGN_START, Gtk::ALIGN_CENTER);
	add(label);
}
