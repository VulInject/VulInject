static void vmw_dx_streamoutput_commit_notify(struct vmw_resource *res,
enum vmw_cmdbuf_res_state state)
{
struct vmw_private *dev_priv = res->dev_priv;
struct vmw_dx_streamoutput *so = vmw_res_to_dx_streamoutput(res);

if (state == VMW_CMDBUF_RES_ADD) {
mutex_lock(&dev_priv->binding_mutex);
vmw_cotable_add_resource(so->cotable, &so->cotable_head);
so->committed = true;
res->id = so->id;
mutex_unlock(&dev_priv->binding_mutex);
} else {
mutex_lock(&dev_priv->binding_mutex);
list_del_init(&so->cotable_head);
so->committed = false;
res->id = -1;
mutex_unlock(&dev_priv->binding_mutex);
}
}