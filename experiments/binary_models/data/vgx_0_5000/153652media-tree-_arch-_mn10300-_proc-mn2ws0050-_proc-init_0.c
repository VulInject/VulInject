void __init get_mem_info(unsigned long *mem_base, unsigned long *mem_size)
{
unsigned long memconf = MEMCONF;
unsigned long size = 0; 

*mem_base = 0x90000000; 

switch (memconf & 0x00000003) {
case 0x01:
size = 256 / 8;		
break;
case 0x02:
size = 512 / 8;		
break;
case 0x03:
size = 1024 / 8;	
break;
default:
panic("Invalid SDRAM size");
break;
}

printk(KERN_INFO "DDR2-SDRAM: %luMB x 2 @%08lx\n", size, *mem_base);

*mem_size = (size * 2) << 20;
}