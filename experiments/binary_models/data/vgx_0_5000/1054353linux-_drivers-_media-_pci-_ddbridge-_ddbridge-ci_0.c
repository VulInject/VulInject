static int poll_slot_status(struct dvb_ca_en50221 *ca, int slot, int open)
{
struct ddb_ci *ci = ca->data;
u32 val = ddbreadl(ci->port->dev, CI_CONTROL(ci->nr));
int stat = 0;

if (val & CI_CAM_DETECT)
stat |= DVB_CA_EN50221_POLL_CAM_PRESENT;
if (val & CI_CAM_READY)
stat |= DVB_CA_EN50221_POLL_CAM_READY;
return stat;
}

static struct dvb_ca_en50221 en_templ = {
.read_attribute_mem  = read_attribute_mem,
.write_attribute_mem = write_attribute_mem,
.read_cam_control    = read_cam_control,
.write_cam_control   = write_cam_control,
.slot_reset          = slot_reset,
.slot_shutdown       = slot_shutdown,
.slot_ts_enable      = slot_ts_enable,
.poll_slot_status    = poll_slot_status,
};