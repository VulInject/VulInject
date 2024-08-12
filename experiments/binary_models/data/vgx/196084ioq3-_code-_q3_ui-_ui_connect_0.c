static void FUN1( const char *VAR1 ) {
static char VAR2[]	= "";
static char VAR3[]	= "";
static char VAR4[]	= "";

int VAR5, VAR6, VAR7;
char VAR8[64], VAR9[64], VAR10[64], VAR11[64];
int VAR12;
int VAR13, VAR14;
int VAR15 = VAR16|VAR17|VAR18;
const char *VAR19;

VAR5 = FUN2( "" );
VAR6 = FUN2( "" );
VAR7 = FUN2( "" );

VAR14 = FUN3( VAR2 ) * FUN4( VAR15 );
VAR13 = FUN3( VAR3 ) * FUN4( VAR15 );
if (VAR13 > VAR14) VAR14 = VAR13;
VAR13 = FUN3( VAR4 ) * FUN4( VAR15 );
if (VAR13 > VAR14) VAR14 = VAR13;
VAR14 += 16;

FUN5( 8, 128, VAR2, VAR15, VAR20 );
FUN5( 8, 160, VAR3, VAR15, VAR20 );
FUN5( 8, 224, VAR4, VAR15, VAR20 );

if (VAR5 > 0) {
VAR19 = FUN6( "", VAR1, (int)( (float)VAR6 * 100.0f / VAR5 ) );
} else {
VAR19 = VAR1;
}

FUN5( VAR14, 128, VAR19, VAR15, VAR20 );

FUN7( VAR8,		sizeof VAR8,		VAR6 );
FUN7( VAR9,	sizeof VAR9,	VAR5 );

if (VAR6 < 4096 || !VAR7) {
FUN5( VAR14, 160, "", VAR15, VAR20 );
FUN5( VAR14, 192, 
FUN6("", VAR8, VAR9), VAR15, VAR20 );
} else {
if ( (VAR21.VAR22 - VAR7) / 1000) {
VAR12 = VAR6 / ((VAR21.VAR22 - VAR7) / 1000);

} else {
VAR12 = 0;
}

FUN7( VAR10, sizeof VAR10, VAR12 );


if (VAR5 && VAR12) {
int VAR23 = VAR5 / VAR12; 


VAR23 = (VAR23 - (((VAR6/1024) * VAR23) / (VAR5/1024))) * 1000;

FUN8 ( VAR11, sizeof VAR11, VAR23 );


FUN5( VAR14, 160, 
VAR11, VAR15, VAR20 );
FUN5( VAR14, 192, 
FUN6("", VAR8, VAR9), VAR15, VAR20 );
} else {
FUN5( VAR14, 160, 
"", VAR15, VAR20 );
if (VAR5) {
FUN5( VAR14, 192, 
FUN6("", VAR8, VAR9), VAR15, VAR20 );
} else {
FUN5( VAR14, 192, 
FUN6("", VAR8), VAR15, VAR20 );
}
}

if (VAR12) {
FUN5( VAR14, 224, 
FUN6("", VAR10), VAR15, VAR20 );
}
}
}