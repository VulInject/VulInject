static unsigned short FUN1( long VAR1, long VAR2, long VAR3 ) {
long VAR4,VAR5,VAR6,VAR7 = (long)( VAR8[( VAR1 )] );

VAR4 = ( VAR7 + VAR9[VAR3] ) >> 9;
VAR5 = ( VAR7 + VAR10[VAR2] + VAR11[VAR3] ) >> 8;
VAR6 = ( VAR7 + VAR12[VAR2] ) >> 9;

if ( VAR4 < 0 ) {
VAR4 = 0;
}
if ( VAR5 < 0 ) {
VAR5 = 0;
}
if ( VAR6 < 0 ) {
VAR6 = 0;
}
if ( VAR4 > 31 ) {
VAR4 = 31;
}
if ( VAR5 > 63 ) {
VAR5 = 63;
}
if ( VAR6 > 31 ) {
VAR6 = 31;
}

return ( unsigned short )( ( VAR4 << 11 ) + ( VAR5 << 5 ) + ( VAR6 ) );
}