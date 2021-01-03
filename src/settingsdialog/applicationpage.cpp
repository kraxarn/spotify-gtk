#include "applicationpage.hpp"

ApplicationPage::ApplicationPage()
	: general("General"),
	logs("Logs")
{
	general.add_settings({
		new SettingsSetting("Pulseaudio volume control",
			"Use PulseAudio for volume control instead, only works if listening on same device",
			pulse_volume),
		new SettingsSetting("Media controller",
			"Enable media controller through the MPRIS D-Bus interface",
			media_controller),
		new SettingsSetting("Play in order of track number",
			"Play tracks in order of track number, instead of by order in list",
			spotify_order),
		new SettingsSetting("Show what's new on start",
			"Show what's new in the latest version after the app has been updated",
			show_whats_new),
	});

	pack_start(general);
	pack_start(logs);
}

std::string ApplicationPage::icon_name() const
{
	return "window";
}

std::string ApplicationPage::name() const
{
	return "application";
}

std::string ApplicationPage::title() const
{
	return "Application";
}

bool ApplicationPage::save()
{
	return true;
}
