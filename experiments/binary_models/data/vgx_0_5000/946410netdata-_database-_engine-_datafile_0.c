int init_data_files(struct rrdengine_instance *ctx)
{
int ret;

fatal_assert(0 == uv_rwlock_init(&ctx->datafiles.rwlock));
ret = scan_data_files(ctx);
if (ret < 0) {
error("DBENGINE: failed to scan path \"%s\".", ctx->config.dbfiles_path);
return ret;
} else if (0 == ret) {
info("DBENGINE: data files not found, creating in path \"%s\".", ctx->config.dbfiles_path);
ctx->atomic.last_fileno = 0;
ret = create_new_datafile_pair(ctx);
if (ret) {
error("DBENGINE: failed to create data and journal files in path \"%s\".", ctx->config.dbfiles_path);
return ret;
}
}
else {
if (ctx->loading.create_new_datafile_pair)
create_new_datafile_pair(ctx);

while(rrdeng_ctx_exceeded_disk_quota(ctx))
datafile_delete(ctx, ctx->datafiles.first, false, false);
}

pgc_reset_hot_max(open_cache);
ctx->loading.create_new_datafile_pair = false;
return 0;
}