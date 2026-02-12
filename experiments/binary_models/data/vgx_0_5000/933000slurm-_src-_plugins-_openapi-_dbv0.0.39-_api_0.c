extern int db_query_list_funcname(ctxt_t *ctxt, List *list,
db_list_query_func_t func, void *cond,
const char *func_name, const char *caller,
bool ignore_empty_result)
{
List l;
int rc = SLURM_SUCCESS;

xassert(ctxt->magic == MAGIC_CTXT);
xassert(!*list);
xassert(ctxt->db_conn);

errno = 0;
l = func(ctxt->db_conn, cond);

if (errno) {
rc = errno;
FREE_NULL_LIST(l);
} else if (!l) {
rc = ESLURM_REST_INVALID_QUERY;
}

if (rc == SLURM_NO_CHANGE_IN_DATA) {
if (ignore_empty_result) {
resp_warn(ctxt, caller,
"%s(0x%" PRIxPTR ") reports nothing changed",
func_name, (uintptr_t) ctxt->db_conn);
rc = SLURM_SUCCESS;
}
}

if (rc) {
return resp_error(ctxt, rc, caller, "%s(0x%" PRIxPTR ") failed",
func_name, (uintptr_t) ctxt->db_conn);
}

if (!list_count(l)) {
FREE_NULL_LIST(l);

if (!ignore_empty_result) {
resp_warn(ctxt, caller,
"%s(0x%" PRIxPTR ") found nothing",
func_name, (uintptr_t) ctxt->db_conn);
}
} else {
*list = l;
}

return rc;
}