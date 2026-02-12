int jabber_si_send_request(struct im_connection *ic, char *who, struct jabber_transfer *tf);


void jabber_si_free_transfer(file_transfer_t *ft)
{
struct jabber_transfer *tf = ft->data;
struct jabber_data *jd = tf->ic->proto_data;

if (tf->watch_in) {
b_event_remove(tf->watch_in);
tf->watch_in = 0;
}

jd->filetransfers = g_slist_remove(jd->filetransfers, tf);

if (tf->fd != -1) {
closesocket(tf->fd);
tf->fd = -1;
}

if (tf->disco_timeout) {
b_event_remove(tf->disco_timeout);
}

g_free(tf->ini_jid);
g_free(tf->tgt_jid);
g_free(tf->iq_id);
g_free(tf->sid);
g_free(tf);
}