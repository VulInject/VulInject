void FUN1( void ) {
int VAR1, VAR2, VAR3;
short   *VAR4;
fileHandle_t VAR5;
int		VAR6;
char	*VAR7;
char	VAR8[VAR9];

if ( FUN2() != 2 ) {
FUN3( "" );
return;
}

FUN4( VAR8, FUN5( 1 ), sizeof( VAR8 ) );
FUN6( VAR8, sizeof( VAR8 ), "" );

if (!FUN7(VAR8, ""))
{
FUN3("".VAR10\"");
return;
}

VAR5 = FUN8( VAR8 );
if ( !VAR5 ) {
FUN3 ("", VAR8);
return;
}

FUN3 ("", VAR8 );


for ( VAR1 = VAR11.VAR12 - VAR11.VAR13 + 1 ; VAR1 <= VAR11.VAR12 ; VAR1++ )
{
VAR4 = VAR11.VAR14 + ( VAR1 % VAR11.VAR13 ) * VAR11.VAR15;
for ( VAR2 = 0 ; VAR2 < VAR11.VAR15 ; VAR2++ )
if ( ( VAR4[VAR2] & 0xff ) != '' ) {
break;
}
if ( VAR2 != VAR11.VAR15 ) {
break;
}
}

VAR6 = VAR11.VAR15 + 3 * sizeof ( char );
VAR6 = VAR11.VAR15 + 2 * sizeof ( char );

VAR7 = FUN9( VAR6 );


VAR7[VAR6-1] = 0;
for ( ; VAR1 <= VAR11.VAR12 ; VAR1++ )
{
VAR4 = VAR11.VAR14 + ( VAR1 % VAR11.VAR13 ) * VAR11.VAR15;
for ( VAR3 = 0; VAR3 < VAR11.VAR15; VAR3++ )
VAR7[VAR3] = VAR4[VAR3] & 0xff;
for ( VAR2 = VAR11.VAR15 - 1 ; VAR2 >= 0 ; VAR2-- )
{
if ( VAR7[VAR2] == '' ) {
VAR7[VAR2] = 0;
} else {
break;
}
}
FUN10(VAR7, VAR6, "");
FUN10(VAR7, VAR6, "");
FUN11( VAR7, strlen( VAR7 ), VAR5 );
}

FUN12( VAR7 );
FUN13( VAR5 );
}