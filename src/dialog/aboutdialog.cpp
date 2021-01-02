#include "aboutdialog.hpp"

AboutDialog::AboutDialog()
{
	set_program_name("spotify-gtk");
	set_version("v0.0");
	set_license_type(Gtk::LICENSE_GPL_3_0);
	set_website("https://github.com/kraxarn/spotify-gtk");
	set_authors({"kraxarn"});
	set_logo_icon_name("spotify-qt");
	set_comments("Lightweight Spotify client using GTK");
}

void AboutDialog::on_response(int response_id)
{
	set_visible(false);
}
