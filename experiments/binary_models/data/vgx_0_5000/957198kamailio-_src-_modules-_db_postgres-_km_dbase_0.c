int db_postgres_delete(const db1_con_t *_h, const db_key_t *_k,
const db_op_t *_o, const db_val_t *_v, const int _n)
{
db1_res_t *_r = NULL;
int ret = db_do_delete(
_h, _k, _o, _v, _n, db_postgres_val2str, db_postgres_submit_query);
int tmp = db_postgres_store_result(_h, &_r);

if(tmp < 0) {
LM_WARN("unexpected result returned\n");
ret = tmp;
}

if(_r)
db_free_result(_r);

return ret;
}