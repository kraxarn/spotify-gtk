#include "mainmenu.hpp"

MainMenu::MainMenu()
{
	content.set_orientation(Gtk::ORIENTATION_VERTICAL);
	content.set_spacing(4);
	content.property_margin().set_value(12);
	content.property_width_request().set_value(160);
	add(content);

	playback_options.set_orientation(Gtk::ORIENTATION_HORIZONTAL);
	playback_options.set_spacing(12);

	shuffle.set_image_from_icon_name("media-playlist-shuffle");
	playback_options.pack_end(shuffle);

	repeat.set_image_from_icon_name("media-playlist-repeat");
	playback_options.pack_end(repeat);

	content.add(playback_options);

	volume_control.set_orientation(Gtk::ORIENTATION_HORIZONTAL);

	volume_icon.set_from_icon_name("audio-volume-high", Gtk::ICON_SIZE_MENU);
	volume_icon.set_margin_left(4);
	volume_control.pack_start(volume_icon, false, false);

	volume.set_range(0, 20);
	volume.set_draw_value(false);
	volume.set_value(20);
	volume_control.pack_start(volume, true, true);

	content.add(volume_control);

	content.add(separator1);

	devices.property_text().set_value("Devices");
	content.add(devices);

	settings.property_text().set_value("Settings...");
	content.add(settings);

	separator2.set_orientation(Gtk::ORIENTATION_VERTICAL);
	content.add(separator2);

	log_out.property_text().set_value("Log out");
	content.add(log_out);

	quit.property_text().set_value("Quit");
	content.add(quit);

	content.show_all();
}
