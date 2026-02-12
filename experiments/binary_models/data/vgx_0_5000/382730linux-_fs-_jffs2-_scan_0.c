struct jffs2_inode_cache *jffs2_scan_make_ino_cache(struct jffs2_sb_info *c, uint32_t ino)
{
struct jffs2_inode_cache *ic;

ic = jffs2_get_ino_cache(c, ino);
if (ic)
return ic;

if (ino > c->highest_ino)
c->highest_ino = ino;

ic = jffs2_alloc_inode_cache();
if (!ic) {
pr_notice("%s(): allocation of inode cache failed\n", __func__);
return NULL;
}
memset(ic, 0, sizeof(*ic));

ic->ino = ino;
ic->nodes = (void *)ic;
jffs2_add_ino_cache(c, ic);
if (ino == 1)
ic->pino_nlink = 1;
return ic;
}