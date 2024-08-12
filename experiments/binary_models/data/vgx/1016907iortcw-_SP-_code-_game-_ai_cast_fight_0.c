float FUN1( int VAR1 ) {
VAR2 *VAR3;
float VAR4;

VAR3 = FUN2( VAR1 );

VAR4 = VAR3->VAR5[VAR6];

if ( VAR7 ) {
if ( VAR3->VAR8 >= 0 ) {
if ( VAR3->VAR9[VAR3->VAR8].VAR10 < VAR11.VAR12 - VAR13 ) {
VAR4 += 0.5 * VAR14;
} else {
VAR4 += VAR14 * ( (float)( -0.5 * VAR13 + VAR11.VAR12 - VAR3->VAR9[VAR3->VAR8].VAR10 ) / (float)( VAR13 ) );
}

if ( VAR4 > 1.0 ) {
VAR4 = 1.0;
} else if ( VAR4 < 0.0 ) {
VAR4 = 0.0;
}
}
}
return ( VAR4 );
}