static void FUN1 ( unsigned char VAR1 [ 127 ] , const VAR2 * VAR3 , const VAR2 * VAR4 ) { int VAR5 ; for ( VAR5 = 0 ; VAR5 < 31 ; VAR5 ++ ) { VAR1 [ 4 * VAR5 ] = ( VAR3 -> VAR6 [ VAR5 ] & 3 ) ^ ( ( VAR4 -> VAR6 [ VAR5 ] & 3 ) << 2 ) ; VAR1 [ 4 * VAR5 + 1 ] = ( ( VAR3 -> VAR6 [ VAR5 ] >> 2 ) & 3 ) ^ ( ( ( VAR4 -> VAR6 [ VAR5 ] >> 2 ) & 3 ) << 2 ) ; VAR1 [ 4 * VAR5 + 2 ] = ( ( VAR3 -> VAR6 [ VAR5 ] >> 4 ) & 3 ) ^ ( ( ( VAR4 -> VAR6 [ VAR5 ] >> 4 ) & 3 ) << 2 ) ; VAR1 [ 4 * VAR5 + 3 ] = ( ( VAR3 -> VAR6 [ VAR5 ] >> 6 ) & 3 ) ^ ( ( ( VAR4 -> VAR6 [ VAR5 ] >> 6 ) & 3 ) << 2 ) ; } VAR1 [ 124 ] = ( VAR3 -> VAR6 [ 31 ] & 3 ) ^ ( ( VAR4 -> VAR6 [ 31 ] & 3 ) << 2 ) ; VAR1 [ 125 ] = ( ( VAR3 -> VAR6 [ 31 ] >> 2 ) & 3 ) ^ ( ( ( VAR4 -> VAR6 [ 31 ] >> 2 ) & 3 ) << 2 ) ; VAR1 [ 126 ] = ( ( VAR3 -> VAR6 [ 31 ] >> 4 ) & 3 ) ^ ( ( ( VAR4 -> VAR6 [ 31 ] >> 4 ) & 3 ) << 2 ) ; } { fe25519 VAR7 ; fe25519 VAR8 ; fe25519 VAR9 ; fe25519 VAR10 ; } VAR11