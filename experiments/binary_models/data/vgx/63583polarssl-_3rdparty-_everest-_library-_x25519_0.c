int FUN1( VAR1 *VAR2, VAR3 *VAR4,
unsigned char *VAR5, size_t VAR6,
int( *VAR7 )(void *, unsigned char *, VAR3),
void *VAR8 )
{
int VAR9 = 0;

uint8_t VAR10[VAR11] = {0};

if( ( VAR9 = FUN2( VAR8, VAR2->VAR12, VAR11 ) ) != 0 )
return VAR9;

*VAR4 = VAR11 + 4;
if( VAR6 < *VAR4 )
return( VAR13 );

*VAR5++ = VAR14;
*VAR5++ = VAR15 >> 8;
*VAR5++ = VAR15 & 0xFF;
*VAR5++ = VAR11;

VAR10[0] = 9;
FUN3( VAR5, VAR2->VAR12, VAR10 );

VAR10[0] = 0;
if( memcmp( VAR5, VAR10, VAR11) == 0 )
return VAR16;

return( 0 );
}