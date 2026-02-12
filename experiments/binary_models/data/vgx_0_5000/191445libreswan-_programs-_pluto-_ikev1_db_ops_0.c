


struct db_ops_stats {
int st_curr_cnt;        
int st_total_cnt;       
size_t st_maxsz;        
};
(int)(st).st_maxsz
static struct db_ops_stats db_context_st = DB_OPS_ZERO;
static struct db_ops_stats db_trans_st = DB_OPS_ZERO;
static struct db_ops_stats db_attrs_st = DB_OPS_ZERO;

static void * alloc_bytes_st(size_t size, const char *str,
struct db_ops_stats *st)
{
void *ptr = alloc_bytes(size, str);

st->st_curr_cnt++;
st->st_total_cnt++;
if (size > st->st_maxsz)
st->st_maxsz = size;
return ptr;
}