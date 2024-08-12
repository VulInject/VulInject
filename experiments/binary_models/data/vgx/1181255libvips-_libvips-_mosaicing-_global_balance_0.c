static void *
FUN1( VAR1 *VAR2, VAR1 *VAR3, void *VAR4 )
{
VipsRect VAR5;
VAR6 *VAR7;


if( VAR2->VAR8 != VAR9 || VAR3 == VAR2 ) 
return( NULL );


FUN2( &VAR3->VAR10.VAR11, &VAR2->VAR10.VAR11, 
&VAR5 );
if( FUN3( &VAR5 ) ) 
return( NULL );


if( VAR5.VAR12 * VAR5.VAR13 < VAR14 )

return( NULL );


if( FUN4( VAR2->VAR15, 
(VAR16) VAR17, VAR3, NULL ) )
return( NULL );


if( !(VAR7 = FUN5( VAR3, VAR2, &VAR5 )) )
return( VAR3 );


if( FUN6( VAR7 ) ) 
return( VAR3 );


if( *FUN7( VAR7->VAR18, 5, 0 ) < VAR14 ||
*FUN7( VAR7->VAR19, 5, 0 ) < VAR14 ) {
FUN8( "" );
FUN8( "",
*FUN7( VAR7->VAR18, 5, 0 ), *FUN7( VAR7->VAR19, 5, 0 ) );
FUN9( VAR7, NULL, NULL );
FUN10( VAR7 );
}

return( NULL );
}