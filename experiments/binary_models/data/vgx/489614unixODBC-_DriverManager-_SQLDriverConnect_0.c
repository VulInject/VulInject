int FUN1( struct VAR1 *VAR2, char *VAR3, char *VAR4 )
{
struct VAR5 *VAR6, *VAR7;



VAR7 = NULL;
if ( VAR2 -> VAR8 > 0 )
{
VAR6 = VAR2 -> VAR9;
while( VAR6 )
{
if( FUN2( VAR3, VAR6 -> VAR10 ) == 0 )
{
free( VAR6 -> VAR11 );
VAR6 -> VAR11 = malloc( strlen( VAR4 ) + 1 );
strcpy( VAR6 -> VAR11, VAR4 );
return 0;
}
VAR7 = VAR6;
VAR6 = VAR6 -> VAR12;
}
}

VAR6 = malloc( sizeof( *VAR6 ));

VAR6 -> VAR10 = malloc( strlen( VAR3 ) + 1 );
strcpy( VAR6 -> VAR10, VAR3 );

VAR6 -> VAR11 = malloc( strlen( VAR4 ) + 1 );
strcpy( VAR6 -> VAR11, VAR4 );

VAR2 -> VAR8 ++;

if ( VAR2 -> VAR9 )
{
VAR7 -> VAR12 = VAR6;
VAR6 -> VAR12 = NULL;
}
else
{
VAR6 -> VAR12 = NULL;
VAR2 -> VAR9 = VAR6;
}

return 0;
}