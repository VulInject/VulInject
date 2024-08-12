static int FUN1( unsigned char **VAR1,
const unsigned char *VAR2,
int *VAR3 )
{
int VAR4;

if( ( VAR4 = FUN2( VAR1, VAR2, VAR3 ) ) != 0 )
{
if( VAR4 == VAR5 )
{
*VAR3 = 0;
return( 0 );
}

return( VAR6 + VAR4 );
}

return( 0 );
}