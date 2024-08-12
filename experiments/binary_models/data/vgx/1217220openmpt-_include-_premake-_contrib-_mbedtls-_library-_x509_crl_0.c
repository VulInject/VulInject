static int FUN1( unsigned char **VAR1,
const unsigned char *VAR2,
VAR3 *VAR4 )
{
int VAR5 = VAR6;
size_t VAR7 = 0;


if( VAR2 <= *VAR1 )
return( 0 );

VAR4->VAR8 = **VAR1;
VAR4->VAR1 = *VAR1;


if( ( VAR5 = FUN2( VAR1, VAR2, &VAR4->VAR7,
VAR9 | VAR10 ) ) != 0 )
{
if( VAR5 == VAR11 )
{
VAR4->VAR1 = NULL;
return( 0 );
}
return( VAR12 + VAR5 );
}

VAR2 = *VAR1 + VAR4->VAR7;

if( VAR2 != *VAR1 + VAR4->VAR7 )
return( VAR12 +
VAR13 );

while( *VAR1 < VAR2 )
{
if( ( VAR5 = FUN2( VAR1, VAR2, &VAR7,
VAR9 | VAR10 ) ) != 0 )
return( VAR12 + VAR5 );

*VAR1 += VAR7;
}

if( *VAR1 != VAR2 )
return( VAR12 +
VAR13 );

return( 0 );
}