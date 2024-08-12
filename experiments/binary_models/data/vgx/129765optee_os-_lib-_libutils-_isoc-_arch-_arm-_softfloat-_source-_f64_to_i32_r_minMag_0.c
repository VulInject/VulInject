VAR1 FUN1( float64_t VAR2, bool VAR3 )
{
union ui64_f64 VAR4;
uint_fast64_t VAR5;
int_fast16_t VAR6;
uint_fast64_t VAR7;
int_fast16_t VAR8;
bool VAR9;
int_fast32_t VAR10;

VAR4.VAR11 = VAR2;
VAR5 = VAR4.VAR12;
VAR6 = FUN2( VAR5 );
VAR7 = FUN3( VAR5 );
VAR8 = 0x433 - VAR6;
if ( 53 <= VAR8 ) {
if ( VAR3 && (VAR6 | VAR7) ) {
VAR13 |= VAR14;
}
return 0;
}
VAR9 = FUN4( VAR5 );
if ( VAR8 < 22 ) {
if (
VAR9 && (VAR6 == 0x41E) && (VAR7 < FUN5( 0x0000000000200000 ))
) {
if ( VAR3 && VAR7 ) {
VAR13 |= VAR14;
}
} else {
FUN6( VAR15 );
if ( ! VAR9 || ((VAR6 == 0x7FF) && VAR7) ) return 0x7FFFFFFF;
}
return -0x7FFFFFFF - 1;
}
VAR7 |= FUN5( 0x0010000000000000 );
VAR10 = VAR7>>VAR8;
if ( VAR3 && ((VAR16) (VAR17) VAR10<<VAR8 != VAR7) ) {
VAR13 |= VAR14;
}
return VAR9 ? -VAR10 : VAR10;

}