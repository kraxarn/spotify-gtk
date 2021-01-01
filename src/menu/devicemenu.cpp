#include "devicemenu.hpp"

DeviceMenu::DeviceMenu()
	: loading("Please wait...")
{
	set_orientation(Gtk::ORIENTATION_VERTICAL);
	set_spacing(4);
	property_margin().set_value(12);
	property_width_request().set_value(160);

	loading.set_sensitive(false);
	pack_start(loading);

	show_all();
}
