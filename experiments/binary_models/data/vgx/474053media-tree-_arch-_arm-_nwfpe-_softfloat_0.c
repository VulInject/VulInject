VAR1 FUN1( int32 VAR2 )
{
flag VAR3;
uint32 VAR4;
int8 VAR5;
bits64 VAR6;

if ( VAR2 == 0 ) return 0;
VAR3 = ( VAR2 < 0 );
VAR4 = VAR3 ? - VAR2 : VAR2;
VAR5 = FUN2( VAR4 ) + 21;
VAR6 = VAR4;
return FUN3( VAR3, 0x432 - VAR5, VAR6<<VAR5 );

}