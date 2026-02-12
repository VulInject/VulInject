static M_state_machine_state_t *M_state_machine_state_create_interleaved(M_uint64 ndescr, const char *descr, M_state_machine_pre_cb pre, M_state_machine_post_cb post, M_state_machine_cleanup_t *cleanup, M_list_u64_t *next_ids)
{
M_state_machine_state_t *s;
struct M_list_callbacks  lcbs = {
NULL,
NULL,
NULL,
(M_list_free_func)M_state_machine_interleaved_sub_destroy
};

s             = M_state_machine_state_create(M_STATE_MACHINE_STATE_TYPE_INTERLEAVED, ndescr, descr, cleanup, next_ids);
if (s == NULL)
return NULL;
s->d.interleaved.subs = M_list_create(&lcbs, M_LIST_NONE);
s->d.interleaved.pre  = pre;
s->d.interleaved.post = post;
s->d.interleaved.idx  = 0;

return s;
}