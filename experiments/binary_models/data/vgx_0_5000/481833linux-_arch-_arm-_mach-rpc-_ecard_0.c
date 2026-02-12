static void ecard_proc_init(void)
{
proc_bus_ecard_dir = proc_mkdir("bus/ecard", NULL);
proc_create_single("devices", 0, proc_bus_ecard_dir,
ecard_devices_proc_show);
}

do {							\
(ec)->resource[nr].name = dev_name(&ec->dev);	\
(ec)->resource[nr].start = st;			\
(ec)->resource[nr].end = (st) + (sz) - 1;	\
(ec)->resource[nr].flags = IORESOURCE_MEM;	\
} while (0)

static void __init ecard_free_card(struct expansion_card *ec)
{
int i;

for (i = 0; i < ECARD_NUM_RESOURCES; i++)
if (ec->resource[i].flags)
release_resource(&ec->resource[i]);

kfree(ec);
}