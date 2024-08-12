static int
FUN1( VAR1 *VAR2 )
{
VAR3 *class = FUN2( VAR2 ); 
VAR4 *VAR5 = (VAR4 *) VAR2;

VAR6 **VAR7 = (VAR6 **) FUN3( VAR2, 2 );

VAR6 *VAR8; 
VipsBandFormat VAR9;
VipsInterpretation VAR10;
VAR6 *VAR11; 

if( FUN4( VAR12 )->FUN5( VAR2 ) )
return( -1 );

VAR8 = VAR5->VAR8;
if( FUN6( class->VAR13, VAR8, 3 ) )
return( -1 ); 

switch( VAR5->VAR14 ) { 
case 16:
VAR10 = VAR15;
VAR9 = VAR16;
break;

case 8:
VAR10 = VAR17;
VAR9 = VAR18;
break;

default:
FUN7( class->VAR13, 
"", FUN8( "" ) );
return( -1 );
}

if( FUN9( VAR8, &VAR7[0], NULL ) )
return( -1 );
VAR8 = VAR7[0];

VAR11 = FUN10();
if( FUN11( VAR11, 
VAR19, VAR8, NULL ) ) {
FUN12( VAR11 );
return( -1 );
}
VAR11->VAR20 = VAR10;
VAR11->VAR21 = VAR9;
VAR11->VAR22 = VAR8->VAR22 - 2;

if( FUN13( VAR11,
VAR23, VAR24, VAR25, 
VAR8, VAR5 ) ) {
FUN12( VAR11 );
return( -1 );
}

FUN14( VAR2, "", VAR11, NULL ); 

return( 0 );
}