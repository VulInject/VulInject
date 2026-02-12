static void process_unsol_events(struct work_struct *work)
{
struct hdac_bus *bus = container_of(work, struct hdac_bus, unsol_work);
struct hdac_device *codec;
struct hdac_driver *drv;
unsigned int rp, caddr, res;

while (bus->unsol_rp != bus->unsol_wp) {
rp = (bus->unsol_rp + 1) % HDA_UNSOL_QUEUE_SIZE;
bus->unsol_rp = rp;
rp <<= 1;
res = bus->unsol_queue[rp];
caddr = bus->unsol_queue[rp + 1];
if (!(caddr & (1 << 4))) 
continue;
codec = bus->caddr_tbl[caddr & 0x0f];
if (!codec || !codec->dev.driver)
continue;
drv = drv_to_hdac_driver(codec->dev.driver);
if (drv->unsol_event)
drv->unsol_event(codec, res);
}
}