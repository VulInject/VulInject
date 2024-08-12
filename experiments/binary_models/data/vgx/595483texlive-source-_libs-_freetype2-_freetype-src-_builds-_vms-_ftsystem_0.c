extern ""
extern
int
FUN1( char*  VAR1,
int    VAR2 );































FUN2( void* )
FUN3( FT_Memory  VAR3,
long       VAR4 )
{
FUN4( VAR3 );

return malloc( VAR4 );
}






















FUN2( void* )
FUN5( FT_Memory  VAR3,
long       VAR5,
long       VAR6,
void*      VAR7 )
{
FUN4( VAR3 );
FUN4( VAR5 );

return realloc( VAR7, VAR6 );
}















FUN2( void )
FUN6( FT_Memory  VAR3,
void*      VAR7 )
{
FUN4( VAR3 );

free( VAR7 );
}































FUN2( void )
FUN7( FT_Stream  VAR8 )
{
FUN1( (VAR9)VAR8->VAR10.VAR11, VAR8->VAR4 );

VAR8->VAR10.VAR11 = NULL;
VAR8->VAR4               = 0;
VAR8->VAR12               = NULL;
}




FUN8( VAR13 )
FUN9( FT_Stream    VAR8,
const char*  VAR14 )
{
int          VAR15;
struct stat  VAR16;


if ( !VAR8 )
return FUN10( VAR17 );


VAR15 = open( VAR14, VAR18 );
if ( VAR15 < 0 )
{
FUN11(( "" ));
FUN11(( "", VAR14 ));
return FUN10( VAR19 );
}

if ( FUN12( VAR15, &VAR16 ) < 0 )
{
FUN11(( "" ));
FUN11(( "", VAR14 ));
goto VAR20;
}

VAR8->VAR4 = VAR16.VAR21;
if ( !VAR8->VAR4 )
{
FUN11(( "" ));
FUN11(( "", VAR14 ));
goto VAR20;
}

VAR8->VAR22  = 0;
VAR8->VAR12 = (unsigned char *)FUN13( NULL,
VAR8->VAR4,
VAR23,
VAR24 | VAR25,
VAR15,
0 );

if ( VAR8->VAR12 == VAR26 )
{
FUN11(( "" ));
FUN11(( "", VAR14 ));
goto VAR20;
}

close( VAR15 );

VAR8->VAR10.VAR11 = VAR8->VAR12;
VAR8->VAR27.VAR11   = (char*)VAR14;

VAR8->close = VAR28;
VAR8->read  = NULL;

FUN14(( "" ));
FUN14(( "",
VAR14, VAR8->VAR4 ));

return VAR29;

VAR20:
close( VAR15 );

VAR8->VAR12 = NULL;
VAR8->VAR4 = 0;
VAR8->VAR22  = 0;

return FUN10( VAR30 );
}



extern VAR31
FUN15( FT_Memory  VAR3 );

extern void
FUN16( FT_Memory  VAR3 );





FUN8( VAR32 )
FUN17( void )
{
FT_Memory  VAR3;


VAR3 = (VAR32)malloc( sizeof ( *VAR3 ) );
if ( VAR3 )
{
VAR3->VAR33    = NULL;
VAR3->VAR34   = VAR35;
VAR3->realloc = VAR36;
VAR3->free    = VAR37;
FUN15( VAR3 );
}

return VAR3;
}




FUN8( void )
FUN18( FT_Memory  VAR3 )
{
FUN16( VAR3 );
VAR3->free( VAR3, VAR3 );
}