static void FUN1( VAR1 *VAR2 ) {
int	VAR3, VAR4;

if ( !(VAR2->VAR5.VAR6 & VAR7 ) ) {
return;
}

VAR3 = VAR2->VAR8[0];
if ( VAR2->VAR8[1] > VAR3 ) {
VAR3 = VAR2->VAR8[1];
} else if ( VAR2->VAR8[2] > VAR3 ) {
VAR3 = VAR2->VAR8[2];
}

VAR4 = VAR2->VAR9[0];
if ( VAR2->VAR9[1] > VAR4 ) {
VAR4 = VAR2->VAR9[1];
} else if ( VAR2->VAR9[2] > VAR4 ) {
VAR4 = VAR2->VAR9[2];
}

VAR10.FUN2( VAR11, "", VAR3, VAR4 );
}