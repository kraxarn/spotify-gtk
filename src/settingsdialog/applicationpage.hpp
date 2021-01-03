#pragma once

#include "settingspage.hpp"
#include "settingscategory.hpp"

#include <gtkmm/switch.h>

class ApplicationPage: public SettingsPage
{
public:
	ApplicationPage();

	std::string icon_name() const override;
	std::string name() const override;
	std::string title() const override;

	bool save() override;

private:
	SettingsCategory general;

	Gtk::Switch pulse_volume;
	Gtk::Switch media_controller;
	Gtk::Switch spotify_order;
	Gtk::Switch show_whats_new;

	SettingsCategory logs;
};
