static void qedi_link_update(void *dev, struct qed_link_output *link)
{
struct qedi_ctx *qedi = (struct qedi_ctx *)dev;

if (link->link_up) {
QEDI_INFO(&qedi->dbg_ctx, QEDI_LOG_INFO, "Link Up event.\n");
atomic_set(&qedi->link_state, QEDI_LINK_UP);
} else {
QEDI_INFO(&qedi->dbg_ctx, QEDI_LOG_INFO,
"Link Down event.\n");
atomic_set(&qedi->link_state, QEDI_LINK_DOWN);
}
}