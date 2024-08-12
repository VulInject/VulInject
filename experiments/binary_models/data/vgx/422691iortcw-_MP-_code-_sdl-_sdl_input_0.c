static void FUN1( void )
{
SDL_Event VAR1;
keyNum_t VAR2 = 0;
static keyNum_t VAR3 = 0;

if( !FUN2( VAR4 ) )
return;

while( FUN3( &VAR1 ) )
{
switch( VAR1.VAR5 )
{
case VAR6:
if ( VAR1.VAR2.VAR7 && FUN4( ) == 0 )
break;

if( ( VAR2 = FUN5( &VAR1.VAR2.VAR8, VAR9 ) ) )
FUN6( VAR10, VAR11, VAR2, VAR9, 0, NULL );

if( VAR2 == VAR12 )
FUN6( VAR10, VAR13, FUN7(''), 0, 0, NULL );
else if( VAR14[VAR15].VAR16 && VAR2 >= '' && VAR2 <= '' )
FUN6( VAR10, VAR13, FUN7(VAR2), 0, 0, NULL );

VAR3 = VAR2;
break;

case VAR17:
if( ( VAR2 = FUN5( &VAR1.VAR2.VAR8, VAR18 ) ) )
FUN6( VAR10, VAR11, VAR2, VAR18, 0, NULL );

VAR3 = 0;
break;

case VAR19:
if( VAR3 != VAR20 )
{
char *VAR21 = VAR1.VAR22.VAR22;


while( *VAR21 )
{
int VAR23 = 0;

if( ( *VAR21 & 0x80 ) == 0 )
VAR23 = *VAR21++;
else if( ( *VAR21 & 0xE0 ) == 0xC0 ) 
{
VAR23 |= ( *VAR21++ & 0x1F ) << 6;
VAR23 |= ( *VAR21++ & 0x3F );
}
else if( ( *VAR21 & 0xF0 ) == 0xE0 ) 
{
VAR23 |= ( *VAR21++ & 0x0F ) << 12;
VAR23 |= ( *VAR21++ & 0x3F ) << 6;
VAR23 |= ( *VAR21++ & 0x3F );
}
else if( ( *VAR21 & 0xF8 ) == 0xF0 ) 
{
VAR23 |= ( *VAR21++ & 0x07 ) << 18;
VAR23 |= ( *VAR21++ & 0x3F ) << 12;
VAR23 |= ( *VAR21++ & 0x3F ) << 6;
VAR23 |= ( *VAR21++ & 0x3F );
}
else
{
FUN8( "", (unsigned int)*VAR21 );
VAR21++;
}

if( VAR23 != 0 )
{
if( FUN9( 0, VAR23 ) )
{
FUN6( VAR10, VAR11, VAR20, VAR9, 0, NULL );
FUN6( VAR10, VAR11, VAR20, VAR18, 0, NULL );
}
else
FUN6( VAR10, VAR13, VAR23, 0, 0, NULL );
}
}
}
break;

case VAR24:
if( VAR25 )
{
if( !VAR1.VAR26.VAR27 && !VAR1.VAR26.VAR28 )
break;
FUN6( VAR10, VAR29, VAR1.VAR26.VAR27, VAR1.VAR26.VAR28, 0, NULL );
}
break;

case VAR30:
case VAR31:
{
int VAR32;
switch( VAR1.VAR33.VAR33 )
{
case VAR34:   VAR32 = VAR35;     break;
case VAR36: VAR32 = VAR37;     break;
case VAR38:  VAR32 = VAR39;     break;
case VAR40:     VAR32 = VAR41;     break;
case VAR42:     VAR32 = VAR43;     break;
default:                VAR32 = VAR44 + ( VAR1.VAR33.VAR33 - VAR42 + 1 ) % 16; break;
}
FUN6( VAR10, VAR11, VAR32,
( VAR1.VAR5 == VAR30 ? VAR9 : VAR18 ), 0, NULL );
}
break;

case VAR45:
if( VAR1.VAR46.VAR47 > 0 )
{
FUN6( VAR10, VAR11, VAR48, VAR9, 0, NULL );
FUN6( VAR10, VAR11, VAR48, VAR18, 0, NULL );
}
else if( VAR1.VAR46.VAR47 < 0 )
{
FUN6( VAR10, VAR11, VAR49, VAR9, 0, NULL );
FUN6( VAR10, VAR11, VAR49, VAR18, 0, NULL );
}
break;

case VAR50:
case VAR51:
if (VAR52->VAR53)
FUN10();
break;

case VAR54:
FUN11(VAR55, "");
break;

case VAR56:
switch( VAR1.VAR57.VAR58 )
{
case VAR59:
{
int VAR60, VAR61;

VAR60 = VAR1.VAR57.VAR62;
VAR61 = VAR1.VAR57.VAR63;


if( VAR64.VAR65.VAR66 )
{
break;
}


if( VAR64.VAR65.VAR67 == VAR60 && VAR64.VAR65.VAR68 == VAR61 )
{
break;
}

FUN12( "", VAR60 );
FUN12( "", VAR61 );
FUN13( "", "" );




VAR69 = FUN14( ) + 1000;
}
break;

case VAR70:    FUN12( "", 1 ); break;
case VAR71:
case VAR72:    FUN12( "", 0 ); break;
case VAR73:   FUN12( "", 1 ); break;
case VAR74: FUN12( "", 0 ); break;
}
break;

default:
break;
}
}
}