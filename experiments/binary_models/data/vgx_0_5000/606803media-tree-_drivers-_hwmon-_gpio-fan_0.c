static int fan_ctrl_init(struct gpio_fan_data *fan_data,
struct gpio_fan_platform_data *pdata)
{
struct platform_device *pdev = fan_data->pdev;
int num_ctrl = pdata->num_ctrl;
unsigned *ctrl = pdata->ctrl;
int i, err;

for (i = 0; i < num_ctrl; i++) {
err = devm_gpio_request(&pdev->dev, ctrl[i],
"GPIO fan control");
if (err)
return err;

err = gpio_direction_output(ctrl[i],
gpio_get_value_cansleep(ctrl[i]));
if (err)
return err;
}

fan_data->num_ctrl = num_ctrl;
fan_data->ctrl = ctrl;
fan_data->num_speed = pdata->num_speed;
fan_data->speed = pdata->speed;
fan_data->pwm_enable = true; 
fan_data->speed_index = get_fan_speed_index(fan_data);
if (fan_data->speed_index < 0)
return fan_data->speed_index;

return 0;
}