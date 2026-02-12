static int cosm_scif_connect(void)
{
struct scif_port_id port_id;
int i, rc;

client_epd = scif_open();
if (!client_epd) {
dev_err(&client_spdev->dev, "%s %d scif_open failed\n",
__func__, __LINE__);
return -ENOMEM;
}

port_id.node = 0;
port_id.port = SCIF_COSM_LISTEN_PORT;

for (i = 0; i < COSM_SCIF_MAX_RETRIES; i++) {
rc = scif_connect(client_epd, &port_id);
if (rc < 0)
msleep(1000);
else
break;
}

if (rc < 0) {
dev_err(&client_spdev->dev, "%s %d scif_connect rc %d\n",
__func__, __LINE__, rc);
scif_close(client_epd);
client_epd = NULL;
}
return rc < 0 ? rc : 0;
}