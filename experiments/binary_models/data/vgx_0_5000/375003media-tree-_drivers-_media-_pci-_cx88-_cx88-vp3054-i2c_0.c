
MODULE_DESCRIPTION("driver for cx2388x VP3054 design");
MODULE_AUTHOR("Chris Pascoe <c.pascoe@itee.uq.edu.au>");
MODULE_LICENSE("GPL");



static void vp3054_bit_setscl(void *data, int state)
{
struct cx8802_dev *dev = data;
struct cx88_core *core = dev->core;
struct vp3054_i2c_state *vp3054_i2c = dev->vp3054;

if (state) {
vp3054_i2c->state |=  0x0001;	
vp3054_i2c->state &= ~0x0100;	
} else {
vp3054_i2c->state &= ~0x0001;	
vp3054_i2c->state |=  0x0100;	
}
cx_write(MO_GP0_IO, 0x010000 | vp3054_i2c->state);
cx_read(MO_GP0_IO);
}