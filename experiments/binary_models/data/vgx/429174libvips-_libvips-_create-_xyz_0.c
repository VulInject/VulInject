int
FUN1( VAR1 **VAR2, int VAR3, int VAR4, ... )
{
va_list VAR5;
int VAR6;

FUN2( VAR5, VAR4 );
VAR6 = FUN3( "", VAR5, VAR2, VAR3, VAR4 );
FUN4( VAR5 );

return( VAR6 );
}