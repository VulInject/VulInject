static irqreturn_t tw_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
{
struct tw *tw = serio_get_drvdata(serio);
struct input_dev *dev = tw->dev;

if (data) {		
tw->touched = 1;
tw->data[tw->idx++] = data;

if (tw->idx == TW_LENGTH && tw->data[1] == tw->data[2]) {
input_report_abs(dev, ABS_X, tw->data[0]);
input_report_abs(dev, ABS_Y, tw->data[1]);
input_report_key(dev, BTN_TOUCH, 1);
input_sync(dev);
tw->idx = 0;
}
} else if (tw->touched) {	
input_report_key(dev, BTN_TOUCH, 0);
input_sync(dev);
tw->idx = 0;
tw->touched = 0;
}

return IRQ_HANDLED;
}