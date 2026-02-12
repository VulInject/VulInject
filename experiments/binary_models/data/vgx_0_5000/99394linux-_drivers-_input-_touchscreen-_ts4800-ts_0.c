static void ts4800_ts_poll(struct input_dev *input_dev)
{
struct ts4800_ts *ts = input_get_drvdata(input_dev);
u16 last_x = readw(ts->base + X_OFFSET);
u16 last_y = readw(ts->base + Y_OFFSET);
bool pendown = last_x & PENDOWN_MASK;

if (pendown) {
if (ts->debounce) {
ts->debounce--;
return;
}

if (!ts->pendown) {
input_report_key(input_dev, BTN_TOUCH, 1);
ts->pendown = true;
}

last_x = ((~last_x) >> 4) & MAX_12BIT;
last_y = ((~last_y) >> 4) & MAX_12BIT;

input_report_abs(input_dev, ABS_X, last_x);
input_report_abs(input_dev, ABS_Y, last_y);
input_sync(input_dev);
} else if (ts->pendown) {
ts->pendown = false;
ts->debounce = DEBOUNCE_COUNT;
input_report_key(input_dev, BTN_TOUCH, 0);
input_sync(input_dev);
}
}