static ssize_t companion_show(struct device *dev,
struct device_attribute *attr,
char *buf)
{
struct ehci_hcd		*ehci;
int			nports, index, n;
int			count = PAGE_SIZE;
char			*ptr = buf;

ehci = hcd_to_ehci(dev_get_drvdata(dev));
nports = HCS_N_PORTS(ehci->hcs_params);

for (index = 0; index < nports; ++index) {
if (test_bit(index, &ehci->companion_ports)) {
n = scnprintf(ptr, count, "%d\n", index + 1);
ptr += n;
count -= n;
}
}
return ptr - buf;
}