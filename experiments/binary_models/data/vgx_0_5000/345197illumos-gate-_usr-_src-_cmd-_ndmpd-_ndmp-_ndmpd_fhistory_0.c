int
ndmp_send_recovery_stat_v3(ndmpd_module_params_t *params,
ndmp_lbr_params_t *nlp, int idx, int stat)
{
int rv;
mem_ndmp_name_v3_t *ep;

rv = -1;
if (!params) {
NDMP_LOG(LOG_DEBUG, "params == NULL");
} else if (!params->mp_file_recovered_func) {
NDMP_LOG(LOG_DEBUG, "paramsfile_recovered_func == NULL");
} else if (!nlp) {
NDMP_LOG(LOG_DEBUG, "nlp == NULL");
} else if (idx < 0) {
NDMP_LOG(LOG_DEBUG, "idx(%d) < 0", idx);
} else if (!(ep = (mem_ndmp_name_v3_t *)MOD_GETNAME(params, idx))) {
NDMP_LOG(LOG_DEBUG, "nlist[%d] == NULL", idx);
} else if (!ep->nm3_opath) {
NDMP_LOG(LOG_DEBUG, "nlist[%d].nm3_opath == NULL", idx);
} else {
NDMP_LOG(LOG_DEBUG,
"ep[%d].nm3_opath \"%s\"", idx, ep->nm3_opath);
rv = MOD_FILERECOVERD(params, ep->nm3_opath, stat);
}

return (rv);
}