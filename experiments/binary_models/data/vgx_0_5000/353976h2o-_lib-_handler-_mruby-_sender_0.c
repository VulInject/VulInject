void h2o_mruby_sender_do_send_buffer(h2o_mruby_generator_t *generator, h2o_doublebuffer_t *db, h2o_buffer_t **input, int is_final)
{
assert(!db->inflight);

h2o_iovec_t buf = h2o_doublebuffer_prepare(db, input, generator->req->preferred_chunk_size);
size_t bufcnt = 1;
h2o_send_state_t send_state;

if (is_final && buf.len == db->buf->size && (*input)->size == 0) {
if (buf.len == 0)
--bufcnt;
send_state = H2O_SEND_STATE_FINAL;
} else {
if (buf.len == 0)
return;
send_state = H2O_SEND_STATE_IN_PROGRESS;
}

h2o_sendvec_t vec;
h2o_sendvec_init_raw(&vec, buf.base, buf.len);
h2o_mruby_sender_do_send(generator, &vec, bufcnt, send_state);
}