int FUN1( const VAR1 *VAR2,
VAR3 *VAR4,
const unsigned char **VAR5, size_t VAR6 )
{
unsigned char VAR7;
const unsigned char *VAR8;
FUN2( VAR2 != NULL );
FUN2( VAR4  != NULL );
FUN2( VAR5 != NULL );
FUN2( *VAR5 != NULL );


if( VAR6 < 2 )
return( VAR9 );

VAR7 = *(*VAR5)++;
if( VAR7 < 1 || VAR7 > VAR6 - 1 )
return( VAR9 );


VAR8 = *VAR5;
*VAR5 += VAR7;

return( FUN3( VAR2, VAR4, VAR8, VAR7 ) );
}