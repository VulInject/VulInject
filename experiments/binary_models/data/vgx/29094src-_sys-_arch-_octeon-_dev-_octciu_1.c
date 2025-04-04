uint32_t octciu_intr_bank ( struct octciu_softc * sc , struct intrbank * bank , struct trapframe * frame ) { struct cpu_info * ci = curcpu ( ) ; struct octciu_intrhand * ih ; struct octciu_cpu * scpu = & sc -> sc_cpu [ ci -> ci_cpuid ] ; uint64_t imr , isr , mask ; int handled , ipl , irq ; register_t sr ; int need_lock ; isr = bus_space_read_8 ( sc -> sc_iot , sc -> sc_ioh , bank -> sum ) ; imr = bus_space_read_8 ( sc -> sc_iot , sc -> sc_ioh , bank -> en ) ; isr &= imr ; bus_space_write_8 ( sc -> sc_iot , sc -> sc_ioh , bank -> en , imr & ~ isr ) ; if ( ( mask = isr & scpu -> scpu_imask [ frame -> ipl ] [ bank -> id ] ) != 0 ) { isr &= ~ mask ; imr &= ~ mask ; } if ( isr == 0 ) { return 1 ; } ipl = ci -> ci_ipl ; while ( ( irq = octciu_next_irq ( & isr ) ) >= 0 ) { irq += bank -> id * BANK_SIZE ; handled = 0 ; SLIST_FOREACH ( , , ) { splraise ( ih -> ih_level ) ; if ( ih -> ih_level < IPL_IPI ) { sr = getsr ( ) ; ENABLEIPI ( ) ; } if ( ih -> ih_flags & CIH_MPSAFE ) { need_lock = 0 ; } else { need_lock = 1 ; } if ( need_lock ) { __mp_lock ( & kernel_lock ) ; } if ( * ih -> ih_fun ( ih -> ih_arg ) != 0 ) { handled = 1 ; evcount_inc ( & ih -> ih_count ) ; } if ( need_lock ) { __mp_unlock ( & kernel_lock ) ; } if ( ih -> ih_level < IPL_IPI ) { setsr ( sr ) ; } } if ( ! handled ) { printf ( "%s: spurious interrupt %d on cpu %lu\n" , sc -> sc_dev . dv_xname , irq , ci -> ci_cpuid ) ; } } ci -> ci_ipl = ipl ; bus_space_write_8 ( sc -> sc_iot , sc -> sc_ioh , bank -> en , imr ) ; return 1 ; } 