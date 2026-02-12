static inline ibd_rc_chan_t *
ibd_rc_rm_from_chan_list(ibd_rc_chan_list_t *list, ibd_rc_chan_t *chan)
{
ibd_rc_chan_t *pre_chan;

mutex_enter(&list->chan_list_mutex);
if (list->chan_list == chan) {
DPRINT(30, "ibd_rc_rm_from_chan_list(first): found chan(%p)"
" in chan_list", chan);
list->chan_list = chan->next;
} else {
pre_chan = list->chan_list;
while (pre_chan != NULL) {
if (pre_chan->next == chan) {
DPRINT(30, "ibd_rc_rm_from_chan_list"
"(middle): found chan(%p)", chan);
pre_chan->next = chan->next;
break;
}
pre_chan = pre_chan->next;
}
if (pre_chan == NULL)
chan = NULL;
}
mutex_exit(&list->chan_list_mutex);
return (chan);
}