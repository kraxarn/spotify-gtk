#include "settingsdialog.hpp"

SettingsDialog::SettingsDialog()
{
	auto layout = get_content_area();
	layout->set_orientation(Gtk::ORIENTATION_HORIZONTAL);

	property_width_request().set_value(800);
	property_height_request().set_value(600);

	list.property_width_request().set_value(150);

	apply.set_label("Apply");
	header.pack_end(apply);

	accept.set_label("OK");
	header.pack_end(accept);

	header.set_show_close_button(true);
	header.set_title("Settings");
	set_titlebar(header);

	stack.set_transition_type(Gtk::STACK_TRANSITION_TYPE_SLIDE_UP_DOWN);

	add_pages({
		new ApplicationPage(),
		new InterfacePage(),
		new SpotifyPage(),
		new PlaylistsPage(),
		new AboutPage()
	});

	stack.set_visible_child(*pages.front());

	layout->pack_start(list, false, false);
	layout->pack_start(stack, true, true);

	layout->show_all();
}

void SettingsDialog::add_page(SettingsPage *page)
{
	pages.emplace_back(page);
	items.emplace_back(new SettingsItem(*page));

	stack.add(*page);
	stack.child_property_icon_name(*page).set_value(page->icon_name());
	stack.child_property_title(*page).set_value(page->title());

	list.add(*items.back());
}

void SettingsDialog::add_pages(std::initializer_list<SettingsPage *> page_list)
{
	for (auto page : page_list)
		add_page(page);
}
