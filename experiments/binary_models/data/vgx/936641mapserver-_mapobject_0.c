void FUN1( VAR1 *VAR2 )

{
const char *VAR3;

for( VAR3 = FUN2( &(VAR2->VAR4) );
VAR3 != NULL;
VAR3 = FUN3( &(VAR2->VAR4), VAR3 ) ) {
const char *VAR5 = FUN4( &(VAR2->VAR4), VAR3 );
if( FUN5(VAR3,"") == 0 ||
FUN5(VAR3,"") == 0 ) {
FUN6( VAR5, VAR2->VAR6 );
} else if( FUN5(VAR3,"") == 0 ) {
FUN7( VAR5, VAR2->VAR6 );
} else {
FUN8( VAR3, VAR5 );
}
}
}