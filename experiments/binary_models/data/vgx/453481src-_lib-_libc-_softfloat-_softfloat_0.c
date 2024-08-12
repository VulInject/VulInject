static VAR1 FUN1( flag VAR2, int16 VAR3, bits32 VAR4 )
{
int8 VAR5;
flag VAR6;
int8 VAR7, VAR8;
flag VAR9;

VAR5 = VAR10;
VAR6 = VAR5 == VAR11;
VAR7 = 0x40;
if ( ! VAR6 ) {
if ( VAR5 == VAR12 ) {
VAR7 = 0;
}
else {
VAR7 = 0x7F;
if ( VAR2 ) {
if ( VAR5 == VAR13 ) VAR7 = 0;
}
else {
if ( VAR5 == VAR14 ) VAR7 = 0;
}
}
}
VAR8 = VAR4 & 0x7F;
if ( 0xFD <= (VAR15) VAR3 ) {
if (    ( 0xFD < VAR3 )
|| (    ( VAR3 == 0xFD )
&& ( (VAR16) ( VAR4 + VAR7 ) < 0 ) )
) {
FUN2( VAR17 | VAR18 );
return FUN3( VAR2, 0xFF, 0 ) - ( VAR7 == 0 );
}
if ( VAR3 < 0 ) {
VAR9 =
( VAR19 == VAR20 )
|| ( VAR3 < -1 )
|| ( VAR4 + VAR7 < 0x80000000 );
FUN4( VAR4, - VAR3, &VAR4 );
VAR3 = 0;
VAR8 = VAR4 & 0x7F;
if ( VAR9 && VAR8 ) FUN2( VAR21 );
}
}
if ( VAR8 ) VAR22 |= VAR18;
VAR4 = ( VAR4 + VAR7 )>>7;
VAR4 &= ~ ( ( ( VAR8 ^ 0x40 ) == 0 ) & VAR6 );
if ( VAR4 == 0 ) VAR3 = 0;
return FUN3( VAR2, VAR3, VAR4 );

}