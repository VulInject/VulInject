int FUN1 ( VAR1 * VAR2 , int VAR3 , const VAR4 * * VAR5 , int * VAR6 ) { if ( VAR2 -> VAR7 ) { FUN2 ( NULL , "" VAR8 "" , VAR2 -> VAR7 , VAR2 -> VAR9 , VAR3 , VAR2 -> VAR10 , VAR2 -> VAR11 ) ; FUN2 ( NULL , "" , ( * VAR5 ) [ 0 ] , ( * VAR5 ) [ 1 ] , ( * VAR5 ) [ 2 ] , ( * VAR5 ) [ 3 ] ) ; } for ( ; VAR2 -> VAR7 > 0 ; VAR2 -> VAR7 -- ) { VAR2 -> VAR12 [ VAR2 -> VAR10 ++ ] = VAR2 -> VAR12 [ VAR2 -> VAR11 ++ ] ; } if ( ! * VAR6 && VAR3 == VAR13 ) { VAR3 = 0 ; } VAR2 -> VAR14 = VAR2 -> VAR10 ; if ( VAR3 == VAR13 ) { void * VAR15 = FUN3 ( VAR2 -> VAR12 , & VAR2 -> VAR16 , * VAR6 + VAR2 -> VAR10 + VAR17 ) ; VAR2 -> VAR12 = VAR15 ; memcpy ( & VAR2 -> VAR12 [ VAR2 -> VAR10 ] , * VAR5 , * VAR6 ) ; VAR2 -> VAR10 += * VAR6 ; return - 1 ; } * VAR6 = VAR2 -> VAR11 = VAR2 -> VAR10 + VAR3 ; if ( VAR2 -> VAR10 ) { void * VAR15 = FUN3 ( VAR2 -> VAR12 , & VAR2 -> VAR16 , VAR3 + VAR2 -> VAR10 + VAR17 ) ; if ( ! VAR15 ) { return FUN4 ( VAR18 ) ; } VAR2 -> VAR12 = VAR15 ; if ( VAR3 > - VAR17 ) { memcpy ( & VAR2 -> VAR12 [ VAR2 -> VAR10 ] , * VAR5 , VAR3 + VAR17 ) ; } VAR2 -> VAR10 = 0 ; * VAR5 = VAR2 -> VAR12 ; } for ( ; VAR3 < 0 ; VAR3 ++ ) { VAR2 -> VAR9 = VAR2 -> VAR9 << 8 | VAR2 -> VAR12 [ VAR2 -> VAR14 + VAR3 ] ; VAR2 -> VAR19 = VAR2 -> VAR19 << 8 | VAR2 -> VAR12 [ VAR2 -> VAR14 + VAR3 ] ; VAR2 -> VAR7 ++ ; } if ( VAR2 -> VAR7 ) { FUN2 ( NULL , "" VAR8 "" , VAR2 -> VAR7 , VAR2 -> VAR9 , VAR3 , VAR2 -> VAR10 , VAR2 -> VAR11 ) ; FUN2 ( NULL , "" , ( * VAR5 ) [ 0 ] , ( * VAR5 ) [ 1 ] , ( * VAR5 ) [ 2 ] , ( * VAR5 ) [ 3 ] ) ; } return 0 ; }