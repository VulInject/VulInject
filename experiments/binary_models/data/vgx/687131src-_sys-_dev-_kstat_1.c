static inline int kstat_pv_cmp ( const struct kstat * a , const struct kstat * b ) { int rv ; rv = strcmp ( a -> ks_provider , b -> ks_provider ) ; if ( a -> ks_instance > b -> ks_instance ) { return ( 1 ) ; } if ( a -> ks_instance < b -> ks_instance ) { return ( - 1 ) ; } rv = strcmp ( a -> ks_name , b -> ks_name ) ; if ( rv != 0 ) { return ( rv ) ; } if ( a -> ks_unit > b -> ks_unit ) { return ( 1 ) ; } if ( a -> ks_unit < b -> ks_unit ) { return ( - 1 ) ; } return ( 0 ) ; } 