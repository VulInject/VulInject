int FUN1( unsigned char **VAR1, unsigned char *VAR2,
const unsigned char *VAR3, size_t VAR4 )
{
size_t VAR5 = 0;

if( *VAR1 < VAR2 || (VAR6)( *VAR1 - VAR2 ) < VAR4 )
return( VAR7 );

VAR5 = VAR4;
(*VAR1) -= VAR5;
memcpy( *VAR1, VAR3, VAR5 );

return( (int) VAR5 );
}