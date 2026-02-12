MODULE_DESCRIPTION("Amiga mouse driver");
MODULE_LICENSE("GPL");

static int amimouse_lastx, amimouse_lasty;

static irqreturn_t amimouse_interrupt(int irq, void *data)
{
struct input_dev *dev = data;
unsigned short joy0dat, potgor;
int nx, ny, dx, dy;

joy0dat = amiga_custom.joy0dat;

nx = joy0dat & 0xff;
ny = joy0dat >> 8;

dx = nx - amimouse_lastx;
dy = ny - amimouse_lasty;

if (dx < -127) dx = (256 + nx) - amimouse_lastx;
if (dx >  127) dx = (nx - 256) - amimouse_lastx;
if (dy < -127) dy = (256 + ny) - amimouse_lasty;
if (dy >  127) dy = (ny - 256) - amimouse_lasty;

amimouse_lastx = nx;
amimouse_lasty = ny;

potgor = amiga_custom.potgor;

input_report_rel(dev, REL_X, dx);
input_report_rel(dev, REL_Y, dy);

input_report_key(dev, BTN_LEFT,   ciaa.pra & 0x40);
input_report_key(dev, BTN_MIDDLE, potgor & 0x0100);
input_report_key(dev, BTN_RIGHT,  potgor & 0x0400);

input_sync(dev);

return IRQ_HANDLED;
}