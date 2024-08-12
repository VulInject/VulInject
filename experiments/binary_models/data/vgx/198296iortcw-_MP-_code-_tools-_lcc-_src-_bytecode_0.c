static void FUN1(VAR1)(VAR2 *VAR3) {
static char *VAR4;
static int VAR5;

if (VAR3->VAR6 && (VAR4 == NULL || strcmp(VAR4, VAR3->VAR6) != 0)) {
FUN2(""%VAR7\"", VAR4 = VAR3->VAR6);
VAR5 = 0;
if ( VAR8 ) {
free( VAR8 );
VAR8 = NULL;
}

FUN3( VAR3->VAR6 );
}
if (VAR3->VAR9 != VAR5) {
FUN2("", VAR5 = VAR3->VAR9);
FUN4( VAR3->VAR9 );
}
}