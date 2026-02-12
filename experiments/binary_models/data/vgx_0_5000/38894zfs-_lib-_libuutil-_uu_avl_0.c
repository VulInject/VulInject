void
uu_avl_remove(uu_avl_t *ap, void *elem)
{
uu_avl_walk_t *wp;
uu_avl_pool_t *pp = ap->ua_pool;
uintptr_t *na = NODE_ARRAY(pp, elem);

if (ap->ua_debug) {

ap->ua_index = INDEX_NEXT(ap->ua_index);
}


for (wp = ap->ua_null_walk.uaw_next; wp != &ap->ua_null_walk;
wp = wp->uaw_next) {
if (wp->uaw_robust) {
if (elem == wp->uaw_next_result)
(void) _avl_walk_advance(wp, ap);
} else if (wp->uaw_next_result != NULL) {
uu_panic("uu_avl_remove(%p, %p): active non-robust "
"walker\n", (void *)ap, elem);
}
}

avl_remove(&ap->ua_tree, elem);

na[0] = POOL_TO_MARKER(pp);
na[1] = 0;
}