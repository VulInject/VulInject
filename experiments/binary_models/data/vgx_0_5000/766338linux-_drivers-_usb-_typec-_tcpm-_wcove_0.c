static int wcove_read_rx_buffer(struct wcove_typec *wcove, void *msg)
{
unsigned int info;
int ret;
int i;

ret = regmap_read(wcove->regmap, USBC_RXINFO, &info);
if (ret)
return ret;



for (i = 0; i < USBC_RXINFO_RXBYTES(info); i++) {
ret = regmap_read(wcove->regmap, USBC_RX_DATA + i, msg + i);
if (ret)
return ret;
}

return regmap_write(wcove->regmap, USBC_RXSTATUS,
USBC_RXSTATUS_RXCLEAR);
}