static void parse_multi_touch(struct w8001 *w8001)
{
struct input_dev *dev = w8001->touch_dev;
unsigned char *data = w8001->data;
unsigned int x, y;
int i;
int count = 0;

for (i = 0; i < 2; i++) {
bool touch = data[0] & (1 << i);

input_mt_slot(dev, i);
input_mt_report_slot_state(dev, MT_TOOL_FINGER, touch);
if (touch) {
x = (data[6 * i + 1] << 7) | data[6 * i + 2];
y = (data[6 * i + 3] << 7) | data[6 * i + 4];



scale_touch_coordinates(w8001, &x, &y);

input_report_abs(dev, ABS_MT_POSITION_X, x);
input_report_abs(dev, ABS_MT_POSITION_Y, y);
count++;
}
}


if (w8001->type != BTN_TOOL_PEN &&
w8001->type != BTN_TOOL_RUBBER) {
w8001->type = count == 1 ? BTN_TOOL_FINGER : KEY_RESERVED;
input_mt_report_pointer_emulation(dev, true);
}

input_sync(dev);
}