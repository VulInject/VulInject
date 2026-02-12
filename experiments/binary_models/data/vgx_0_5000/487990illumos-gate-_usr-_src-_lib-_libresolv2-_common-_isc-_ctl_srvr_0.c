static void
ctl_stop_read(struct ctl_sess *sess) {
static const char me[] = "ctl_stop_read";
struct ctl_sctx *ctx = sess->ctx;

REQUIRE(sess->state == reading || sess->state == reading_data);
REQUIRE(sess->rdID.opaque != NULL);
(void) evDeselectFD(ctx->ev, sess->rdID);
sess->rdID.opaque = NULL;
if (sess->rdtiID.opaque != NULL) {
(void) evClearIdleTimer(ctx->ev, sess->rdtiID);
sess->rdtiID.opaque = NULL;
}
ctl_new_state(sess, idling, me);
}