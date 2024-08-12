int
FUN1( VAR1 *VAR2, VAR1 **VAR3, int VAR4, int VAR5, ... )
{
va_list VAR6;
int VAR7;

FUN2( VAR6, VAR5 );
VAR7 = FUN3( "", VAR6, VAR2, VAR3, VAR4, VAR5 );
FUN4( VAR6 );

return( VAR7 );
}