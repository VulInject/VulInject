static void folio_activate_fn(struct lruvec *lruvec, struct folio *folio)
{
if (!folio_test_active(folio) && !folio_test_unevictable(folio)) {
long nr_pages = folio_nr_pages(folio);

lruvec_del_folio(lruvec, folio);
folio_set_active(folio);
lruvec_add_folio(lruvec, folio);
trace_mm_lru_activate(folio);

__count_vm_events(PGACTIVATE, nr_pages);
__count_memcg_events(lruvec_memcg(lruvec), PGACTIVATE,
nr_pages);
}
}