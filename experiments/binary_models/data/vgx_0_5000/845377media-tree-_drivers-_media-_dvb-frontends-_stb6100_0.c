static int stb6100_set_bandwidth(struct dvb_frontend *fe, u32 bandwidth)
{
u32 tmp;
int rc;
struct stb6100_state *state = fe->tuner_priv;

dprintk(verbose, FE_DEBUG, 1, "set bandwidth to %u Hz", bandwidth);

bandwidth /= 2; 

if (bandwidth >= 36000000)	
tmp = 31;
else if (bandwidth <= 5000000)	
tmp = 0;
else				
tmp = (bandwidth + 500000) / 1000000 - 5;


rc = stb6100_write_reg(state, STB6100_FCCK, 0x0d | STB6100_FCCK_FCCK);
if (rc < 0)
return rc;
rc = stb6100_write_reg(state, STB6100_F, 0xc0 | tmp);
if (rc < 0)
return rc;

msleep(5);  

rc = stb6100_write_reg(state, STB6100_FCCK, 0x0d);
if (rc < 0)
return rc;

msleep(10);  

return 0;
}