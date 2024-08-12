static int
FUN1( VAR1 *argv )
{
VAR2 *VAR3 = argv[0];
VAR2 *VAR4 = argv[1];

if( !(VAR4->VAR5 = 
FUN2( VAR3->VAR5, VAR4->VAR6 )) )
return( -1 );

return( 0 );
}