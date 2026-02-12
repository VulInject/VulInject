static int get_znodes_to_commit(struct ubifs_info *c)
{
struct ubifs_znode *znode, *cnext;
int cnt = 0;

c->cnext = find_first_dirty(c->zroot.znode);
znode = c->enext = c->cnext;
if (!znode) {
dbg_cmt("no znodes to commit");
return 0;
}
cnt += 1;
while (1) {
ubifs_assert(!ubifs_zn_cow(znode));
__set_bit(COW_ZNODE, &znode->flags);
znode->alt = 0;
cnext = find_next_dirty(znode);
if (!cnext) {
znode->cnext = c->cnext;
break;
}
znode->cnext = cnext;
znode = cnext;
cnt += 1;
}
dbg_cmt("committing %d znodes", cnt);
ubifs_assert(cnt == atomic_long_read(&c->dirty_zn_cnt));
return cnt;
}