#pragma once

#include <gtkmm/aboutdialog.h>

class AboutDialog: public Gtk::AboutDialog
{
public:
	explicit AboutDialog();

protected:
	void on_response(int response_id) override;
};
