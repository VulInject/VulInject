static void display_link_mode(struct happy_meal *hp, void __iomem *tregs)
{
printk(KERN_INFO "%s: Link is up using ", hp->dev->name);
if (hp->tcvr_type == external)
printk("external ");
else
printk("internal ");
printk("transceiver at ");
hp->sw_lpa = happy_meal_tcvr_read(hp, tregs, MII_LPA);
if (hp->sw_lpa & (LPA_100HALF | LPA_100FULL)) {
if (hp->sw_lpa & LPA_100FULL)
printk("100Mb/s, Full Duplex.\n");
else
printk("100Mb/s, Half Duplex.\n");
} else {
if (hp->sw_lpa & LPA_10FULL)
printk("10Mb/s, Full Duplex.\n");
else
printk("10Mb/s, Half Duplex.\n");
}
}