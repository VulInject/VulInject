static uint8_t max7310_rx(I2CSlave *i2c)
{
MAX7310State *s = MAX7310(i2c);

switch (s->command) {
case 0x00:	
return s->level ^ s->polarity;

case 0x01:	
return s->level & ~s->direction;

case 0x02:	
return s->polarity;

case 0x03:	
return s->direction;

case 0x04:	
return s->status;

case 0xff:	
return 0xff;

default:
qemu_log_mask(LOG_UNIMP, "%s: Unsupported register 0x02%" PRIx8 "\n",
__func__, s->command);
break;
}
return 0xff;
}