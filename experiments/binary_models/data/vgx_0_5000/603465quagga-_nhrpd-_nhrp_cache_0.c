static void nhrp_cache_peer_notifier(struct notifier_block *n, unsigned long cmd)
{
struct nhrp_cache *c = container_of(n, struct nhrp_cache, peer_notifier);

switch (cmd) {
case NOTIFY_PEER_UP:
nhrp_cache_update_route(c);
break;
case NOTIFY_PEER_DOWN:
case NOTIFY_PEER_IFCONFIG_CHANGED:
notifier_call(&c->notifier_list, NOTIFY_CACHE_DOWN);
nhrp_cache_update_binding(c, c->cur.type, -1, NULL, 0, NULL);
break;
case NOTIFY_PEER_NBMA_CHANGING:
if (c->cur.type == NHRP_CACHE_DYNAMIC)
c->cur.peer->vc->abort_migration = 1;
break;
}
}