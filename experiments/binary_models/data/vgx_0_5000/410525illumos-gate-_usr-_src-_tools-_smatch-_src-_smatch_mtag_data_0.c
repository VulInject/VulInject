static int get_rl_from_mtag_offset(mtag_t tag, int offset, struct symbol *type, struct range_list **rl)
{
struct db_info db_info = {};
mtag_t merged = tag | offset;
static int idx;
int ret;
int i;

for (i = 0; i < ARRAY_SIZE(cached_results); i++) {
if (merged == cached_results[i].tag) {
if (cached_results[i].rl) {
*rl = cached_results[i].rl;
return 1;
}
return 0;
}
}

db_info.type = type;

run_sql(get_vals, &db_info,
"select value from mtag_data where tag = %lld and offset = %d and type = %d;",
tag, offset, DATA_VALUE);
if (!db_info.rl || is_whole_rl(db_info.rl)) {
db_info.rl = NULL;
ret = 0;
goto update_cache;
}

*rl = db_info.rl;
ret = 1;

update_cache:
cached_results[idx].tag = merged;
cached_results[idx].rl = db_info.rl;
idx = (idx + 1) % ARRAY_SIZE(cached_results);

return ret;
}