void free_fopdata ( vnode_t * vp ) { portfop_vp_t * pvp ; pvp = vp -> v_fopdata ; ASSERT ( pvp -> pvp_femp == NULL ) ; mutex_destroy ( & pvp -> pvp_mutex ) ; list_destroy ( & pvp -> pvp_pfoplist ) ; kmem_free ( pvp , sizeof ( * pvp ) ) ; } 