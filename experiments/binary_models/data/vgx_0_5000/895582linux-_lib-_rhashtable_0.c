static int rhashtable_rehash_table(struct rhashtable *ht)
{
struct bucket_table *old_tbl = rht_dereference(ht->tbl, ht);
struct bucket_table *new_tbl;
struct rhashtable_walker *walker;
unsigned int old_hash;
int err;

new_tbl = rht_dereference(old_tbl->future_tbl, ht);
if (!new_tbl)
return 0;

for (old_hash = 0; old_hash < old_tbl->size; old_hash++) {
err = rhashtable_rehash_chain(ht, old_hash);
if (err)
return err;
cond_resched();
}


rcu_assign_pointer(ht->tbl, new_tbl);

spin_lock(&ht->lock);
list_for_each_entry(walker, &old_tbl->walkers, list)
walker->tbl = NULL;


call_rcu(&old_tbl->rcu, bucket_table_free_rcu);
spin_unlock(&ht->lock);

return rht_dereference(new_tbl->future_tbl, ht) ? -EAGAIN : 0;
}