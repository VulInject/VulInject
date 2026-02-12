void
apic_vectorset(struct ioapic_softc *sc, int pin, int minlevel, int maxlevel)
{
struct ioapic_pin *pp = &sc->sc_pins[pin];
int nvector, ovector = pp->ip_vector;

if (maxlevel == 0) {

pp->ip_minlevel = 0xff; 
pp->ip_maxlevel = 0; 
pp->ip_vector = 0;
} else if (minlevel != pp->ip_minlevel) {
if (minlevel != maxlevel)
printf("%s: pin %d shares different IPL interrupts "
"(%x..%x)\n", sc->sc_pic.pic_name, pin,
minlevel, maxlevel);


nvector = idt_vec_alloc(minlevel, minlevel+15);
if (nvector == 0) {

panic("%s: can't alloc vector for pin %d at level %x",
sc->sc_pic.pic_name, pin, maxlevel);
}

idt_vec_set(nvector, apichandler[nvector & 0xf]);
pp->ip_minlevel = minlevel;
pp->ip_vector = nvector;
}

pp->ip_maxlevel = maxlevel;
apic_maxlevel[pp->ip_vector] = maxlevel;
apic_intrhand[pp->ip_vector] = pp->ip_handler;

if (ovector && ovector != pp->ip_vector) {

apic_intrhand[ovector] = NULL;
idt_vec_free(ovector);
}

apic_set_redir(sc, pin);
}