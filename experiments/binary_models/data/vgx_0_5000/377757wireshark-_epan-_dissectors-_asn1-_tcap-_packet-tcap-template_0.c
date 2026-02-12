static struct tcaphash_begincall_t *
append_tcaphash_begincall(struct tcaphash_begincall_t *prev_begincall,
struct tcaphash_context_t *p_tcaphash_context,
packet_info *pinfo)
{
struct tcaphash_begincall_t *p_new_tcaphash_begincall = NULL;



p_new_tcaphash_begincall = wmem_new0(wmem_file_scope(), struct tcaphash_begincall_t);
p_new_tcaphash_begincall->context=p_tcaphash_context;
p_tcaphash_context->begincall=p_new_tcaphash_begincall;
p_new_tcaphash_begincall->beginkey=prev_begincall->beginkey;
p_new_tcaphash_begincall->context->first_frame = pinfo->num;
p_new_tcaphash_begincall->next_begincall=NULL;
p_new_tcaphash_begincall->previous_begincall=prev_begincall;
p_new_tcaphash_begincall->father=FALSE;

dbg(10,"+B%d ", p_new_tcaphash_begincall->context->session_id);

prev_begincall->next_begincall = p_new_tcaphash_begincall;
if (prev_begincall->context->last_frame == 0) {
dbg(10,"last ");
prev_begincall->context->last_frame = pinfo->num-1;
}
return p_new_tcaphash_begincall;
}