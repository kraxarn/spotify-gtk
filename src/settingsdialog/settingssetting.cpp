#include "settingssetting.hpp"

SettingsSetting::SettingsSetting(const std::string &name, const std::string &description, Gtk::Widget &value)
	: title(name),
	widget(value)
{
	set_selectable(false);
	layout.property_margin().set_value(8);

	title_layout.set_orientation(Gtk::ORIENTATION_VERTICAL);

	title.set_alignment(Gtk::ALIGN_START, Gtk::ALIGN_CENTER);
	title_layout.pack_start(title, true, true);

	subtitle.set_alignment(Gtk::ALIGN_START, Gtk::ALIGN_CENTER);
	subtitle.set_sensitive(false);
	subtitle.set_markup(lib::fmt::format("<sub>{}</sub>", description));
	title_layout.pack_start(subtitle, false, false);

	widget.set_valign(Gtk::ALIGN_CENTER);

	layout.pack_start(title_layout, true, true);
	layout.pack_start(widget, false, false);

	add(layout);
}

void SettingsSetting::toggle()
{
	auto toggle = dynamic_cast<Gtk::Switch *>(&widget);
	if (toggle == nullptr)
		return;

	toggle->set_active(!toggle->get_active());
}