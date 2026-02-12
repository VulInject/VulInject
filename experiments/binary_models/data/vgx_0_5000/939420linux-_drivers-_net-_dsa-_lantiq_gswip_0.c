static int gswip_port_fdb_dump(struct dsa_switch *ds, int port,
dsa_fdb_dump_cb_t *cb, void *data)
{
struct gswip_priv *priv = ds->priv;
struct gswip_pce_table_entry mac_bridge = {0,};
unsigned char addr[6];
int i;
int err;

for (i = 0; i < 2048; i++) {
mac_bridge.table = GSWIP_TABLE_MAC_BRIDGE;
mac_bridge.index = i;

err = gswip_pce_table_entry_read(priv, &mac_bridge);
if (err) {
dev_err(priv->dev,
"failed to read mac bridge entry %d: %d\n",
i, err);
return err;
}

if (!mac_bridge.valid)
continue;

addr[5] = mac_bridge.key[0] & 0xff;
addr[4] = (mac_bridge.key[0] >> 8) & 0xff;
addr[3] = mac_bridge.key[1] & 0xff;
addr[2] = (mac_bridge.key[1] >> 8) & 0xff;
addr[1] = mac_bridge.key[2] & 0xff;
addr[0] = (mac_bridge.key[2] >> 8) & 0xff;
if (mac_bridge.val[1] & GSWIP_TABLE_MAC_BRIDGE_STATIC) {
if (mac_bridge.val[0] & BIT(port)) {
err = cb(addr, 0, true, data);
if (err)
return err;
}
} else {
if (((mac_bridge.val[0] & GENMASK(7, 4)) >> 4) == port) {
err = cb(addr, 0, false, data);
if (err)
return err;
}
}
}
return 0;
}