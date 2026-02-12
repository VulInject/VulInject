void
ampintc_intr_disestablish(void *cookie)
{
struct ampintc_softc	*sc = ampintc;
struct intrhand		*ih = cookie;
int			 psw;

printf("ampintc_intr_disestablish irq %d level %d [%s]\n",
ih->ih_irq, ih->ih_ipl, ih->ih_name);

psw = disable_interrupts(PSR_I);

TAILQ_REMOVE(&sc->sc_handler[ih->ih_irq].iq_list, ih, ih_list);
if (ih->ih_name != NULL)
evcount_detach(&ih->ih_count);
free(ih, M_DEVBUF, sizeof(*ih));

ampintc_calc_mask();

restore_interrupts(psw);
}