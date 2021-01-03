#pragma once

#include "settingspage.hpp"

class InterfacePage: public SettingsPage
{
public:
	InterfacePage();

	std::string icon_name() const override;
	std::string name() const override;
	std::string title() const override;

	bool save() override;
};
