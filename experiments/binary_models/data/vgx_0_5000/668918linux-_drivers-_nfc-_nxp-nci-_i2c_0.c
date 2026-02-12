static int nxp_nci_i2c_write(void *phy_id, struct sk_buff *skb)
{
int r;
struct nxp_nci_i2c_phy *phy = phy_id;
struct i2c_client *client = phy->i2c_dev;

if (phy->hard_fault != 0)
return phy->hard_fault;

r = i2c_master_send(client, skb->data, skb->len);
if (r < 0) {

msleep(110);
r = i2c_master_send(client, skb->data, skb->len);
}

if (r < 0) {
nfc_err(&client->dev, "Error %d on I2C send\n", r);
} else if (r != skb->len) {
nfc_err(&client->dev,
"Invalid length sent: %u (expected %u)\n",
r, skb->len);
r = -EREMOTEIO;
} else {

r = 0;
}

return r;
}