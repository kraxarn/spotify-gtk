#pragma once

#include "aboutpage.hpp"
#include "applicationpage.hpp"
#include "interfacepage.hpp"
#include "playlistspage.hpp"
#include "settingsitem.hpp"
#include "settingspage.hpp"
#include "spotifypage.hpp"

#include <gtkmm/dialog.h>
#include <gtkmm/headerbar.h>
#include <gtkmm/stack.h>
#include <gtkmm/stackswitcher.h>
#include <gtkmm/listbox.h>
#include <gtkmm/toolbutton.h>

class SettingsDialog: public Gtk::Dialog
{
public:
	SettingsDialog();

private:
	Gtk::HeaderBar header;
	Gtk::ListBox list;
	Gtk::Stack stack;

	Gtk::ToolButton accept;
	Gtk::ToolButton apply;

	std::vector<std::shared_ptr<SettingsPage>> pages;
	std::vector<std::shared_ptr<SettingsItem>> items;

	void add_page(SettingsPage *page);
	void add_pages(std::initializer_list<SettingsPage*> page_list);
};
