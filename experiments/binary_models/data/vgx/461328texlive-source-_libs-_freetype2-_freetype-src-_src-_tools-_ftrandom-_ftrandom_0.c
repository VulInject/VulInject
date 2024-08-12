snprintf( VAR1, sizeof ( VAR1 ),
"", VAR2[VAR3], VAR4->VAR5 );
if ( FUN1( VAR1, &VAR6 ) == -1 || FUN2( VAR6.VAR7 ) )
continue;
if ( !VAR8 || FUN3( VAR1, VAR8 ) )
{
if ( VAR9 >= VAR10 )
{
VAR10 += 100;
VAR11 = realloc( VAR11, VAR10 * sizeof ( struct VAR11 ) );
if ( !VAR11 )
{
fprintf( VAR12, "" );
FUN4( 1 );
}
}

VAR11[VAR9].VAR13 = strdup( VAR1 );
VAR11[VAR9].VAR14  = VAR6.VAR15;

FUN5( &VAR11[VAR9] );
VAR9++;
}
}

FUN6( VAR16 );
}

if ( VAR9 == 0 )
{
fprintf( VAR12, "" );
FUN4( 1 );
}

VAR11[VAR9].VAR13 = NULL;
}


static unsigned int
FUN7( struct VAR11*  VAR17 )
{
if ( VAR18 == 0 && VAR19 == 0.0 )
return 0;

return VAR18 + (unsigned int)( VAR19 * VAR17->VAR14 );
}


static int
FUN8( int  VAR20,
int  VAR21 )
{
if ( VAR20 - VAR21 < 0x10000L )
return VAR20 + ( ( random() >> 8 ) % ( VAR21 + 1 - VAR20 ) );

return VAR20 + ( random() % ( VAR21 + 1 - VAR20 ) );
}


static int
FUN9( struct VAR11*  VAR17,
char*             VAR22 )
{
static char   VAR1[8096];
VAR23          *VAR24, *VAR25;
size_t        VAR14;
unsigned int  VAR3, VAR26;


VAR24 = fopen( VAR17->VAR13, "" );
if ( !VAR24 )
{
fprintf( VAR12, "", VAR17->VAR13 );
return false;
}

VAR25 = fopen( VAR22, "" );
if ( !VAR25 )
{
fprintf( VAR12, "",
VAR22 );
FUN4( 1 );