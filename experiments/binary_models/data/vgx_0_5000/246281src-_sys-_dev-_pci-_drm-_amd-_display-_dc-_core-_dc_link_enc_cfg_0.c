static void remove_link_enc_assignment(
struct dc_state *state,
struct dc_stream_state *stream,
enum engine_id eng_id)
{
int eng_idx;
int i;

if (eng_id != ENGINE_ID_UNKNOWN) {
eng_idx = eng_id - ENGINE_ID_DIGA;


for (i = 0; i < MAX_PIPES; i++) {
struct link_enc_assignment assignment = state->res_ctx.link_enc_cfg_ctx.link_enc_assignments[i];

if (assignment.valid && assignment.stream == stream) {
state->res_ctx.link_enc_cfg_ctx.link_enc_assignments[i].valid = false;

if (get_stream_using_link_enc(state, eng_id) == NULL)
state->res_ctx.link_enc_cfg_ctx.link_enc_avail[eng_idx] = eng_id;

stream->link_enc = NULL;
state->res_ctx.link_enc_cfg_ctx.link_enc_assignments[i].eng_id = ENGINE_ID_UNKNOWN;
state->res_ctx.link_enc_cfg_ctx.link_enc_assignments[i].stream = NULL;
dc_stream_release(stream);
break;
}
}
}
}