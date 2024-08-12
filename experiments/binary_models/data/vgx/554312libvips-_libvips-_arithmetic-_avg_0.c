static int
FUN1( VAR1 *VAR2 )
{
VAR3 *VAR4 = FUN2( VAR2 ); 
VAR5 *VAR6 = (VAR5 *) VAR2;

gint64 VAR7;
double VAR8;

if( FUN3( VAR9 )->FUN4( VAR2 ) )
return( -1 );

VAR7 = (VAR10) 
FUN5( VAR4->VAR11 ) * 
FUN6( VAR4->VAR11 ) * 
FUN7( VAR4->VAR11 );
VAR8 = VAR6->VAR12 / VAR7;
FUN8( VAR2, "", VAR8, NULL );

return( 0 );
}