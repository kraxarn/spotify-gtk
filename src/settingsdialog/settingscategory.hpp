#pragma once

#include "settingssetting.hpp"

#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <gtkmm/listbox.h>
#include <gtkmm/listboxrow.h>

class SettingsCategory: public Gtk::Box
{
public:
	explicit SettingsCategory(const std::string &title);

	void add_settings(const std::vector<SettingsSetting *> &setting_list);

private:
	Gtk::Label title;
	Gtk::ListBox list;

	std::vector<std::shared_ptr<SettingsSetting>> settings;
};
