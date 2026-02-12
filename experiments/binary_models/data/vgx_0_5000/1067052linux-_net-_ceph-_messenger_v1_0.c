static void prepare_write_message_footer(struct ceph_connection *con)
{
struct ceph_msg *m = con->out_msg;

m->footer.flags |= CEPH_MSG_FOOTER_COMPLETE;

dout("prepare_write_message_footer %p\n", con);
con_out_kvec_add(con, sizeof_footer(con), &m->footer);
if (con->peer_features & CEPH_FEATURE_MSG_AUTH) {
if (con->ops->sign_message)
con->ops->sign_message(m);
else
m->footer.sig = 0;
} else {
m->old_footer.flags = m->footer.flags;
}
con->v1.out_more = m->more_to_follow;
con->v1.out_msg_done = true;
}