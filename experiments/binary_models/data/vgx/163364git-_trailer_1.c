static int FUN1 ( struct VAR1 * VAR2 , struct VAR3 * VAR4 ) { size_t VAR5 , VAR6 , VAR7 ; VAR5 = FUN2 ( VAR2 -> VAR8 , strlen ( VAR2 -> VAR8 ) ) ; VAR6 = FUN2 ( VAR4 -> VAR8 , strlen ( VAR4 -> VAR8 ) ) ; VAR7 = ( VAR5 > VAR6 ) ?VAR6 : VAR5 ; return ! FUN3 ( VAR2 -> VAR8 , VAR4 -> VAR8 , VAR7 ) ; }