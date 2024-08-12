static int
FUN1( VAR1 *VAR2 )
{
VAR3 *VAR4 = (VAR3 *) VAR2;
VAR5 *VAR6 = (VAR5 *) VAR2;

if( VAR6->VAR7 ) 
if( !(VAR4->VAR8 = 
FUN2( VAR6->VAR7 )) )
return( -1 );

if( FUN3( VAR9 )->
FUN4( VAR2 ) )
return( -1 );

return( 0 );
}