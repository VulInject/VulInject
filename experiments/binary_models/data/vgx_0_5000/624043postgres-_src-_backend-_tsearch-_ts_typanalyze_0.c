static void
prune_lexemes_hashtable(HTAB *lexemes_tab, int b_current)
{
HASH_SEQ_STATUS scan_status;
TrackItem  *item;

hash_seq_init(&scan_status, lexemes_tab);
while ((item = (TrackItem *) hash_seq_search(&scan_status)) != NULL)
{
if (item->frequency + item->delta <= b_current)
{
char	   *lexeme = item->key.lexeme;

if (hash_search(lexemes_tab, &item->key,
HASH_REMOVE, NULL) == NULL)
elog(ERROR, "hash table corrupted");
pfree(lexeme);
}
}
}