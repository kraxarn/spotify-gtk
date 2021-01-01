#pragma once

#include <gtkmm/box.h>
#include <gtkmm/scale.h>
#include <gtkmm/label.h>

class Progress: public Gtk::Box
{
public:
	Progress();

private:
	Gtk::Label current;
	Gtk::Scale scale;
	Gtk::Label length;
};
