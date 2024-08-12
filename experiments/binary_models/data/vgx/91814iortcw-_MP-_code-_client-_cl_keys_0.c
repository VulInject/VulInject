void FUN1( void )
{
char					*VAR1, *VAR2;
int						VAR3, VAR4, VAR5 = 0;
fileHandle_t	VAR6;

VAR7 = FUN2( VAR8, &VAR6, VAR9 );
if( !VAR6 )
{
FUN3( "", VAR8 );
return;
}

if( VAR7 < VAR10 &&
FUN4( VAR11, VAR7, VAR6 ) == VAR7 )
{
VAR11[VAR7] = '';
VAR2 = VAR11;

for( VAR3 = VAR12 - 1; VAR3 >= 0; VAR3-- )
{
if( !*( VAR1 = FUN5( &VAR2 ) ) )
break;

VAR13[ VAR3 ].VAR14 = FUN6( VAR1 );

if( !*( VAR1 = FUN5( &VAR2 ) ) )
break;

VAR13[ VAR3 ].VAR15 = FUN6( VAR1 );

if( !*( VAR1 = FUN5( &VAR2 ) ) )
break;

VAR4 = FUN6( VAR1 );
VAR2++;
if( VAR4 > ( strlen( VAR11 ) -	( VAR2 - VAR11 ) ) )
{
FUN7( VAR16 "" );
break;
}
FUN8( VAR13[ VAR3 ].VAR17,
VAR2, VAR4 );
VAR13[ VAR3 ].VAR17[ VAR4 ] = '';
VAR2 += VAR4;

VAR5++;
}

memmove( &VAR13[ 0 ], &VAR13[ VAR3 + 1 ],
VAR5 * sizeof( VAR18 ) );
for( VAR3 = VAR5; VAR3 < VAR12; VAR3++ )
FUN9( &VAR13[ VAR3 ] );

VAR19 = VAR20 = VAR5;
}
else
FUN3( "", VAR8 );

FUN10( VAR6 );
}