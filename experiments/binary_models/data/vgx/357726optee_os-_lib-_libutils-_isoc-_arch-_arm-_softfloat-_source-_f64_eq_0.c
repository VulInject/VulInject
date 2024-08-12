bool FUN1( float64_t VAR1, float64_t VAR2 )
{
union ui64_f64 VAR3;
uint_fast64_t VAR4;
union ui64_f64 VAR5;
uint_fast64_t VAR6;

VAR3.VAR7 = VAR1;
VAR4 = VAR3.VAR8;
VAR5.VAR7 = VAR2;
VAR6 = VAR5.VAR8;
if ( FUN2( VAR4 ) || FUN2( VAR6 ) ) {
if (
FUN3( VAR4 ) || FUN3( VAR6 )
) {
FUN4( VAR9 );
}
return false;
}
return (VAR4 == VAR6) || ! ((VAR4 | VAR6) & FUN5( 0x7FFFFFFFFFFFFFFF ));

}