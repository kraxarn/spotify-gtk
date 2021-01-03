#include "applicationpage.hpp"

ApplicationPage::ApplicationPage()
	: temp("Application")
{
	temp.set_sensitive(false);
	temp.set_alignment(Gtk::ALIGN_CENTER, Gtk::ALIGN_CENTER);
	pack_start(temp, true, true);
}

std::string ApplicationPage::icon_name() const
{
	return "window";
}

std::string ApplicationPage::name() const
{
	return "application";
}

std::string ApplicationPage::title() const
{
	return "Application";
}

bool ApplicationPage::save()
{
	return true;
}
