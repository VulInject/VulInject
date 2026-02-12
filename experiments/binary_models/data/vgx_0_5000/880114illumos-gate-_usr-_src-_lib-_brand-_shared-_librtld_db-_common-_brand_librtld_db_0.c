static int
brand_ldb_loadobj_iter32(rd_helper_data_t rhd, rl_iter_f *cb, void *client_data)
{
struct rd_agent	*rap = (struct rd_agent *)rhd;
int		err;

ps_plog("brand_ldb_loadobj_iter(helper_data=0x%p)", rhd);
assert(rap->rd_psp == php);
RDAGLOCK(rap);

err = _rd_loadobj_iter32(rap, cb, client_data);
RDAGUNLOCK(rap);
ps_plog("brand_ldb_loadobj_iter: finished, err = %d", err);
return (err);
}