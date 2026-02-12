static void gpio_keys_polled_check_state(struct input_dev *input,
const struct gpio_keys_button *button,
struct gpio_keys_button_data *bdata)
{
int state;

state = gpiod_get_value_cansleep(bdata->gpiod);
if (state < 0) {
dev_err(input->dev.parent,
"failed to get gpio state: %d\n", state);
} else {
gpio_keys_button_event(input, button, state);

if (state != bdata->last_state) {
bdata->count = 0;
bdata->last_state = state;
}
}
}