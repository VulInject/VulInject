struct md_json_t *md_result_to_json(const md_result_t *result, apr_pool_t *p)
{
md_json_t *json;
char ts[APR_RFC822_DATE_LEN];

json = md_json_create(p);
md_json_setl(result->status, json, MD_KEY_STATUS, NULL);
if (result->status > 0) {
char buffer[HUGE_STRING_LEN];
apr_strerror(result->status, buffer, sizeof(buffer));
md_json_sets(buffer, json, "status-description", NULL);
}
if (result->problem) md_json_sets(result->problem, json, MD_KEY_PROBLEM, NULL);
if (result->detail) md_json_sets(result->detail, json, MD_KEY_DETAIL, NULL);
if (result->activity) md_json_sets(result->activity, json, MD_KEY_ACTIVITY, NULL);
if (result->ready_at > 0) {
apr_rfc822_date(ts, result->ready_at);
md_json_sets(ts, json, MD_KEY_VALID_FROM, NULL);
}
if (result->subproblems) {
md_json_setj(result->subproblems, json, MD_KEY_SUBPROBLEMS, NULL);
}
return json;
}