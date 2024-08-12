static int FUN1( VAR1 *VAR2 )
{
int VAR3 = VAR4;
VAR5 *VAR6 = FUN2( VAR2 );


if( FUN3( VAR6 ) != VAR7 &&
FUN3( VAR6 ) != VAR8 )
{
FUN4( 1, ( "" ) );
return( VAR9 );
}

if( ( VAR3 = FUN5( &VAR2->VAR10->VAR11,
FUN6( *VAR6 ),
VAR12 ) ) != 0 )
{
FUN7( 1, ( "" ), VAR3 );
return( VAR3 );
}

return( 0 );
}