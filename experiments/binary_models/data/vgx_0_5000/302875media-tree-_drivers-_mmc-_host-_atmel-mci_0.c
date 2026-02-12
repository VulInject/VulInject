static void atmci_set_timeout(struct atmel_mci *host,
struct atmel_mci_slot *slot, struct mmc_data *data)
{
static unsigned	dtomul_to_shift[] = {
0, 4, 7, 8, 10, 12, 16, 20
};
unsigned	timeout;
unsigned	dtocyc;
unsigned	dtomul;

timeout = atmci_ns_to_clocks(host, data->timeout_ns)
+ data->timeout_clks;

for (dtomul = 0; dtomul < 8; dtomul++) {
unsigned shift = dtomul_to_shift[dtomul];
dtocyc = (timeout + (1 << shift) - 1) >> shift;
if (dtocyc < 15)
break;
}

if (dtomul >= 8) {
dtomul = 7;
dtocyc = 15;
}

dev_vdbg(&slot->mmc->class_dev, "setting timeout to %u cycles\n",
dtocyc << dtomul_to_shift[dtomul]);
atmci_writel(host, ATMCI_DTOR, (ATMCI_DTOMUL(dtomul) | ATMCI_DTOCYC(dtocyc)));
}