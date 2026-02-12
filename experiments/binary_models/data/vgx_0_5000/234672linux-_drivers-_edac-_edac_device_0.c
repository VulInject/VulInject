void edac_device_handle_ce_count(struct edac_device_ctl_info *edac_dev,
unsigned int count, int inst_nr, int block_nr,
const char *msg)
{
struct edac_device_instance *instance;
struct edac_device_block *block = NULL;

if (!count)
return;

if ((inst_nr >= edac_dev->nr_instances) || (inst_nr < 0)) {
edac_device_printk(edac_dev, KERN_ERR,
"INTERNAL ERROR: 'instance' out of range "
"(%d >= %d)\n", inst_nr,
edac_dev->nr_instances);
return;
}

instance = edac_dev->instances + inst_nr;

if ((block_nr >= instance->nr_blocks) || (block_nr < 0)) {
edac_device_printk(edac_dev, KERN_ERR,
"INTERNAL ERROR: instance %d 'block' "
"out of range (%d >= %d)\n",
inst_nr, block_nr,
instance->nr_blocks);
return;
}

if (instance->nr_blocks > 0) {
block = instance->blocks + block_nr;
block->counters.ce_count += count;
}


instance->counters.ce_count += count;
edac_dev->counters.ce_count += count;

if (edac_device_get_log_ce(edac_dev))
edac_device_printk(edac_dev, KERN_WARNING,
"CE: %s instance: %s block: %s count: %d '%s'\n",
edac_dev->ctl_name, instance->name,
block ? block->name : "N/A", count, msg);
}