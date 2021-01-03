#pragma once

#include "settingspage.hpp"

class PlaylistsPage: public SettingsPage
{
public:
	PlaylistsPage();

	std::string icon_name() const override;
	std::string name() const override;
	std::string title() const override;

	bool save() override;
};
