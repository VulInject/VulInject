int FUN1(
VAR1 *VAR2,
int (*VAR3)(void *, unsigned char *, VAR4),
void *VAR5,
const unsigned char *VAR6,
size_t VAR7,
size_t VAR8 )
{
int VAR9;
unsigned char VAR10[VAR11];

memset( VAR10, 0, VAR11 );

FUN2( &VAR2->VAR12 );

VAR2->VAR3 = VAR3;
VAR2->VAR5 = VAR5;

VAR2->VAR8 = VAR8;
VAR2->VAR13 = VAR14;


FUN3( &VAR2->VAR12, VAR10, VAR15 );

if( ( VAR9 = FUN4( VAR2, VAR6, VAR7 ) ) != 0 )
return( VAR9 );

return( 0 );
}