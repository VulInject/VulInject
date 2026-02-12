static int init_stream(struct snd_bebob *bebob, struct amdtp_stream *stream)
{
unsigned int flags = CIP_BLOCKING;
enum amdtp_stream_direction dir_stream;
struct cmp_connection *conn;
enum cmp_direction dir_conn;
int err;

if (stream == &bebob->tx_stream) {
dir_stream = AMDTP_IN_STREAM;
conn = &bebob->out_conn;
dir_conn = CMP_OUTPUT;
} else {
dir_stream = AMDTP_OUT_STREAM;
conn = &bebob->in_conn;
dir_conn = CMP_INPUT;
}

if (stream == &bebob->tx_stream) {
if (bebob->quirks & SND_BEBOB_QUIRK_WRONG_DBC)
flags |= CIP_EMPTY_HAS_WRONG_DBC;
}

err = cmp_connection_init(conn, bebob->unit, dir_conn, 0);
if (err < 0)
return err;

err = amdtp_am824_init(stream, bebob->unit, dir_stream, flags);
if (err < 0) {
cmp_connection_destroy(conn);
return err;
}

return 0;
}