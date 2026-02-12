static int flexcop_i2c_operation(struct flexcop_device *fc,
flexcop_ibi_value *r100)
{
int i;
flexcop_ibi_value r;

r100->tw_sm_c_100.working_start = 1;
deb_i2c("r100 before: %08x\n",r100->raw);

fc->write_ibi_reg(fc, tw_sm_c_100, ibi_zero);
fc->write_ibi_reg(fc, tw_sm_c_100, *r100); 

for (i = 0; i < FC_MAX_I2C_RETRIES; i++) {
r = fc->read_ibi_reg(fc, tw_sm_c_100);

if (!r.tw_sm_c_100.no_base_addr_ack_error) {
if (r.tw_sm_c_100.st_done) {
*r100 = r;
deb_i2c("i2c success\n");
return 0;
}
} else {
deb_i2c("suffering from an i2c ack_error\n");
return -EREMOTEIO;
}
}
deb_i2c("tried %d times i2c operation, never finished or too many ack errors.\n",
i);
return -EREMOTEIO;
}