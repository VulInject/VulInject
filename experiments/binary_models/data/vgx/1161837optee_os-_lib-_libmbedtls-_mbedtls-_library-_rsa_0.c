int FUN1( VAR1 *VAR2,
int (*VAR3)(void *, unsigned char *, VAR4),
void *VAR5,
int VAR6, size_t VAR7,
const unsigned char *VAR8,
unsigned char *VAR9 )
{
FUN2( VAR2 != NULL );
FUN2( VAR6 == VAR10 ||
VAR6 == VAR11 );
FUN2( VAR9 != NULL );
FUN2( VAR7 == 0 || VAR8 != NULL );

switch( VAR2->VAR12 )
{
case VAR13:
return FUN3( VAR2, VAR3, VAR5, VAR6, VAR7,
VAR8, VAR9 );

case VAR14:
return FUN4( VAR2, VAR3, VAR5, VAR6, NULL, 0,
VAR7, VAR8, VAR9 );

default:
return( VAR15 );
}
}