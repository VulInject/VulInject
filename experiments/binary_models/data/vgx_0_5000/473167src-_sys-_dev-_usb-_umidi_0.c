static void
out_intr(struct usbd_xfer *xfer, void *priv, usbd_status status)
{
struct umidi_endpoint *ep = (struct umidi_endpoint *)priv;
struct umidi_softc *sc = ep->sc;
struct umidi_jack *j;
unsigned pending;

if (usbd_is_dying(sc->sc_udev))
return;

ep->used = 0;
ep->busy = 0;
for (pending = ep->pending; pending > 0; pending--) {
j = SIMPLEQ_FIRST(&ep->intrq);
if (j == NULL) {
printf("umidi: missing intr entry\n");
break;
}
SIMPLEQ_REMOVE_HEAD(&ep->intrq, intrq_entry);
ep->pending--;
j->intr = 0;
mtx_enter(&audio_lock);
if (j->opened && j->u.out.intr)
(*j->u.out.intr)(j->arg);
mtx_leave(&audio_lock);
}
}