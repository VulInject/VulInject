static int FUN1( VAR1 *VAR2,
VAR3 *VAR4 )
{

unsigned char *VAR5 = VAR2->VAR6 + VAR2->VAR7 + 2;
size_t VAR8 = ( VAR2->VAR9 + VAR10
- VAR5 );
int VAR11 = VAR2->VAR12->FUN2( VAR2,
VAR5, VAR4, VAR8 );
if( VAR11 != VAR13 )
{
VAR2->VAR14->VAR15 = 0;
FUN3( VAR2, NULL );
}
FUN4( 2, "", VAR11 );
return( VAR11 );
}