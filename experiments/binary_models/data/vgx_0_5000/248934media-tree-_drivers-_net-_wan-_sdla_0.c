static void __sdla_read(struct net_device *dev, int addr, void *buf, short len)
{
char          *temp;
const void    *base;
int           offset, bytes;

temp = buf;
while(len)
{	
offset = addr & SDLA_ADDR_MASK;
bytes = offset + len > SDLA_WINDOW_SIZE ? SDLA_WINDOW_SIZE - offset : len;
base = (const void *) (dev->mem_start + offset);

SDLA_WINDOW(dev, addr);
memcpy(temp, base, bytes);

addr += bytes;
temp += bytes;
len  -= bytes;
}  
}