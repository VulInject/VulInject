static void set_transforms(struct jr3_sensor __iomem *sensor,
const struct jr3_pci_transform *transf, short num)
{
int i;

num &= 0x000f;		
for (i = 0; i < 8; i++) {
set_u16(&sensor->transforms[num].link[i].link_type,
transf->link[i].link_type);
udelay(1);
set_s16(&sensor->transforms[num].link[i].link_amount,
transf->link[i].link_amount);
udelay(1);
if (transf->link[i].link_type == end_x_form)
break;
}
}