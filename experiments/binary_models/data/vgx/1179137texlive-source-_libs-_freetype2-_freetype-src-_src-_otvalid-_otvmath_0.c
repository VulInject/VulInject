if ( VAR1 )
{
FUN1( "" );
FUN2( VAR2 + VAR1, VAR3, -1 );
VAR4;
}

if ( VAR5 )
FUN3( VAR2 + VAR5, VAR3 );

VAR4;
}










static void
FUN4( FT_Bytes       VAR2,
OTV_Validator  VAR3 )
{
FT_Bytes  VAR6 = VAR2;
FT_UInt   VAR7, VAR8;
FT_UInt   VAR9;

FUN5( VAR10 );




FUN6( 6 );

VAR6 += 2;                           
FUN7( VAR10 );
VAR7 = FUN8( VAR6 );

FUN6( 8 * VAR7 );
VAR8 = 6 + 8 * VAR7;

FUN9( VAR10 );
if ( VAR10 )
FUN10( VAR2 + VAR10, VAR3 );

for ( VAR9 = 0; VAR9 < VAR7; VAR9++ )
{
FT_UInt  VAR11;


VAR11 = FUN8( VAR6 );
if ( VAR11 >= VAR3->VAR12 )
VAR13;
VAR6 += 2*4;             
}


}


static void
FUN11( FT_Bytes       VAR2,
OTV_Validator  VAR3 )
{
FT_Bytes  VAR6 = VAR2;
FT_UInt   VAR14, VAR8;
FT_UInt   VAR9;

FUN5( VAR15 );




FUN6( 4 );

FUN7( VAR15 );
VAR14 = FUN8( VAR6 );

FUN6( 4 * VAR14 );
VAR8 = 4 + 4 * VAR14;

for ( VAR9 = 0; VAR9 < VAR14; VAR9++ )
{
FT_UInt  VAR11;


VAR11 = FUN8( VAR6 );
if ( VAR11 >= VAR3->VAR12 )
VAR13;
VAR6 += 2;                          
}

FUN9( VAR15 );
if ( VAR15 )
FUN4( VAR2+VAR15, VAR3 );


}


static void
FUN12( FT_Bytes       VAR2,
OTV_Validator  VAR3 )
{
FT_Bytes  VAR6 = VAR2;
FT_UInt   VAR14, VAR16, VAR9, VAR8;

FUN5( VAR17 );
FUN5( VAR18 );
FUN5( VAR19 );


FUN1( "" );

FUN6( 10 );

VAR6 += 2;                       
FUN7( VAR17 );
FUN7( VAR18 );
VAR14 = FUN8( VAR6 );
VAR16 = FUN8( VAR6 );

FUN6( 2 * VAR14 + 2 * VAR16 );
VAR8 = 10 + 2 * VAR14 + 2 * VAR16;

FUN9( VAR17 );
if ( VAR17 )
FUN2( VAR2 + VAR17, VAR3, (VAR20)VAR14 );

FUN9( VAR18 );
if ( VAR18 )
FUN2( VAR2 + VAR18, VAR3, (VAR20)VAR16 );

for ( VAR9 = 0; VAR9 < VAR14; VAR9++ )
{
FUN7( VAR19 );
FUN9( VAR19 );
FUN11( VAR2 + VAR19, VAR3 );
}

for ( VAR9 = 0; VAR9 < VAR16; VAR9++ )
{
FUN7( VAR19 );
FUN9( VAR19 );
FUN11( VAR2 + VAR19, VAR3 );
}

VAR4;
}












FUN13( void )
FUN14( FT_Bytes      VAR2,
FT_UInt       VAR12,
FT_Validator  VAR21 )
{
OTV_ValidatorRec  VAR22;
OTV_Validator     VAR3 = &VAR22;
FT_Bytes          VAR6       = VAR2;
FT_UInt           VAR23, VAR24, VAR25;


VAR3->VAR26 = VAR21;

FUN15(( "" ));
VAR27;

FUN6( 10 );

if ( FUN16( VAR6 ) != 0x10000UL )      
VAR28;

VAR23 = FUN8( VAR6 );
VAR24 = FUN8( VAR6 );
VAR25  = FUN8( VAR6 );

VAR3->VAR12 = VAR12;

FUN17( VAR2 + VAR23,
VAR3 );
FUN18( VAR2 + VAR24,
VAR3 );
FUN12 ( VAR2 + VAR25,
VAR3 );

FUN19(( "" ));
}