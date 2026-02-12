static void pata_icside_postreset(struct ata_link *link, unsigned int *classes)
{
struct ata_port *ap = link->ap;
struct pata_icside_state *state = ap->host->private_data;

if (classes[0] != ATA_DEV_NONE || classes[1] != ATA_DEV_NONE)
return ata_sff_postreset(link, classes);

state->port[ap->port_no].disabled = 1;

if (state->type == ICS_TYPE_V6) {

void __iomem *irq_port = state->irq_port +
(ap->port_no ? ICS_ARCIN_V6_INTROFFSET_2 : ICS_ARCIN_V6_INTROFFSET_1);
readb(irq_port);
}
}