static int FUN1( VAR1 *VAR2,
unsigned char *VAR3,
const unsigned char *VAR4,
VAR5 *VAR6 )
{
unsigned char *VAR7 = VAR3;
size_t VAR8 = 0;
const char **VAR9;

*VAR6 = 0;

if( VAR2->VAR10->VAR11 == NULL )
return( 0 );

FUN2( 3, ( "" ) );

for( VAR9 = VAR2->VAR10->VAR11; *VAR9 != NULL; VAR9++ )
VAR8 += strlen( *VAR9 ) + 1;

FUN3( VAR7, VAR4, 6 + VAR8 );

FUN4( VAR12, VAR7, 0 );
VAR7 += 2;




VAR7 += 4;

for( VAR9 = VAR2->VAR10->VAR11; *VAR9 != NULL; VAR9++ )
{

*VAR7 = (unsigned char)strlen( *VAR9 );
memcpy( VAR7 + 1, *VAR9, *VAR7 );
VAR7 += 1 + *VAR7;
}

*VAR6 = VAR7 - VAR3;


FUN4( *VAR6 - 6, VAR3, 4 );


FUN4( *VAR6 - 4, VAR3, 2 );

return( 0 );
}