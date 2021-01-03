#pragma once

#include "settingspage.hpp"

class ApplicationPage: public SettingsPage
{
public:
	ApplicationPage();

	std::string icon_name() const override;
	std::string name() const override;
	std::string title() const override;

	bool save() override;

private:
	Gtk::Label temp;
};
