static int guard_has_descriptor ( const entry_guard_t * guard ) { const node_t * node = node_get_by_id ( guard -> identity ) ; return node_has_preferred_descriptor ( node , 1 ) ; } 