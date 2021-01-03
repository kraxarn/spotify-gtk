#include "settingscategory.hpp"

SettingsCategory::SettingsCategory(const std::string &name)
{
	set_orientation(Gtk::ORIENTATION_VERTICAL);

	title.set_margin_bottom(8);
	title.set_margin_top(16);
	title.set_alignment(Gtk::ALIGN_START, Gtk::ALIGN_END);
	title.set_markup(lib::fmt::format("<b>{}</b>", name));
	pack_start(title, false, false);
	pack_start(list, true, true);

	list.signal_row_activated()
		.connect(sigc::mem_fun(this, &SettingsCategory::on_row_activated));
}

void SettingsCategory::add_settings(const std::vector<SettingsSetting *> &setting_list)
{
	for (const auto &setting : setting_list)
	{
		settings.emplace_back(setting);
		list.add(*setting);
	}
}

void SettingsCategory::on_row_activated(Gtk::ListBoxRow *row)
{
	auto setting = dynamic_cast<SettingsSetting*>(row);
	if (setting == nullptr)
		return;
	setting->toggle();
}
