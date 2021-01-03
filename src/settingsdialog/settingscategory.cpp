#include "settingscategory.hpp"

SettingsCategory::SettingsCategory(const std::string &title)
	: title(title)
{
	set_orientation(Gtk::ORIENTATION_VERTICAL);

	this->title.set_margin_bottom(8);
	this->title.set_margin_top(16);
	this->title.set_alignment(Gtk::ALIGN_START, Gtk::ALIGN_END);
	pack_start(this->title, false, false);
	pack_start(list, true, true);
}

void SettingsCategory::add_settings(const std::vector<SettingsSetting *> &setting_list)
{
	for (const auto &setting : setting_list)
	{
		settings.emplace_back(setting);
		list.add(*setting);
	}
}
