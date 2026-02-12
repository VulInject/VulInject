static int cyttsp5_setup_input_device(struct device *dev)
{
struct cyttsp5 *ts = dev_get_drvdata(dev);
struct cyttsp5_sysinfo *si = &ts->sysinfo;
int max_x, max_y, max_p;
int max_x_tmp, max_y_tmp;
int error;

max_x_tmp = si->sensing_conf_data.res_x;
max_y_tmp = si->sensing_conf_data.res_y;
max_x = max_x_tmp - 1;
max_y = max_y_tmp - 1;
max_p = si->sensing_conf_data.max_z;

input_set_abs_params(ts->input, ABS_MT_POSITION_X, 0, max_x, 0, 0);
input_set_abs_params(ts->input, ABS_MT_POSITION_Y, 0, max_y, 0, 0);
input_set_abs_params(ts->input, ABS_MT_PRESSURE, 0, max_p, 0, 0);

input_set_abs_params(ts->input, ABS_MT_TOUCH_MAJOR, 0, MAX_AREA, 0, 0);
input_set_abs_params(ts->input, ABS_MT_TOUCH_MINOR, 0, MAX_AREA, 0, 0);

error = input_mt_init_slots(ts->input, si->tch_abs[CY_TCH_T].max,
INPUT_MT_DROP_UNUSED | INPUT_MT_DIRECT);
if (error)
return error;

error = input_register_device(ts->input);
if (error) {
dev_err(dev, "failed to register input device: %d\n", error);
return error;
}

return error;
}