gboolean jabber_start_stream(struct im_connection *ic)
{
struct jabber_data *jd = ic->proto_data;
int st;
char *greet;


xt_free(jd->xt);        
jd->xt = xt_new(jabber_handlers, ic);

if (jd->r_inpa <= 0) {
jd->r_inpa = b_input_add(jd->fd, B_EV_IO_READ, jabber_read_callback, ic);
}

greet = g_strdup_printf("%s<stream:stream to=\"%s\" xmlns=\"jabber:client\" "
"xmlns:stream=\"http:
(jd->flags & JFLAG_STARTTLS_DONE) ? "" : "<?xml version='1.0' ?>",
jd->server);

st = jabber_write(ic, greet, strlen(greet));

g_free(greet);

return st;
}