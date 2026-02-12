void
vioapic_process_eoi(struct vm *vm, int vcpuid, int vector)
{
struct vioapic *vioapic;
int pin;

KASSERT(vector >= 0 && vector < 256,
("vioapic_process_eoi: invalid vector %d", vector));

vioapic = vm_ioapic(vm);


VIOAPIC_LOCK(vioapic);
for (pin = 0; pin < REDIR_ENTRIES; pin++) {
if ((vioapic->rtbl[pin].reg & IOART_REM_IRR) == 0)
continue;
if ((vioapic->rtbl[pin].reg & IOART_INTVEC) != vector)
continue;
vioapic->rtbl[pin].reg &= ~IOART_REM_IRR;
if (vioapic->rtbl[pin].acnt > 0) {

vioapic_send_intr(vioapic, pin);
}
}
VIOAPIC_UNLOCK(vioapic);
}