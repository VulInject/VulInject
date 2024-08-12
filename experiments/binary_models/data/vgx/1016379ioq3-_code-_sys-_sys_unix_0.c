VAR1 FUN1( VAR2 *VAR3, int VAR4 )
{
VAR5 *VAR6;

VAR6 = fopen( "", "" );
if( !VAR6 )
return VAR7;

FUN2( VAR6, NULL, VAR8, 0 ); 

if( fread( VAR3, sizeof( VAR2 ), VAR4, VAR6 ) != VAR4 )
{
fclose( VAR6 );
return VAR7;
}

fclose( VAR6 );
return VAR9;
}