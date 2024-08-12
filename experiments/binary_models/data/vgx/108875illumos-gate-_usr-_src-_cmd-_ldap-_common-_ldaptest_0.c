int
FUN1( VAR1 *VAR2, char **VAR3, char **VAR4, int *VAR5,
int VAR6 )
{
static char	VAR7[256], VAR8[256];

if ( !VAR6 ) {
FUN2( VAR7, sizeof(VAR7), stdin,
"" );
if (( *VAR5 = FUN3( VAR7 )) == 3 ) {
*VAR5 = VAR9;
} else {
*VAR5 |= 0x80;
}
*VAR5 = VAR10;

FUN2( VAR7, sizeof(VAR7), stdin, "" );
strcat( VAR7, VAR11 );
*VAR3 = VAR7;

if ( *VAR5 == VAR10 && VAR7[0] != '' ) {
FUN2( VAR8, sizeof(VAR8), stdin,
"" );
} else {
VAR8[0] = '';
}
*VAR4 = VAR8;
}

return( VAR12 );
}