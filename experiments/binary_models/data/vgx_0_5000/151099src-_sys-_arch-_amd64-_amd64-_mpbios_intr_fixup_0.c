void
mpbios_pin_fixup(int bus, int dev, int rawpin, int pin)
{
struct mp_bus *mpb = &mp_busses[bus];
struct mp_intr_map *mip;

for (mip = mpb->mb_intrs; mip != NULL; mip = mip->next) {
if (mip->bus_pin == ((dev << 2) | (rawpin - 1)) &&
mip->ioapic_pin != pin) {

if (mp_verbose) {

printf("%s: int%d attached to %s",
mip->ioapic->sc_pic.pic_dev.dv_xname,
pin, mpb->mb_name);

if (mpb->mb_idx != -1)
printf("%d", mpb->mb_idx);

(*(mpb->mb_intr_print))(mip->bus_pin);

printf(" (fixup)\n");
}

mip->ioapic_pin = pin;
mip->ioapic_ih &= ~APIC_INT_PIN_MASK;
mip->ioapic_ih |= (pin << APIC_INT_PIN_SHIFT);
if (mip->ioapic->sc_pins[pin].ip_map == NULL)
mip->ioapic->sc_pins[pin].ip_map = mip;
}
}
}