int main( int argc, char *argv[] )
{
int VAR1 = 1;
int VAR2 = VAR3;
unsigned char *VAR4 = NULL;
unsigned char VAR5[4096];
char VAR6[1024];
size_t VAR7, VAR8 = sizeof(VAR5);
int VAR9;
char *VAR10, *VAR11;


memset( VAR6, 0, sizeof(VAR6) );
memset( VAR5, 0, sizeof(VAR5) );

if( argc == 0 )
{
VAR12:
FUN1( VAR13 );
goto VAR14;
}

VAR15.VAR16            = VAR17;
VAR15.VAR18         = VAR19;

for( VAR9 = 1; VAR9 < argc; VAR9++ )
{

VAR10 = argv[VAR9];
if( ( VAR11 = strchr( VAR10, '' ) ) == NULL )
goto VAR12;
*VAR11++ = '';

if( strcmp( VAR10, "" ) == 0 )
VAR15.VAR16 = VAR11;
else if( strcmp( VAR10, "" ) == 0 )
VAR15.VAR18 = VAR11;
else
goto VAR12;
}


FUN1( "" );
FUN2( VAR20 );

VAR1 = FUN3( VAR15.VAR16, &VAR4, &VAR7 );

if( VAR1 != 0 )
{
FUN4( VAR1, VAR6, 1024 );
FUN1( "", VAR1, VAR6 );
goto VAR14;
}

FUN1( "" );


FUN1( "" );
FUN2( VAR20 );

if( ( VAR1 = FUN5( VAR4, VAR7, VAR5, &VAR8 ) ) != 0 )
{
FUN4( VAR1, VAR6, 1024 );
FUN1( "", VAR1, VAR6 );
goto VAR14;
}

FUN1( "" );


FUN1( "" );
FUN2( VAR20 );

VAR1 = FUN6( VAR15.VAR18, VAR5, VAR8 );

if( VAR1 != 0 )
{
FUN4( VAR1, VAR6, 1024 );
FUN1( "", VAR1, VAR6 );
goto VAR14;
}

FUN1( "" );

VAR2 = VAR21;

VAR14:
free( VAR4 );

FUN1( "" );
FUN2( VAR20 ); getchar();

FUN7( VAR2 );
}