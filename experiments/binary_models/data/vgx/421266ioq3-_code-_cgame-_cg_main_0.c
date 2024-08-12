void FUN1(const char *VAR1) {
char	*VAR2;
char *VAR3;
int	VAR4, VAR5;
fileHandle_t	VAR6;
static char VAR7[VAR8];

VAR5 = FUN2();

VAR4 = FUN3( VAR1, &VAR6, VAR9 );
if ( !VAR6 ) {
FUN4( VAR10 "", VAR1 );
VAR4 = FUN3( "", &VAR6, VAR9 );
if (!VAR6) {
FUN5( VAR11 "" );
}
}

if ( VAR4 >= VAR8 ) {
FUN6( VAR6 );
FUN5( VAR11 "", VAR1, VAR4, VAR8 );
return;
}

FUN7( VAR7, VAR4, VAR6 );
VAR7[VAR4] = 0;
FUN6( VAR6 );

FUN8(VAR7);

FUN9();

VAR3 = VAR7;

while ( 1 ) {
VAR2 = FUN10( &VAR3, VAR12 );
if (!VAR2[0]) {
break;
}











if ( FUN11( VAR2, "" ) == 0 ) {
break;
}

if (FUN11(VAR2, "") == 0) {
if (FUN12(&VAR3)) {
continue;
} else {
break;
}
}
}

FUN4("", FUN2() - VAR5);

}