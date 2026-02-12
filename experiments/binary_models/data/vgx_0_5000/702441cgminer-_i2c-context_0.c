static bool i2c_slave_read(struct i2c_ctx *ctx, uint8_t reg, uint8_t *val)
{
union i2c_smbus_data data;
struct i2c_smbus_ioctl_data args;

args.read_write = I2C_SMBUS_READ;
args.command = reg;
args.size = I2C_SMBUS_BYTE_DATA;
args.data = &data;

if (ioctl(ctx->file, I2C_SMBUS, &args) == -1) {
applog(LOG_INFO, "i2c 0x%02x: failed to read from fdesc %d: %s",
ctx->addr, ctx->file, strerror(errno));
return false;
}
*val = data.byte;
applog(LOG_DEBUG, "I2C-R(0x%02x/0x%02x)=0x%02x", ctx->addr, reg, *val);
return true;
}