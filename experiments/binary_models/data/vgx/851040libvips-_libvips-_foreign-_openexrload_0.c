static int
FUN1( VAR1 *VAR2 )
{
VAR3 *VAR4 = (VAR3 *) VAR2;

if( FUN2( VAR4->VAR5, VAR2->VAR6 ) ) 
return( -1 );

FUN3( VAR2->VAR6->VAR5, VAR4->VAR5 );

return( 0 );
}