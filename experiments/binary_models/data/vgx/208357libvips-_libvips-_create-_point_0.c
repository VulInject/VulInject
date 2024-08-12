static int
FUN1( VAR1 *VAR2 )
{
VAR3 *VAR4 = FUN2( VAR2 );
VAR5 *VAR6 = FUN3( VAR2 );
VAR7 *class = FUN4( VAR6 );
VAR8 **VAR9 = (VAR8 **) FUN5( VAR2, 4 );

VAR8 *VAR10;

if( FUN6( VAR11 )->FUN7( VAR2 ) )
return( -1 );

VAR9[0] = FUN8();
FUN9( VAR9[0],
VAR6->VAR12, VAR6->VAR13, 1,
VAR14, VAR15, class->VAR16,
1.0, 1.0 );
if( FUN10( VAR9[0], VAR17, NULL ) ||
FUN11( VAR9[0], 
NULL, VAR18, NULL, VAR6, NULL ) )
return( -1 );
VAR10 = VAR9[0];

if( VAR6->VAR19 ) {
float VAR20 = class->VAR20;
float VAR21 = class->VAR21;
float VAR22 = VAR21 - VAR20;

if( FUN12( VAR10, &VAR9[2], 
255.0 / VAR22, -VAR20 * 255.0 / VAR22, 
"", VAR23,
NULL ) )
return( -1 );
VAR10 = VAR9[2];


VAR10->VAR24 = VAR25;
}

if( FUN13( VAR10, VAR4->VAR26 ) )
return( -1 );

return( 0 );
}