static void
reset_epan_mem(capture_file *cf,epan_dissect_t *edt, gboolean tree, gboolean visual)
{
if (!epan_auto_reset || (cf->count < epan_auto_reset_count))
return;

fprintf(stderr, "resetting session.\n");

epan_dissect_cleanup(edt);
epan_free(cf->epan);

cf->epan = tshark_epan_new(cf);
epan_dissect_init(edt, cf->epan, tree, visual);
cf->count = 0;
}