static int adv7842_cec_adap_enable(struct cec_adapter *adap, bool enable)
{
struct adv7842_state *state = cec_get_drvdata(adap);
struct v4l2_subdev *sd = &state->sd;

if (!state->cec_enabled_adap && enable) {
cec_write_clr_set(sd, 0x2a, 0x01, 0x01); 
cec_write(sd, 0x2c, 0x01);	
cec_write_clr_set(sd, 0x11, 0x01, 0); 





io_write_clr_set(sd, 0x96, 0x0f, 0x0f);
cec_write(sd, 0x26, 0x01);            
} else if (state->cec_enabled_adap && !enable) {

io_write_clr_set(sd, 0x96, 0x0f, 0x00);

cec_write_clr_set(sd, 0x27, 0x70, 0x00);

cec_write_clr_set(sd, 0x2a, 0x01, 0x00);
state->cec_valid_addrs = 0;
}
state->cec_enabled_adap = enable;
return 0;
}