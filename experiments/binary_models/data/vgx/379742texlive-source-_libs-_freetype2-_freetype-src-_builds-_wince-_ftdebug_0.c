FUN1( const char*  VAR1 )
{
static WCHAR  VAR2[8192];

int  VAR3 = FUN2( VAR4, 0, VAR1, -1, VAR2,
sizeof ( VAR2 ) / sizeof ( *VAR2 ) );


if ( !VAR3 )
lstrcpyW( VAR2, VAR5"" );

FUN3( VAR2 );
}




FUN4( void )
FUN5( const char*  VAR6,
... )
{
static char  VAR2[8192];
va_list      VAR7;


FUN6( VAR7, VAR6 );
FUN7( VAR8, VAR6, VAR7 );

vsprintf( VAR2, VAR6, VAR7 );
FUN1( VAR2 );
FUN8( VAR7 );
}




FUN4( void )
FUN9( const char*  VAR6,
... )
{
static char  VAR2[8192];
va_list      VAR7;


FUN6( VAR7, VAR6 );
vsprintf( VAR2, VAR6, VAR7 );
FUN1( VAR2 );
FUN8( VAR7 );

FUN10( VAR9 );
}




FUN4( int )
FUN11( FT_Error     VAR10,
int          VAR11,
const char*  VAR12 )
{

fprintf( VAR8,
"",
VAR12,
VAR11,
VAR10,
FUN12( VAR10 ) );
FUN13( VAR10 );
FUN13( VAR11 );
FUN13( VAR12 );

return 0;
}






static int  VAR13[VAR14];


static int  VAR15[VAR14];



int*  VAR16;



static const char*  VAR17[VAR14 + 1] =
{
NULL
};





FUN4( VAR18 )
FUN14( void )
{
return VAR14;
}




FUN4( const char * )
FUN15( FT_Int  VAR19 )
{
int  VAR20 = FUN14();


if ( VAR19 < VAR20 )
return VAR17[VAR19];
else
return NULL;
}




FUN4( void )
FUN16( void )
{
VAR16 = VAR15;
}




FUN4( void )
FUN17( void )
{
VAR16 = VAR13;
}



FUN4( void )
FUN18( void )
{







const char*  VAR21 = NULL;


if ( VAR21 )
{
const char*  VAR22 = VAR21;