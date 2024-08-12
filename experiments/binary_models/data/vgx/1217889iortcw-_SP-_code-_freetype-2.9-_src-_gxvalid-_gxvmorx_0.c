static void
FUN1( FT_Bytes       VAR1,
FT_Bytes       VAR2,
FT_UShort      VAR3,
GXV_Validator  VAR4 )
{
FT_Bytes  VAR5 = VAR1;

GXV_Validate_Func VAR6[] =
{
VAR7, 
VAR8, 
VAR9, 
NULL,                             
VAR10, 
VAR11, 

};

FT_UShort  VAR12;


FUN2( "" );

for ( VAR12 = 0; VAR12 < VAR3; VAR12++ )
{
GXV_Validate_Func  VAR13;

FT_ULong  VAR14;
FT_ULong  VAR15;
FT_ULong  VAR16;
FT_ULong  VAR17;
FT_ULong  VAR18;


FUN3( 4 + 4 + 4 );
VAR14          = FUN4( VAR5 );
VAR15        = FUN4( VAR5 );
VAR16 = FUN4( VAR5 );
VAR5 += 4;

FUN5(( "",
VAR12 + 1, VAR3, VAR14 ));

VAR17 = VAR15 & 0x0007;
VAR18 = VAR14 - ( 4 + 4 + 4 );
FUN3( VAR18 );


FUN6( (VAR19)( ( VAR15 >> 16 ) | VAR15 ),
VAR4 );
if ( VAR17 > 5 )
VAR20;

VAR13 = VAR6[VAR17];
if ( !VAR13 )
FUN5(( "", VAR17 ));

FUN7( VAR5, VAR5 + VAR18, VAR4 );


VAR5 += VAR18;
}

VAR4->VAR21 = (VAR22)( VAR5 - VAR1 );

VAR23;
}


static void
FUN8( FT_Bytes       VAR1,
FT_Bytes       VAR2,
GXV_Validator  VAR4 )
{
FT_Bytes  VAR5 = VAR1;
FT_ULong  VAR24;
FT_ULong  VAR25;
FT_ULong  VAR26;
FT_ULong  VAR3;


FUN2( "" );

FUN3( 4 + 4 + 4 + 4 );
VAR24  = FUN4( VAR5 );
VAR5 += 4;
VAR25   = FUN4( VAR5 );
VAR26 = FUN4( VAR5 );
VAR3    = FUN4( VAR5 );


FUN9( VAR5, VAR2, VAR26, VAR4 );
VAR5 += VAR4->VAR21;

if ( VAR3 >= 0x10000L )