void FUN1( CLHSTMT VAR1 )
{
if ( VAR1 -> VAR2 )
{
free( VAR1 -> VAR2 );
VAR1 -> VAR2 = NULL;
}

if ( VAR1 -> VAR3 )
{
fclose( VAR1 -> VAR3 );
VAR1 -> VAR3 = NULL;
}

if ( VAR1 -> VAR4 )
{
free( VAR1 -> VAR4 );
VAR1 -> VAR4 = NULL;
}

if ( VAR1 -> VAR5 )
{
int VAR6;

for ( VAR6 = 0; VAR6 < VAR1 -> VAR7; VAR6 ++ )
{
free( VAR1 -> VAR5[ VAR6 ] );
}
free( VAR1 -> VAR5 );
VAR1 -> VAR5 = NULL;
}

if ( VAR1 -> VAR8 )
{
free( VAR1 -> VAR8 );
VAR1 -> VAR8 = NULL;
}

if ( VAR1 -> VAR9 )
{
free( VAR1 -> VAR9 );
VAR1 -> VAR9 = NULL;
}

if ( VAR1 -> VAR10 )
{
free( VAR1 -> VAR10 );
VAR1 -> VAR10 = NULL;
}
}