static void match_return(struct expression *ret_value)
{
sval_t ret_val;
struct stree *stree;
struct sm_state *tmp;

if (!get_value(ret_value, &ret_val) || sval_cmp_val(ret_val, 0) >= 0)
return;

stree = __get_cur_stree();
FOR_EACH_MY_SM(my_id, stree, tmp) {
if (tmp->state != &unlock)
sm_warning("returned negative with %s semaphore held",
tmp->name);
} END_FOR_EACH_SM(tmp);
}