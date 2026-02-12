static int tce_table_setparms(struct pci_dev *dev, struct iommu_table *tbl)
{
unsigned int bitmapsz;
unsigned long bmppages;
int ret;

tbl->it_busno = dev->bus->number;


tbl->it_size = table_size_to_number_of_entries(specified_table_size);


bitmapsz = tbl->it_size / BITS_PER_BYTE;
bmppages = __get_free_pages(GFP_KERNEL, get_order(bitmapsz));
if (!bmppages) {
printk(KERN_ERR "Calgary: cannot allocate bitmap\n");
ret = -ENOMEM;
goto done;
}

tbl->it_map = (unsigned long*)bmppages;

memset(tbl->it_map, 0, bitmapsz);

tbl->it_hint = 0;

spin_lock_init(&tbl->it_lock);

return 0;

done:
return ret;
}