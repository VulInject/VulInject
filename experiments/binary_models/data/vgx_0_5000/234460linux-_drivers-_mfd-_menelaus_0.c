static int menelaus_read_time(struct device *dev, struct rtc_time *t)
{
struct i2c_msg	msg[2];
char		regs[7];
int		status;


regs[0] = MENELAUS_RTC_SEC;

msg[0].addr = MENELAUS_I2C_ADDRESS;
msg[0].flags = 0;
msg[0].len = 1;
msg[0].buf = regs;

msg[1].addr = MENELAUS_I2C_ADDRESS;
msg[1].flags = I2C_M_RD;
msg[1].len = sizeof(regs);
msg[1].buf = regs;

status = i2c_transfer(the_menelaus->client->adapter, msg, 2);
if (status != 2) {
dev_err(dev, "%s error %d\n", "read", status);
return -EIO;
}

menelaus_to_time(regs, t);
t->tm_wday = bcd2bin(regs[6]);

return 0;
}