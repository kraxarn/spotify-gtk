#include "interfacepage.hpp"

InterfacePage::InterfacePage()
{
}

std::string InterfacePage::icon_name() const
{
	return "draw-brush";
}

std::string InterfacePage::name() const
{
	return "interface";
}

std::string InterfacePage::title() const
{
	return "Interface";
}

bool InterfacePage::save()
{
	return true;
}
