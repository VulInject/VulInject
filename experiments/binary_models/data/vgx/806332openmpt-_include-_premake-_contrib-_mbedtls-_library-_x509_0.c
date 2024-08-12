static int FUN1( unsigned char **VAR1, size_t VAR2, int *VAR3 )
{
*VAR3 = 0;

for( ; VAR2 > 0; --VAR2 )
{
if( ( **VAR1 < '') || ( **VAR1 > '' ) )
return ( VAR4 );

*VAR3 *= 10;
*VAR3 += ( *(*VAR1)++ - '' );
}

return( 0 );
}