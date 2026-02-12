int gpio_pin_test(struct gpiochip_info *cinfo, int line, int flag, int value)
{
struct gpiohandle_data data;
unsigned int lines[] = {line};
int fd;
int debugfs_dir = IN;
int debugfs_value = 0;
int ret;

data.values[0] = value;
ret = gpiotools_request_linehandle(cinfo->name, lines, 1, flag, &data,
CONSUMER);
if (ret < 0)
goto fail_out;
else
fd = ret;

ret = gpio_debugfs_get(CONSUMER, &debugfs_dir, &debugfs_value);
if (ret) {
ret = -EINVAL;
goto fail_out;
}
if (flag & GPIOHANDLE_REQUEST_INPUT) {
if (debugfs_dir != IN) {
errno = -EINVAL;
ret = -errno;
}
} else if (flag & GPIOHANDLE_REQUEST_OUTPUT) {
if (flag & GPIOHANDLE_REQUEST_ACTIVE_LOW)
debugfs_value = !debugfs_value;

if (!(debugfs_dir == OUT && value == debugfs_value))
errno = -EINVAL;
ret = -errno;

}
gpiotools_release_linehandle(fd);

fail_out:
if (ret)
err(EXIT_FAILURE, "gpio<%s> line<%d> test flag<0x%x> value<%d>",
cinfo->name, line, flag, value);

return ret;
}