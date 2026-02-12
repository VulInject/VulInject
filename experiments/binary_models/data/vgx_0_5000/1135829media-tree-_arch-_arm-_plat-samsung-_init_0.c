void __init s3c_init_cpu(unsigned long idcode,
struct cpu_table *cputab, unsigned int cputab_size)
{
cpu = s3c_lookup_cpu(idcode, cputab, cputab_size);

if (cpu == NULL) {
printk(KERN_ERR "Unknown CPU type 0x%08lx\n", idcode);
panic("Unknown S3C24XX CPU");
}

printk("CPU %s (id 0x%08lx)\n", cpu->name, idcode);

if (cpu->init == NULL) {
printk(KERN_ERR "CPU %s support not enabled\n", cpu->name);
panic("Unsupported Samsung CPU");
}

if (cpu->map_io)
cpu->map_io();
}