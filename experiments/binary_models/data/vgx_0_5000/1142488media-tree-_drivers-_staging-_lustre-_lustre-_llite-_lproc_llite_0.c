}
LUSTRE_RW_ATTR(xattr_cache);

static int ll_unstable_stats_seq_show(struct seq_file *m, void *v)
{
struct super_block     *sb    = m->private;
struct ll_sb_info      *sbi   = ll_s2sbi(sb);
struct cl_client_cache *cache = sbi->ll_cache;
long pages;
int mb;

pages = atomic_long_read(&cache->ccc_unstable_nr);
mb = (pages * PAGE_SIZE) >> 20;

seq_printf(m,
"unstable_check:     %8d\n"
"unstable_pages: %12ld\n"
"unstable_mb:        %8d\n",
cache->ccc_unstable_check, pages, mb);

return 0;
}