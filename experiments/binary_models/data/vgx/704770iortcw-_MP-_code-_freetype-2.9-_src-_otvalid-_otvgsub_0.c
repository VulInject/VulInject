static void
FUN1( FT_Bytes       VAR1,
OTV_Validator  VAR2 )
{
FT_Bytes  VAR3 = VAR1;
FT_UInt   VAR4;


FUN2( "" );

FUN3( 2 );
VAR4 = FUN4( VAR3 );

FUN5(( "", VAR4 ));

switch ( VAR4 )
{
case 1:     
{
FT_Bytes  VAR5;
FT_Int    VAR6;
FT_Long   VAR7;


FUN3( 4 );
VAR5     = VAR1 + FUN4( VAR3 );
VAR6 = FUN6( VAR3 );

FUN7( VAR5, VAR2, -1 );

VAR7 = (VAR8)FUN8( VAR5 ) + VAR6;
if ( VAR7 < 0 )
VAR9;

VAR7 = (VAR8)FUN9( VAR5 ) + VAR6;
if ( (VAR10)VAR7 >= VAR2->VAR11 )
VAR9;
}
break;

case 2:     
{
FT_UInt  VAR5, VAR12;


FUN3( 4 );
VAR5   = FUN4( VAR3 );
VAR12 = FUN4( VAR3 );

FUN5(( "", VAR12 ));

FUN7( VAR1 + VAR5,
VAR2,
(VAR13)VAR12 );

FUN3( VAR12 * 2 );


for ( ; VAR12 > 0; VAR12-- )
if ( FUN4( VAR3 ) >= VAR2->VAR11 )
VAR14;
}
break;

default:
VAR15;
}

VAR16;
}












static void
FUN10( FT_Bytes       VAR1,
OTV_Validator  VAR2 )
{
FT_Bytes  VAR3 = VAR1;
FT_UInt   VAR4;


FUN2( "" );

FUN3( 2 );
VAR4 = FUN4( VAR3 );

FUN5(( "", VAR4 ));

switch ( VAR4 )
{
case 1:
VAR2->VAR17 = VAR2->VAR11;
FUN11( VAR18, VAR19 );
FUN12( VAR1, VAR2 );
break;

default:
VAR15;
}

VAR16;
}












static void
FUN13( FT_Bytes       VAR1,
OTV_Validator  VAR2 )
{
FT_Bytes  VAR3 = VAR1;
FT_UInt   VAR4;


FUN2( "" );

FUN3( 2 );
VAR4 = FUN4( VAR3 );

FUN5(( "", VAR4 ));

switch ( VAR4 )
{
case 1:
VAR2->VAR17 = VAR2->VAR11;
FUN11( VAR20, VAR21 );
FUN12( VAR1, VAR2 );
break;

default:
VAR15;
}

VAR16;
}













static void
FUN14( FT_Bytes       VAR1,
OTV_Validator  VAR2 )
{
FT_Bytes  VAR3 = VAR1;
FT_UInt   VAR22, VAR23;


VAR24;

FUN3( 4 );
VAR22 = FUN4( VAR3 );
if ( VAR22 >= VAR2->VAR11 )
VAR9;

VAR23 = FUN4( VAR3 );

FUN5(( "", VAR23 ));

if ( VAR23 == 0 )
VAR9;

VAR23--;

FUN3( VAR23 * 2 );     



VAR16;
}


static void
FUN15( FT_Bytes       VAR1,
OTV_Validator  VAR2 )
{
FT_Bytes  VAR3 = VAR1;
FT_UInt   VAR4;


FUN2( "" );

FUN3( 2 );
VAR4 = FUN4( VAR3 );

FUN5(( "", VAR4 ));

switch ( VAR4 )
{
case 1:
FUN16( VAR25, VAR26, VAR27 );
FUN12( VAR1, VAR2 );
break;

default:
VAR15;
}

VAR16;
}












static void
FUN17( FT_Bytes       VAR1,
OTV_Validator  VAR2 )
{
FT_Bytes  VAR3 = VAR1;
FT_UInt   VAR4;


FUN2( "" );

FUN3( 2 );
VAR4 = FUN4( VAR3 );

FUN5(( "", VAR4 ));

switch ( VAR4 )
{
case 1:




VAR2->VAR17 = VAR2->VAR28;
FUN16( VAR29, VAR30, VAR31 );
FUN12( VAR1, VAR2 );
break;

case 2:




FUN16( VAR32, VAR33, VAR34 );
FUN12( VAR1, VAR2 );
break;

case 3:
FUN18( VAR35 );
FUN12( VAR1, VAR2 );
break;

default:
VAR15;
}

VAR16;
}












static void
FUN19( FT_Bytes       VAR1,
OTV_Validator  VAR2 )
{
FT_Bytes  VAR3 = VAR1;
FT_UInt   VAR4;


FUN2( "" );

FUN3( 2 );
VAR4 = FUN4( VAR3 );

FUN5(( "", VAR4 ));

switch ( VAR4 )
{
case 1:




VAR2->VAR17 = VAR2->VAR28;
FUN16( VAR36,
VAR37, VAR38 );
FUN12( VAR1, VAR2 );
break;

case 2:




FUN16( VAR39,
VAR40, VAR41 );
FUN12( VAR1, VAR2 );
break;

case 3:
FUN18( VAR42 );
FUN12( VAR1, VAR2 );
break;

default:
VAR15;
}

VAR16;
}












static void
FUN20( FT_Bytes       VAR1,
OTV_Validator  VAR2 )
{
FT_Bytes  VAR3 = VAR1;
FT_UInt   VAR4;


FUN2( "" );

FUN3( 2 );
VAR4 = FUN4( VAR3 );

FUN5(( "", VAR4 ));

switch ( VAR4 )
{
case 1:     
{
FT_UInt            VAR43;
FT_ULong           VAR44;
OTV_Validate_Func  VAR45;


FUN3( 6 );
VAR43 = FUN4( VAR3 );
VAR44     = FUN21( VAR3 );

if ( VAR43 == 0 ||
VAR43 == 7 ||
VAR43 > 8  )
VAR9;

VAR45 = VAR2->VAR46[VAR43 - 1];
FUN22( VAR1 + VAR44, VAR2 );
}
break;

default:
VAR15;
}

VAR16;
}












static void
FUN23( FT_Bytes       VAR1,
OTV_Validator  VAR2 )
{
FT_Bytes  VAR3 = VAR1, VAR5;
FT_UInt   VAR4;
FT_UInt   VAR47, VAR48, VAR12;


FUN2( "" );

FUN3( 2 );
VAR4 = FUN4( VAR3 );

FUN5(( "", VAR4 ));

switch ( VAR4 )
{
case 1:     
FUN3( 4 );
VAR5            = VAR1 + FUN4( VAR3 );
VAR47 = FUN4( VAR3 );

FUN5(( "", VAR47 ));

FUN7( VAR5, VAR2, -1 );

FUN3( VAR47 * 2 + 2 );

for ( ; VAR47 > 0; VAR47-- )
FUN7( VAR1 + FUN4( VAR3 ), VAR2, -1 );

VAR48 = FUN4( VAR3 );

FUN5(( "", VAR48 ));

FUN3( VAR48 * 2 + 2 );

for ( ; VAR48 > 0; VAR48-- )
FUN7( VAR1 + FUN4( VAR3 ), VAR2, -1 );

VAR12 = FUN4( VAR3 );

FUN5(( "", VAR12 ));

if ( VAR12 != FUN24( VAR5 ) )
VAR9;

FUN3( VAR12 * 2 );


for ( ; VAR12 > 0; VAR12-- )
if ( FUN4( VAR3 ) >= VAR2->VAR11 )
VAR9;

break;

default:
VAR15;
}

VAR16;
}


static const OTV_Validate_Func  VAR49[8] =
{
VAR50,
VAR51,
VAR52,
VAR53,
VAR54,
VAR55,
VAR56,
VAR57
};














FUN25( void )
FUN26( FT_Bytes      VAR1,
FT_UInt       VAR11,
FT_Validator  VAR58 )
{
OTV_ValidatorRec  VAR59;
OTV_Validator     VAR2 = &VAR59;
FT_Bytes          VAR3       = VAR1;
FT_UInt           VAR60;
FT_UShort         VAR61;
FT_UInt           VAR62, VAR63, VAR64;

FUN27( VAR65 );


VAR2->VAR66 = VAR58;

FUN28(( "" ));
VAR67;

FUN3( 4 );

if ( FUN4( VAR3 ) != 1 )  
VAR15;

VAR61 = FUN4( VAR3 );   

VAR60 = 10;
switch ( VAR61 )
{
case 0:
FUN3( 6 );
break;

case 1:
FUN3( 10 );
VAR60 += 4;
break;

default:
VAR15;
}

VAR62  = FUN4( VAR3 );
VAR63 = FUN4( VAR3 );
VAR64  = FUN4( VAR3 );

VAR2->VAR68  = 8;
VAR2->VAR46  = (VAR69*)VAR49;
VAR2->VAR11 = VAR11;

FUN29( VAR1 + VAR64,
VAR2 );
FUN30( VAR1 + VAR63, VAR1 + VAR64,
VAR2 );
FUN31( VAR1 + VAR62, VAR1 + VAR63,
VAR2 );

if ( VAR61 > 0 )
{
FUN32( VAR65 );
FUN33( VAR65 );
if ( VAR65 )
FUN5(( "" )); 
}

FUN34(( "" ));
}