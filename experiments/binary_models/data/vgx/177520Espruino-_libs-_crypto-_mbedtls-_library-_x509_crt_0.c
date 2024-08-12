int FUN1( VAR1 *VAR2, const char *VAR3 )
{
int VAR4 = 0;
int VAR5;
WCHAR VAR6[VAR7];
char VAR8[VAR7];
char *VAR9;
int VAR10 = (int) strlen( VAR3 );

WIN32_FIND_DATAW VAR11;
HANDLE VAR12;

if( VAR10 > VAR7 - 3 )
return( VAR13 );

memset( VAR6, 0, sizeof(VAR6) );
memset( VAR8, 0, VAR7 );
memcpy( VAR8, VAR3, VAR10 );
VAR8[VAR10++] = '';
VAR9 = VAR8 + VAR10;
VAR8[VAR10++] = '';

VAR5 = FUN2( VAR14, 0, VAR8, VAR10, VAR6,
VAR7 - 3 );
if( VAR5 == 0 )
return( VAR13 );

VAR12 = FUN3( VAR6, &VAR11 );
if( VAR12 == VAR15 )
return( VAR16 );

VAR10 = VAR7 - VAR10;
do
{
memset( VAR9, 0, VAR10 );

if( VAR11.VAR17 & VAR18 )
continue;

VAR5 = FUN4( VAR14, 0, VAR11.VAR19,
FUN5( VAR11.VAR19 ),
VAR9, VAR10 - 1,
NULL, NULL );
if( VAR5 == 0 )
return( VAR16 );

VAR5 = FUN6( VAR2, VAR8 );
if( VAR5 < 0 )
VAR4++;
else
VAR4 += VAR5;
}
while( FUN7( VAR12, &VAR11 ) != 0 );

if( FUN8() != VAR20 )
VAR4 = VAR16;

FUN9( VAR12 );
int VAR21;
struct stat VAR22;
struct VAR23 *VAR24;
char VAR25[255];
VAR26 *VAR27 = FUN10( VAR3 );

if( VAR27 == NULL )
return( VAR16 );

if( ( VAR4 = FUN11( &VAR28 ) ) != 0 )
{
FUN12( VAR27 );
return( VAR4 );
}

while( ( VAR24 = FUN13( VAR27 ) ) != NULL )
{
FUN14( VAR25, sizeof VAR25, "", VAR3, VAR24->VAR29 );

if( FUN15( VAR25, &VAR22 ) == -1 )
{
FUN12( VAR27 );
VAR4 = VAR16;
goto VAR30;
}

if( !FUN16( VAR22.VAR31 ) )
continue;



VAR21 = FUN6( VAR2, VAR25 );
if( VAR21 < 0 )
VAR4++;
else
VAR4 += VAR21;
}
FUN12( VAR27 );

VAR30:
if( FUN17( &VAR28 ) != 0 )
VAR4 = VAR32;


return( VAR4 );
}