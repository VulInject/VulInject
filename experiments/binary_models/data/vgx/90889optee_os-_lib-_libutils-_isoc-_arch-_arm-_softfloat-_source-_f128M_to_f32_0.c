VAR1 FUN1( const VAR2 *VAR3 )
{
const VAR4 *VAR5;
uint32_t VAR6;
bool VAR7;
int32_t VAR8;
uint64_t VAR9;
struct commonNaN VAR10;
uint32_t VAR11, VAR12;
union ui32_f32 VAR13;

VAR5 = (const VAR4 *) VAR3;
VAR6 = VAR5[FUN2( 4 )];
VAR7 = FUN3( VAR6 );
VAR8  = FUN4( VAR6 );
VAR9 =
(VAR14) FUN5( VAR6 )<<32 | VAR5[FUN6( 4, 2 )]
| ((VAR5[FUN6( 4, 1 )] | VAR5[FUN6( 4, 0 )]) != 0);
if ( VAR8 == 0x7FFF ) {
if ( VAR9 ) {
FUN7( VAR5, &VAR10 );
VAR11 = FUN8( &VAR10 );
} else {
VAR11 = FUN9( VAR7, 0xFF, 0 );
}
goto VAR11;
}
VAR12 = FUN10( VAR9, 18 );
if ( ! (VAR8 | VAR12) ) {
VAR11 = FUN9( VAR7, 0, 0 );
goto VAR11;
}
VAR8 -= 0x3F81;
if ( sizeof (VAR15) < sizeof (VAR16) ) {
if ( VAR8 < -0x1000 ) VAR8 = -0x1000;
}
return FUN11( VAR7, VAR8, VAR12 | 0x40000000 );
VAR11:
VAR13.VAR17 = VAR11;
return VAR13.VAR18;

}