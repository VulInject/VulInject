int FUN1( VAR1 *VAR2,
const unsigned char *VAR3, size_t VAR4,
unsigned char *VAR5, VAR6 *VAR7, size_t VAR8,
int (*VAR9)(void *, unsigned char *, VAR6), void *VAR10 )
{
FUN2( VAR2 != NULL );
FUN2( VAR3 != NULL || VAR4 == 0 );
FUN2( VAR5 != NULL || VAR8 == 0 );
FUN2( VAR7 != NULL );

if( VAR2->VAR11 == NULL )
return( VAR12 );

if( VAR2->VAR11->VAR13 == NULL )
return( VAR14 );

return( VAR2->VAR11->FUN3( VAR2->VAR15, VAR3, VAR4,
VAR5, VAR7, VAR8, VAR9, VAR10 ) );
}