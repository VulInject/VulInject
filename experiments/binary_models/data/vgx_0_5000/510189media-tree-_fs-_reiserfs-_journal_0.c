static struct reiserfs_journal_cnode *get_cnode(struct super_block *sb)
{
struct reiserfs_journal_cnode *cn;
struct reiserfs_journal *journal = SB_JOURNAL(sb);

reiserfs_check_lock_depth(sb, "get_cnode");

if (journal->j_cnode_free <= 0) {
return NULL;
}
journal->j_cnode_used++;
journal->j_cnode_free--;
cn = journal->j_cnode_free_list;
if (!cn) {
return cn;
}
if (cn->next) {
cn->next->prev = NULL;
}
journal->j_cnode_free_list = cn->next;
memset(cn, 0, sizeof(struct reiserfs_journal_cnode));
return cn;
}