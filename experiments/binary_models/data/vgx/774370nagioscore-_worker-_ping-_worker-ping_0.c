void		FUN1( char *);
void		FUN2( void);
void		FUN3( int, char **, char **, int *, char **,
char **, char **);
static int	FUN4( const char *);


int main( int argc, char **argv, char **VAR1) {
int VAR2 = VAR3;
char *VAR4;
char *VAR5 = ( char *)0;
char *VAR6 = ( char *)0;

if( VAR3 == VAR2) {
FUN5( "");
}

FUN3( argc, argv, VAR1, &VAR2, &VAR4,
&VAR5, &VAR6);

if( VAR3 == VAR2) {
FUN2();
FUN5( "", VAR4);
}


if( FUN6( VAR5, VAR6) == VAR7) {
fprintf( VAR8, "");
FUN7( 1);
}

if( VAR9 == VAR2) {
if( FUN8() == VAR10) {
fprintf( VAR8,
"",
( int)FUN9());
FUN7( 1);
}
}


if( FUN4( VAR4)) {
FUN7( 1);
}
}