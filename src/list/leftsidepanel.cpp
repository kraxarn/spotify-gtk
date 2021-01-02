#include "leftsidepanel.hpp"

LeftSidePanel::LeftSidePanel()
{
	property_width_request().set_value(200);
	add(list);

	libraryItems.emplace_back("document-open-recent-symbolic", "History");
	libraryItems.emplace_back("view-media-track", "Liked Tracks");
	libraryItems.emplace_back("view-media-playcount", "Top Tracks");
	libraryItems.emplace_back("view-media-recent", "New Releases");
	libraryItems.emplace_back("view-media-album-cover", "Liked Albums");
	libraryItems.emplace_back("view-media-artist", "Top Artists");
	libraryItems.emplace_back("view-media-favorite", "Followed Artists");

	for (auto &row : libraryItems)
		list.add(row);

	list.add(separator);

	// Example playlists
	for (auto i = 0; i < 20; i++)
	{
		playlistItems.emplace_back(lib::fmt::format("Playlist {}", i + 1));
		list.add(playlistItems.back());
	}
}
