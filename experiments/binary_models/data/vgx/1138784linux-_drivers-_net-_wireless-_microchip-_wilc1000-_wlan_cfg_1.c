int FUN1 ( VAR1 * VAR2 , u32 VAR3 , u16 VAR4 , VAR1 * VAR5 , int VAR6 ) { u8 VAR7 = FUN2 ( VAR8 , VAR4 ) ; int VAR9 ; switch ( VAR7 ) { case VAR10 : if ( VAR6 >= 1 ) { VAR9 = FUN3 ( VAR2 , VAR3 , VAR4 , * VAR5 ) ; } break ; case VAR11 : if ( VAR6 >= 2 ) { VAR9 = FUN4 ( VAR2 , VAR3 , VAR4 , * ( ( VAR12 * ) VAR5 ) ) ; } break ; case VAR13 : if ( VAR6 >= 4 ) { VAR9 = FUN5 ( VAR2 , VAR3 , VAR4 , * ( ( VAR14 * ) VAR5 ) ) ; } break ; case VAR15 : VAR9 = FUN6 ( VAR2 , VAR3 , VAR4 , VAR5 , VAR6 ) ; break ; case VAR16 : VAR9 = FUN7 ( VAR2 , VAR3 , VAR4 , VAR5 , VAR6 ) ; break ; } return VAR9 ; }