static void
check_replay_error(const char *msg, OM_uint32 major, OM_uint32 minor)
{
OM_uint32 tmpmin, msg_ctx = 0;
const char *replay = "Request is a replay";
gss_buffer_desc m;

if (major != GSS_S_FAILURE) {
fprintf(stderr, "%s: expected major code GSS_S_FAILURE\n", msg);
check_gsserr(msg, major, minor);
exit(1);
}

(void)gss_display_status(&tmpmin, minor, GSS_C_MECH_CODE, GSS_C_NULL_OID,
&msg_ctx, &m);
if (m.length != strlen(replay) || memcmp(m.value, replay, m.length) != 0) {
fprintf(stderr, "%s: expected replay error; got %.*s\n", msg,
(int)m.length, (char *)m.value);
exit(1);
}
(void)gss_release_buffer(&tmpmin, &m);
}