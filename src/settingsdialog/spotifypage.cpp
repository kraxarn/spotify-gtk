#include "spotifypage.hpp"

SpotifyPage::SpotifyPage()
{
}

std::string SpotifyPage::icon_name() const
{
	return "headphones";
}

std::string SpotifyPage::name() const
{
	return "spotify";
}

std::string SpotifyPage::title() const
{
	return "Spotify";
}

bool SpotifyPage::save()
{
	return true;
}
