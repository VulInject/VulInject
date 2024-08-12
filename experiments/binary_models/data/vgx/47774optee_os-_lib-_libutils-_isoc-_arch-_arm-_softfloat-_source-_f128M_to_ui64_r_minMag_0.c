VAR1 FUN1( const VAR2 *VAR3, bool VAR4 )
{
const VAR5 *VAR6;
uint32_t VAR7;
int32_t VAR8, VAR9;
uint32_t VAR10, VAR11[4];
uint64_t VAR12;

VAR6 = (const VAR5 *) VAR3;
VAR7 = VAR6[FUN2( 4 )];
VAR8 = FUN3( VAR7 );
VAR9 = 0x403E - VAR8;
if ( VAR9 < 0 ) goto VAR13;
if ( VAR4 ) {
VAR10 = FUN4( VAR7 );
if ( VAR8 ) VAR10 |= 0x00010000;
VAR11[FUN5( 4, 3 )] = VAR10;
VAR11[FUN5( 4, 2 )] = VAR6[FUN5( 4, 2 )];
VAR11[FUN5( 4, 1 )] = VAR6[FUN5( 4, 1 )];
VAR11[FUN5( 4, 0 )] = VAR6[FUN5( 4, 0 )];
FUN6( VAR11, VAR9 + 17, VAR11 );
VAR12 = (VAR14) VAR11[FUN5( 4, 2 )]<<32 | VAR11[FUN5( 4, 1 )];
if ( FUN7( VAR7 ) && VAR12 ) goto VAR13;
if ( VAR11[FUN8( 4 )] ) {
VAR15 |= VAR16;
}
} else {
if ( 64 <= VAR9 ) return 0;
if ( FUN7( VAR7 ) ) goto VAR13;
VAR12 =   FUN9( 0x8000000000000000 )
| (VAR14) FUN4( VAR7 )<<47
| (VAR14) VAR6[FUN5( 4, 2 )]<<15
| VAR6[FUN5( 4, 1 )]>>17;
VAR12 >>= VAR9;
}
return VAR12;
VAR13:
FUN10( VAR17 );
return FUN9( 0xFFFFFFFFFFFFFFFF );

}