void
lnet_msg_attach_md(struct lnet_msg *msg, struct lnet_libmd *md,
unsigned int offset, unsigned int mlen)
{


LASSERT(!msg->msg_routing);

msg->msg_md = md;
if (msg->msg_receiving) { 
msg->msg_offset = offset;
msg->msg_wanted = mlen;
}

md->md_refcount++;
if (md->md_threshold != LNET_MD_THRESH_INF) {
LASSERT(md->md_threshold > 0);
md->md_threshold--;
}


lnet_md2handle(&msg->msg_ev.md_handle, md);
lnet_md_deconstruct(md, &msg->msg_ev.md);
}