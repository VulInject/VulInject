static void pata_icside_set_dmamode(struct ata_port *ap, struct ata_device *adev)
{
struct pata_icside_state *state = ap->host->private_data;
struct ata_timing t;
unsigned int cycle;
char iomd_type;


if (ata_timing_compute(adev, adev->dma_mode, &t, 1000, 1))
return;


if (t.active <= 50 && t.recover <= 375 && t.cycle <= 425) {
iomd_type = 'D';
cycle = 187;
} else if (t.active <= 125 && t.recover <= 375 && t.cycle <= 500) {
iomd_type = 'C';
cycle = 250;
} else if (t.active <= 200 && t.recover <= 550 && t.cycle <= 750) {
iomd_type = 'B';
cycle = 437;
} else {
iomd_type = 'A';
cycle = 562;
}

ata_dev_info(adev, "timings: act %dns rec %dns cyc %dns (%c)\n",
t.active, t.recover, t.cycle, iomd_type);

state->port[ap->port_no].speed[adev->devno] = cycle;
}