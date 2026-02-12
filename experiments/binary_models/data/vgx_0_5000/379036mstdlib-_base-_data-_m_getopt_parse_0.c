static M_getopt_error_t M_getopt_parse_option_long(M_getopt_t *g, const char *option, const char *val, M_bool opt_isval, int *idx, void *thunk)
{
M_getopt_option_t *opt;
M_getopt_error_t   ret;

opt = M_hash_strvp_get_direct(g->long_opts, option);
if (opt == NULL)
return M_GETOPT_ERROR_INVALIDOPT;

ret = M_getopt_parse_option_verify_value(opt, val==NULL?NULL:&val, opt_isval, idx);
if (ret != M_GETOPT_ERROR_SUCCESS)
return ret;

if (!M_getopt_parse_option_value(opt, val, thunk))
return M_GETOPT_ERROR_INVALIDDATATYPE;

return M_GETOPT_ERROR_SUCCESS;
}