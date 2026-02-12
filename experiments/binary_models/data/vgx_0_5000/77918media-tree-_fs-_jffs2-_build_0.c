static void jffs2_build_inode_pass1(struct jffs2_sb_info *c,
struct jffs2_inode_cache *ic,
int *dir_hardlinks)
{
struct jffs2_full_dirent *fd;

dbg_fsbuild("building directory inode #%u\n", ic->ino);


for(fd = ic->scan_dents; fd; fd = fd->next) {
struct jffs2_inode_cache *child_ic;
if (!fd->ino)
continue;



child_ic = jffs2_get_ino_cache(c, fd->ino);
if (!child_ic) {
dbg_fsbuild("child \"%s\" (ino #%u) of dir ino #%u doesn't exist!\n",
fd->name, fd->ino, ic->ino);
jffs2_mark_node_obsolete(c, fd->raw);

fd->ic = NULL;
continue;
}


fd->ic = child_ic;
child_ic->pino_nlink++;

if (fd->type == DT_DIR) {
child_ic->flags |= INO_FLAGS_IS_DIR;
if (child_ic->pino_nlink > 1)
*dir_hardlinks = 1;
}

dbg_fsbuild("increased nlink for child \"%s\" (ino #%u)\n", fd->name, fd->ino);

}
}