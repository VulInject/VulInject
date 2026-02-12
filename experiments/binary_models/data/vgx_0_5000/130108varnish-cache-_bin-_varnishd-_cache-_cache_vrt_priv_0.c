static struct vmod_priv *
vrt_priv_dynamic(struct ws *ws, struct vrt_privs *privs, uintptr_t vmod_id)
{
struct vrt_priv *vp, *ovp;

AN(vmod_id);


if (WS_ReserveSize(ws, sizeof *vp) == 0)
return (vrt_priv_dynamic_get(privs, vmod_id));

vp = WS_Reservation(ws);
INIT_OBJ(vp, VRT_PRIV_MAGIC);
vp->vmod_id = vmod_id;
ovp = VRBT_INSERT(vrt_privs, privs, vp);
if (ovp == NULL) {
WS_Release(ws, sizeof *vp);
return (vp->priv);
}
WS_Release(ws, 0);
return (ovp->priv);
}