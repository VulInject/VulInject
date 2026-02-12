struct sio_hdl *
_sio_aucat_open(const char *str, unsigned int mode, int nbio)
{
struct sio_aucat_hdl *hdl;

hdl = malloc(sizeof(struct sio_aucat_hdl));
if (hdl == NULL)
return NULL;
if (!_aucat_open(&hdl->aucat, str, mode)) {
free(hdl);
return NULL;
}
_sio_create(&hdl->sio, &sio_aucat_ops, mode, nbio);
hdl->curvol = SIO_MAXVOL;
hdl->reqvol = SIO_MAXVOL;
hdl->pstate = PSTATE_INIT;
hdl->round = 0xdeadbeef;
hdl->walign = 0xdeadbeef;
return (struct sio_hdl *)hdl;
}