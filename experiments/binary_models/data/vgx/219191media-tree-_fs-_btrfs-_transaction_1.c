static int FUN1 ( struct VAR1 * VAR2 , struct VAR3 * VAR4 , int VAR5 ) { int VAR6 ; int VAR7 ; struct blk_plug VAR8 ; FUN2 ( & VAR8 ) ; VAR6 = FUN3 ( VAR2 , VAR4 , VAR5 ) ; FUN4 ( & VAR8 ) ; VAR7 = FUN5 ( VAR2 , VAR4 ) ; if ( VAR7 ) { return VAR7 ; } return 0 ; }