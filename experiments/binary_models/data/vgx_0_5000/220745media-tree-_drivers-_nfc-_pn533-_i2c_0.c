static int pn533_i2c_send_frame(struct pn533 *dev,
struct sk_buff *out)
{
struct pn533_i2c_phy *phy = dev->phy;
struct i2c_client *client = phy->i2c_dev;
int rc;

if (phy->hard_fault != 0)
return phy->hard_fault;

if (phy->priv == NULL)
phy->priv = dev;

phy->aborted = false;

print_hex_dump_debug("PN533_i2c TX: ", DUMP_PREFIX_NONE, 16, 1,
out->data, out->len, false);

rc = i2c_master_send(client, out->data, out->len);

if (rc == -EREMOTEIO) { 
usleep_range(6000, 10000);
rc = i2c_master_send(client, out->data, out->len);
}

if (rc >= 0) {
if (rc != out->len)
rc = -EREMOTEIO;
else
rc = 0;
}

return rc;
}