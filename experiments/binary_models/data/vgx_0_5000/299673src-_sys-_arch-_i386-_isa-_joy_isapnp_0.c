void
joy_isapnp_attach(struct device *parent, struct device *self, void *aux)
{
struct joy_softc *sc = (void *) self;
struct isa_attach_args *ia = aux;
int iobase = ia->ipa_io[0].base;

sc->port = iobase;
sc->timeout[0] = sc->timeout[1] = 0;
outb(iobase, 0xff);
DELAY(10000);		
printf(": joystick%sconnected\n",
(inb(iobase) & 0x0f) == 0x0f ? " not " : " ");
printf("\n");
}