void FUN1( void ) {
int VAR1;
char *VAR2 = "";
char *VAR3, *VAR4;
char *VAR5, *VAR6;
char *VAR7;
char VAR8[256];
int VAR9, VAR10;

VAR10 = FUN2( "" ) + FUN2( "" );

VAR9 = FUN3( VAR2, &VAR1, VAR11 );
if ( VAR9 >= 0 ) { 

VAR3 = (char *)FUN4( VAR9 + 1 );
memset( VAR3, 0, VAR9 + 1 );
VAR4 = (char *)FUN4( VAR9 + 1 );
memset( VAR4, 0, VAR9 + 1 );

FUN5( (void *)VAR3, VAR9, VAR1 );
FUN6( VAR1 );


VAR5 = VAR3;
VAR6 = VAR4;
VAR6[0] = '';
while ( ( VAR7 = FUN7( &VAR5 ) ) && VAR7[0] ) {
if ( !FUN8( VAR7, VAR12.VAR13 ) ) {

VAR7 = FUN7( &VAR5 );  
if ( VAR7 && VAR7[0] ) {
if ( FUN9( VAR7 ) == VAR10 ) {  
FUN10( VAR3 );
FUN10( VAR4 );
return;
}
}
} else {    
FUN11( VAR6, VAR9 + 1, VAR7 );
FUN11( VAR6, VAR9 + 1, "" );
VAR7 = FUN7( &VAR5 );  
if ( VAR7 && VAR7[0] ) {
FUN11( VAR6, VAR9 + 1, VAR7 );
FUN11( VAR6, VAR9 + 1, "" );
} else {
FUN12( VAR14, "" );
}
}
}

VAR1 = FUN13( VAR2 );
if ( VAR1 < 0 ) {
FUN12( VAR14, "", VAR2 );
}

VAR9 = strlen( VAR4 );
if ( FUN14( (void *)VAR4, VAR9, VAR1 ) != VAR9 ) {
FUN12( VAR14, "", VAR2 );
}
FUN6( VAR1 );

FUN10( VAR3 );
FUN10( VAR4 );
}

FUN3( VAR2, &VAR1, VAR15 );
if ( VAR1 < 0 ) {
FUN12( VAR14, "" );
}
FUN15( VAR8, sizeof( VAR8 ), "", VAR12.VAR13, VAR10 );
FUN14( VAR8, strlen( VAR8 ), VAR1 );
FUN6( VAR1 );


VAR9 = FUN3( VAR2, &VAR1, VAR11 );
if ( VAR9 >= 0 ) {
FUN6( VAR1 );
}
}