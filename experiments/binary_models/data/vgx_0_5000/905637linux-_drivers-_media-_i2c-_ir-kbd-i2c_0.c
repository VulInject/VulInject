static int get_key_pixelview(struct IR_i2c *ir, enum rc_proto *protocol,
u32 *scancode, u8 *toggle)
{
int rc;
unsigned char b;


rc = i2c_master_recv(ir->c, &b, 1);
if (rc != 1) {
dev_dbg(&ir->rc->dev, "read error\n");
if (rc < 0)
return rc;
return -EIO;
}

*protocol = RC_PROTO_OTHER;
*scancode = b;
*toggle = 0;
return 1;
}