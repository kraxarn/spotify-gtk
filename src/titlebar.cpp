#include "titlebar.hpp"

TitleBar::TitleBar()
	: currently_playing("No music playing")
{
	set_show_close_button(true);
	set_custom_title(progress);

	previous.set_icon_name("media-skip-backward");
	pack_start(previous);

	play_pause.set_icon_name("media-playback-start");
	pack_start(play_pause);

	next.set_icon_name("media-skip-forward");
	pack_start(next);

	album.set_from_icon_name("media-optical-audio", Gtk::ICON_SIZE_LARGE_TOOLBAR);
	album.set_margin_left(12);
	pack_start(album);

	pack_start(currently_playing);

	main_menu_button.set_image_from_icon_name("open-menu-symbolic");
	main_menu_button.set_popover(main_menu);
	pack_end(main_menu_button);
}
