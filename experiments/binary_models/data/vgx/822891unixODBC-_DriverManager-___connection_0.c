*
*




static char const VAR1[]= "";



char *FUN1( char *VAR2, char *VAR3, char *VAR4 )
{
char VAR5[ VAR6 + 1 ];
char VAR7[ VAR6 + 1 ];

FUN2( VAR8 );



FUN3( VAR2, "", "",
VAR7, sizeof( VAR7 ), "" );

if ( VAR7[ 0 ] == 0 )
{


FUN2( VAR9 );

FUN3( VAR2, "", "",
VAR7, sizeof( VAR7 ), "" );

FUN2( VAR10 );
if ( VAR7[ 0 ] == 0 )
return NULL;
}



strcpy( VAR4, "" );

if ( VAR7[ 0 ] != '' )
{
strcpy( VAR5, VAR7 );



FUN3( VAR5, "", "",
VAR7, sizeof( VAR7 ), "" );

if ( VAR7[ 0 ] == '' )
{
FUN3( VAR5, "", "",
VAR7, sizeof( VAR7 ), "" );
}
FUN3( VAR5, "", "",
VAR7, sizeof( VAR7 ), "" );

strcpy( VAR4, VAR5 );

if ( VAR7[ 0 ] == 0 ) {
return NULL;
}
}

strcpy( VAR3, VAR7 );

return VAR3;
}