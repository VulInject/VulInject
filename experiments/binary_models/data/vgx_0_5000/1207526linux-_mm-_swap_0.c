static void lru_add_fn(struct lruvec *lruvec, struct folio *folio)
{
int was_unevictable = folio_test_clear_unevictable(folio);
long nr_pages = folio_nr_pages(folio);

VM_BUG_ON_FOLIO(folio_test_lru(folio), folio);


if (folio_evictable(folio)) {
if (was_unevictable)
__count_vm_events(UNEVICTABLE_PGRESCUED, nr_pages);
} else {
folio_clear_active(folio);
folio_set_unevictable(folio);

folio->mlock_count = 0;
if (!was_unevictable)
__count_vm_events(UNEVICTABLE_PGCULLED, nr_pages);
}

lruvec_add_folio(lruvec, folio);
trace_mm_lru_insertion(folio);
}