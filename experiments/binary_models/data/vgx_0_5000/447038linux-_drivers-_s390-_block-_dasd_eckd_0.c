static int dasd_eckd_track_from_irb(struct irb *irb, struct dasd_device *device,
sector_t *track)
{
struct dasd_eckd_private *private = device->private;
u8 *sense = NULL;
u32 cyl;
u8 head;

sense = dasd_get_sense(irb);
if (!sense) {
DBF_DEV_EVENT(DBF_WARNING, device, "%s",
"ESE error no sense data\n");
return -EINVAL;
}
if (!(sense[27] & DASD_SENSE_BIT_2)) {
DBF_DEV_EVENT(DBF_WARNING, device, "%s",
"ESE error no valid track data\n");
return -EINVAL;
}

if (sense[27] & DASD_SENSE_BIT_3) {

cyl = sense[30] << 20;
cyl |= (sense[31] & 0xF0) << 12;
cyl |= sense[28] << 8;
cyl |= sense[29];
} else {
cyl = sense[29] << 8;
cyl |= sense[30];
}
head = sense[31] & 0x0F;
*track = cyl * private->rdc_data.trk_per_cyl + head;
return 0;
}