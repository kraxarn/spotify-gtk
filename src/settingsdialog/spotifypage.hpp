#pragma once

#include "settingspage.hpp"

class SpotifyPage: public SettingsPage
{
public:
	SpotifyPage();

	std::string icon_name() const override;
	std::string name() const override;
	std::string title() const override;

	bool save() override;
};
