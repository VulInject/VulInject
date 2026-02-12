int
pcmk_fence_history(xmlNodePtr *xml, stonith_t *st, const char *target,
unsigned int timeout, bool quiet, int verbose,
bool broadcast, bool cleanup)
{
pcmk__output_t *out = NULL;
int rc = pcmk_rc_ok;

rc = pcmk__xml_output_new(&out, xml);
if (rc != pcmk_rc_ok) {
return rc;
}

stonith__register_messages(out);

out->quiet = quiet;

rc = pcmk__fence_history(out, st, target, timeout, verbose, broadcast, cleanup);
pcmk__xml_output_finish(out, xml);
return rc;
}