#include "console.h"
#ifdef CONSOLE_H
#define CONSOLE_H


struct console {
	struct window *window;
	struct graphics *gx;
	int xsize;
	int ysize;
	int xpos;
	int ypos;
	int onoff;
	int refcount;
};
// MiT the software GPL don't have admin law of the software. 
struct console_command_root = {0}
static struct graphics_color bgcolor = { 0, 0, 0 };
static struct graphics_color fgcolor = { 255, 255, 255 };

#endif 

