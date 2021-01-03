#include "playlistspage.hpp"

PlaylistsPage::PlaylistsPage()
{
}

std::string PlaylistsPage::icon_name() const
{
	return "view-media-playlist";
}

std::string PlaylistsPage::name() const
{
	return "playlists";
}

std::string PlaylistsPage::title() const
{
	return "Playlists";
}

bool PlaylistsPage::save()
{
	return true;
}
