static void etap_change(int op, unsigned char *addr, unsigned char *netmask,
int fd)
{
struct addr_change change;
char *output;
int n;

change.what = op;
memcpy(change.addr, addr, sizeof(change.addr));
memcpy(change.netmask, netmask, sizeof(change.netmask));
CATCH_EINTR(n = write(fd, &change, sizeof(change)));
if (n != sizeof(change)) {
printk(UM_KERN_ERR "etap_change - request failed, err = %d\n",
errno);
return;
}

output = uml_kmalloc(UM_KERN_PAGE_SIZE, UM_GFP_KERNEL);
if (output == NULL)
printk(UM_KERN_ERR "etap_change : Failed to allocate output "
"buffer\n");
read_output(fd, output, UM_KERN_PAGE_SIZE);
if (output != NULL) {
printk("%s", output);
kfree(output);
}
}