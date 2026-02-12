int caif_disconnect_client(struct net *net, struct cflayer *adap_layer)
{
u8 channel_id;
struct cfcnfg *cfg = get_cfcnfg(net);

caif_assert(adap_layer != NULL);
cfctrl_cancel_req(cfg->ctrl, adap_layer);
channel_id = adap_layer->id;
if (channel_id != 0) {
struct cflayer *servl;
servl = cfmuxl_remove_uplayer(cfg->mux, channel_id);
cfctrl_linkdown_req(cfg->ctrl, channel_id, adap_layer);
if (servl != NULL)
layer_set_up(servl, NULL);
} else
pr_debug("nothing to disconnect\n");


synchronize_rcu();
if (adap_layer->ctrlcmd != NULL)
adap_layer->ctrlcmd(adap_layer, CAIF_CTRLCMD_DEINIT_RSP, 0);
return 0;

}