static int
vlan_undo_offline(rcm_handle_t *hd, char *rsrc, id_t id, uint_t flags,
char **errorp, rcm_info_t **info)
{
link_cache_t *node;

rcm_log_message(RCM_TRACE1, "VLAN: online(%s)\n", rsrc);

(void) mutex_lock(&cache_lock);
node = cache_lookup(hd, rsrc, CACHE_NO_REFRESH);
if (node == NULL) {
vlan_log_err(DATALINK_INVALID_LINKID, errorp, "no such link");
(void) mutex_unlock(&cache_lock);
errno = ENOENT;
return (RCM_FAILURE);
}


if (!(node->vc_state & CACHE_NODE_OFFLINED)) {
vlan_log_err(node->vc_linkid, errorp, "link not offlined");
(void) mutex_unlock(&cache_lock);
errno = ENOTSUP;
return (RCM_SUCCESS);
}

vlan_online_vlan(node);


vlan_consumer_online(hd, node, errorp, flags, info);

node->vc_state &= ~CACHE_NODE_OFFLINED;
rcm_log_message(RCM_TRACE1, "VLAN: online succeeded(%s)\n", rsrc);
(void) mutex_unlock(&cache_lock);
return (RCM_SUCCESS);
}