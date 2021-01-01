#include "progress.hpp"

Progress::Progress()
	: current("0:00"),
	scale(Gtk::ORIENTATION_HORIZONTAL),
	length("0:00")
{
	property_width_request().set_value(400);

	pack_start(current, false, false);

	scale.set_range(0, 100);
	scale.set_draw_value(false);
	pack_start(scale, true, true);

	pack_start(length, false, false);
}
