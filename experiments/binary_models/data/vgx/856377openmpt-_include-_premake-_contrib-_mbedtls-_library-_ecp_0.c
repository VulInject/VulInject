int FUN1( const VAR1 *VAR2,
const VAR3 *VAR4 )
{
FUN2( VAR2 != NULL );
FUN2( VAR4   != NULL );

if( FUN3( VAR2 ) == VAR5 )
{

if( FUN4( VAR4, 0 ) != 0 ||
FUN4( VAR4, 1 ) != 0 ||
FUN5( VAR4 ) - 1 != VAR2->VAR6 ) 
return( VAR7 );


if( VAR2->VAR6 == 254 && FUN4( VAR4, 2 ) != 0 )
return( VAR7 );

return( 0 );
}
if( FUN3( VAR2 ) == VAR8 )
{

if( FUN6( VAR4, 1 ) < 0 ||
FUN7( VAR4, &VAR2->VAR9 ) >= 0 )
return( VAR7 );
else
return( 0 );
}

return( VAR10 );
}