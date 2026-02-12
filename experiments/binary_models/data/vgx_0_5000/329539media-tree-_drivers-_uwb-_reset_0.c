ssize_t uwb_rc_cmd(struct uwb_rc *rc, const char *cmd_name,
struct uwb_rccb *cmd, size_t cmd_size,
struct uwb_rceb *reply, size_t reply_size)
{
struct device *dev = &rc->uwb_dev.dev;
ssize_t result;

result = __uwb_rc_cmd(rc, cmd_name,
cmd, cmd_size, reply, reply_size,
reply->bEventType, reply->wEvent, NULL);

if (result > 0 && result < reply_size) {
dev_err(dev, "%s: not enough data returned for decoding reply "
"(%zu bytes received vs at least %zu needed)\n",
cmd_name, result, reply_size);
result = -EIO;
}
return result;
}