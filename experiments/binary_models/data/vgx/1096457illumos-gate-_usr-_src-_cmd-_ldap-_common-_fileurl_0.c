static int
FUN1( const char *VAR1, char *VAR2 )
{
size_t	VAR3;

if ( VAR1 == NULL || VAR2 == NULL ) {
return( 0 );
}

VAR3 = strlen( VAR2 );
if ( strlen( VAR1 ) < VAR3 ) {
return( 0 );
}

return( FUN2( VAR1, VAR2, VAR3 ) == 0 );
}