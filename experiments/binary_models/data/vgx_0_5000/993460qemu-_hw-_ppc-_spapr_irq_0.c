int spapr_irq_msi_alloc(SpaprMachineState *spapr, uint32_t num, bool align,
Error **errp)
{
int irq;


align -= 1;

irq = bitmap_find_next_zero_area(spapr->irq_map, spapr->irq_map_nr, 0, num,
align);
if (irq == spapr->irq_map_nr) {
error_setg(errp, "can't find a free %d-IRQ block", num);
return -1;
}

bitmap_set(spapr->irq_map, irq, num);

return irq + SPAPR_IRQ_MSI;
}