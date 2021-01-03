#include "aboutpage.hpp"

AboutPage::AboutPage()
{
}

std::string AboutPage::icon_name() const
{
	return "help-about";
}

std::string AboutPage::name() const
{
	return "about";
}

std::string AboutPage::title() const
{
	return "About";
}

bool AboutPage::save()
{
	return true;
}
