int FUN1( unsigned char **VAR1,
const unsigned char *VAR2,
VAR3 *VAR4, VAR3 *VAR5 )
{
int VAR6;
size_t VAR7;

if( ( VAR6 = FUN2( VAR1, VAR2, &VAR7,
VAR8 | VAR9 ) ) != 0 )
return( VAR6 );

if( ( VAR2 - *VAR1 ) < 1 )
return( VAR10 );

VAR4->VAR11 = **VAR1;
VAR2 = *VAR1 + VAR7;

if( ( VAR6 = FUN2( VAR1, VAR2, &VAR4->VAR7, VAR12 ) ) != 0 )
return( VAR6 );

VAR4->VAR1 = *VAR1;
*VAR1 += VAR4->VAR7;

if( *VAR1 == VAR2 )
{
FUN3( VAR5, sizeof(VAR3) );
return( 0 );
}

VAR5->VAR11 = **VAR1;
(*VAR1)++;

if( ( VAR6 = FUN4( VAR1, VAR2, &VAR5->VAR7 ) ) != 0 )
return( VAR6 );

VAR5->VAR1 = *VAR1;
*VAR1 += VAR5->VAR7;

if( *VAR1 != VAR2 )
return( VAR13 );

return( 0 );
}