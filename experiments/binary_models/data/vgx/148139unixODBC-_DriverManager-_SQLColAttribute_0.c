SQLRETURN FUN1 ( SQLHSTMT VAR1,
SQLUSMALLINT VAR2,
SQLUSMALLINT VAR3,
SQLPOINTER VAR4,
SQLSMALLINT VAR5,
VAR6 *VAR7,
VAR8 *VAR9 )
{
DMHSTMT VAR10 = (VAR11) VAR1;
SQLRETURN VAR12 = 0;
SQLCHAR VAR13[ 100 + VAR14 ];
int VAR15;


if ( !FUN2( VAR10 ))
{
FUN3( VAR16, 
VAR17, 
VAR18, 
VAR18, 
"" );

return VAR19;
}

FUN4( VAR10 );

if ( VAR20.VAR21 )
{
sprintf( VAR10 -> VAR22, "\VAR23\VAR24\VAR25:\
\VAR23\VAR24\VAR24\VAR26 = %VAR27\
\VAR23\VAR24\VAR24\tColumn VAR28 = %VAR29\
\VAR23\VAR24\VAR24\tField VAR30 = %VAR31\
\VAR23\VAR24\VAR24\tCharacter VAR32 = %VAR27\
\VAR23\VAR24\VAR24\tBuffer VAR33 = %VAR29\
\VAR23\VAR24\VAR24\tString VAR33 = %VAR27\
\VAR23\VAR24\VAR24\tNumeric VAR34 = %VAR27",
VAR10,
VAR2,
FUN5( VAR13, VAR3 ),
VAR4,
VAR5,
VAR7,
VAR9 );

FUN3( VAR16, 
VAR17, 
VAR18, 
VAR18, 
VAR10 -> VAR22 );
}

FUN6( VAR35, VAR10 );

if ( VAR2 == 0 &&
VAR10 -> VAR36 == VAR37 && VAR10 -> VAR38 -> VAR36 == VAR37 &&
VAR3 != VAR39 )
{
FUN3( VAR16, 
VAR17, 
VAR18, 
VAR18, 
"" );

FUN7( &VAR10 -> VAR40,
VAR41, NULL,
VAR10 -> VAR38 -> VAR42 -> VAR43,
VAR44 );

return FUN8( VAR35, VAR10, VAR45 );
}




if ( VAR10 -> VAR46 == VAR47 )
{
FUN3( VAR16, 
VAR17, 
VAR18, 
VAR18, 
"" );

FUN9( &VAR10 -> VAR40,
VAR48, NULL,
VAR10 -> VAR38 -> VAR42 -> VAR43 );

return FUN8( VAR35, VAR10, VAR45 );
}

else if ( VAR10 -> VAR46 == VAR49 )
{
FUN3( VAR16, 
VAR17, 
VAR18, 
VAR18, 
"" );

FUN9( &VAR10 -> VAR40,
VAR50, NULL,
VAR10 -> VAR38 -> VAR42 -> VAR43 );

return FUN8( VAR35, VAR10, VAR45 );
}
else if ( VAR10 -> VAR46 == VAR51 ||
VAR10 -> VAR46 == VAR52 ||
VAR10 -> VAR46 == VAR53 ||
VAR10 -> VAR46 == VAR54 ||
VAR10 -> VAR46 == VAR55 ||
VAR10 -> VAR46 == VAR56 )
{
FUN3( VAR16, 
VAR17, 
VAR18, 
VAR18, 
"" );

FUN9( &VAR10 -> VAR40,
VAR48, NULL,
VAR10 -> VAR38 -> VAR42 -> VAR43 );

return FUN8( VAR35, VAR10, VAR45 );
}

if ( VAR10 -> VAR46 == VAR57 ||
VAR10 -> VAR46 == VAR58 )
{
if ( VAR10 -> VAR59 != VAR44 )
{
FUN3( VAR16, 
VAR17, 
VAR18, 
VAR18, 
"" );

FUN9( &VAR10 -> VAR40,
VAR48, NULL,
VAR10 -> VAR38 -> VAR42 -> VAR43 );

return FUN8( VAR35, VAR10, VAR45 );
}
}

switch( VAR3 )
{
case VAR60:
case VAR61:
case VAR62:
case VAR39:
case VAR63:
case VAR64:
case VAR65:
case VAR66:
case VAR67:
case VAR68:
case VAR69:
case VAR70:
case VAR71:
case VAR72:
case VAR73:
case VAR74:
case VAR75:
VAR15 = 0;
break;
case VAR76:
case VAR77:
case VAR78:
case VAR79:
case VAR80:
case VAR81:
case VAR82:
case VAR83:
case VAR84:
case VAR85:
case VAR86:
case VAR87:
if ( VAR5 < 0 && VAR5 != VAR88 )
{
FUN9( &VAR10 -> VAR40,
VAR89, NULL,
VAR10 -> VAR38 -> VAR42 -> VAR43 );

return FUN8( VAR35, VAR10, VAR45 );
}
default:
VAR15 = VAR5 >= 0;
break;
}

if ( VAR10 -> VAR38 -> VAR90 )
{
if ( !FUN10( VAR10 -> VAR38 ))
{
if ( FUN11( VAR10 -> VAR38 ))
{
VAR91 *VAR13 = NULL;



VAR3 = FUN12( VAR3 );

switch( VAR3 )
{
case VAR76:
case VAR77:
case VAR78:
case VAR79:
case VAR80:
case VAR81:
case VAR82:
case VAR83:
case VAR84:
case VAR85:
case VAR86:
case VAR87:
if ( FUN13( VAR12 ) && VAR4 && VAR5 > 0 )
{
VAR13 = calloc( sizeof( VAR91 ) * ( VAR5 + 1 ), 1);
}
break;

default:
break;
}

VAR12 = FUN14( VAR10 -> VAR38,
VAR10 -> VAR92,
VAR2,
VAR3,
VAR13 ? VAR13 : VAR4,
VAR5,
VAR7,
VAR9 );

switch( VAR3 )
{
case VAR76:
case VAR77:
case VAR78:
case VAR79:
case VAR80:
case VAR81:
case VAR82:
case VAR83:
case VAR84:
case VAR85:
case VAR86:
case VAR87:
if ( FUN13( VAR12 ) && VAR4 && VAR13 )
{
FUN15( VAR4, VAR5, VAR13,  VAR88, VAR10 -> VAR38, NULL );
}
if ( FUN13( VAR12 ) && VAR7 ) 
{
*VAR7 /= sizeof( VAR91 );	
}
break;

default:
break;
}

if ( VAR13 )
{
free( VAR13 );
}
}
else
{
FUN3( VAR16, 
VAR17, 
VAR18, 
VAR18, 
"" );

FUN9( &VAR10 -> VAR40,
VAR93, NULL,
VAR10 -> VAR38 -> VAR42 -> VAR43 );

return FUN8( VAR35, VAR10, VAR45 );
}
}
else
{
VAR91 *VAR13 = NULL;

SQLSMALLINT VAR94;
if ( VAR15 && VAR4 && VAR5 > 0 )
{
VAR13 = calloc( sizeof( VAR91 ) * ( VAR5 + 1 ), 1);

VAR94 = VAR5 > 16383 ? VAR5 : sizeof( VAR91 ) * VAR5;
}

VAR12 = FUN16( VAR10 -> VAR38,
VAR10 -> VAR92,
VAR2,
VAR3,
VAR13 ? VAR13 : VAR4,
VAR13 ? VAR94 : VAR5,
VAR7,
VAR9 );

if ( FUN13( VAR12 ) && VAR15 && VAR5 > 0 )
{
if ( VAR4 && VAR13 )
{
FUN15( VAR4, VAR5, VAR13, VAR88, VAR10 -> VAR38, NULL );
}

switch ( VAR3 )
{
case VAR76:
case VAR77:
case VAR78:
case VAR79:
case VAR80:
case VAR81:
case VAR82:
case VAR83:
case VAR84:
case VAR85:
case VAR86:
case VAR87:
if ( VAR12 == VAR95 && VAR7 )
{
*VAR7 /= sizeof( VAR91 );	
}
break;
default:
if ( VAR7 )
{
*VAR7 /= sizeof( VAR91 );	
}
}
}

if ( VAR13 )
{
free( VAR13 );
}
}
}
else
{
if ( !FUN17( VAR10 -> VAR38 ))
{


if ( FUN18( VAR10 -> VAR38 ))
{


VAR3 = FUN12( VAR3 );

VAR12 = FUN19( VAR10 -> VAR38,
VAR10 -> VAR92,
VAR2,
VAR3,
VAR4,
VAR5,
VAR7,
VAR9 );
}
else
{
FUN3( VAR16, 
VAR17, 
VAR18, 
VAR18, 
"" );

FUN9( &VAR10 -> VAR40,
VAR93, NULL,
VAR10 -> VAR38 -> VAR42 -> VAR43 );
return FUN8( VAR35, VAR10, VAR45 );
}
}
else
{
VAR12 = FUN20( VAR10 -> VAR38,
VAR10 -> VAR92,
VAR2,
VAR3,
VAR4,
VAR5,
VAR7,
VAR9 );
}
}

if ( VAR12 == VAR96 )
{
VAR10 -> VAR59 = VAR44;
if ( VAR10 -> VAR46 != VAR57 &&
VAR10 -> VAR46 != VAR58 )
VAR10 -> VAR46 = VAR57;
}
else if ( FUN13( VAR12 ))
{


if ( VAR3 == VAR97 &&
VAR9 )
{
*(VAR98*)VAR9=
FUN21(VAR99, VAR10->VAR38,
*(VAR98*)VAR9);
}
}

if ( VAR20.VAR21 )
{
sprintf( VAR10 -> VAR22, 
"",
FUN22( VAR12, VAR13 ));

FUN3( VAR16, 
VAR17, 
VAR18, 
VAR18, 
VAR10 -> VAR22 );
}

return FUN23( VAR35, VAR10, VAR12, VAR100 );
}