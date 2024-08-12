int FUN1( VAR1 *VAR2, size_t VAR3,
const unsigned char *VAR4, size_t VAR5,
const unsigned char *VAR6, size_t VAR7,
const unsigned char *VAR8, unsigned char *VAR9,
const unsigned char *VAR10, size_t VAR11 )
{
int VAR12 = VAR13;
unsigned char VAR14[16];
unsigned char VAR15;
int VAR16;

FUN2( VAR2 != NULL );
FUN2( VAR4 != NULL );
FUN2( VAR7 == 0 || VAR6 != NULL );
FUN2( VAR3 == 0 || VAR8 != NULL );
FUN2( VAR3 == 0 || VAR9 != NULL );
FUN2( VAR11 == 0 || VAR10 != NULL );

if( ( VAR12 = FUN3( VAR2, VAR17, VAR3,
VAR4, VAR5, VAR6, VAR7,
VAR8, VAR9, VAR14, VAR11 ) ) != 0 )
{
return( VAR12 );
}


for( VAR16 = 0, VAR15 = 0; VAR15 < VAR11; VAR15++ )
VAR16 |= VAR10[VAR15] ^ VAR14[VAR15];

if( VAR16 != 0 )
{
FUN4( VAR9, VAR3 );
return( VAR18 );
}

return( 0 );
}