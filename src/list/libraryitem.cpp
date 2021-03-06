#include "libraryitem.hpp"

#include <iostream>

LibraryItem::LibraryItem(const std::string &icon_name, const std::string &name)
	: label(name)
{
	layout.property_margin().set_value(8);
	layout.set_spacing(8);

	icon.set_from_icon_name(icon_name, Gtk::ICON_SIZE_MENU);
	icon.property_width_request().set_value(24);
	layout.pack_start(icon, false, false);

	label.set_alignment(Gtk::ALIGN_START, Gtk::ALIGN_CENTER);
	layout.pack_start(label, true, true);

	add(layout);
}
