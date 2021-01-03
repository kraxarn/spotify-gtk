#pragma once

#include "settingspage.hpp"

class AboutPage: public SettingsPage
{
public:
	AboutPage();

	std::string icon_name() const override;
	std::string name() const override;
	std::string title() const override;

	bool save() override;
};
