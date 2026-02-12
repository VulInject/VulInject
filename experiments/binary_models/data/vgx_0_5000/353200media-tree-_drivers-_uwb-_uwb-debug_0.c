static int reservations_print(struct seq_file *s, void *p)
{
struct uwb_rc *rc = s->private;
struct uwb_rsv *rsv;

mutex_lock(&rc->rsvs_mutex);

list_for_each_entry(rsv, &rc->reservations, rc_node) {
struct uwb_dev_addr devaddr;
char owner[UWB_ADDR_STRSIZE], target[UWB_ADDR_STRSIZE];
bool is_owner;

uwb_dev_addr_print(owner, sizeof(owner), &rsv->owner->dev_addr);
if (rsv->target.type == UWB_RSV_TARGET_DEV) {
devaddr = rsv->target.dev->dev_addr;
is_owner = &rc->uwb_dev == rsv->owner;
} else {
devaddr = rsv->target.devaddr;
is_owner = true;
}
uwb_dev_addr_print(target, sizeof(target), &devaddr);

seq_printf(s, "%c %s -> %s: %s\n",
is_owner ? 'O' : 'T',
owner, target, uwb_rsv_state_str(rsv->state));
seq_printf(s, "  stream: %d  type: %s\n",
rsv->stream, uwb_rsv_type_str(rsv->type));
seq_printf(s, "  %*pb\n", UWB_NUM_MAS, rsv->mas.bm);
}

mutex_unlock(&rc->rsvs_mutex);

return 0;
}