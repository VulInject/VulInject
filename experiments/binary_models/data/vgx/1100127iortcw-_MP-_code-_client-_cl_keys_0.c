void FUN1( void ) {
int VAR1, VAR2, VAR3;
char VAR4[1024];

VAR2 = FUN2();

if ( VAR2 < 2 ) {
FUN3( "" );
return;
}
VAR3 = FUN4( FUN5( 1 ) );
if ( VAR3 == -1 ) {
FUN3( ""%VAR5\"", FUN5( 1 ) );
return;
}

if ( VAR2 == 2 ) {
if ( VAR6[VAR3].VAR7 && VAR6[VAR3].VAR7[0] ) {
FUN3( ""%VAR5\""%VAR5\"", FUN6(VAR3, VAR8), VAR6[VAR3].VAR7 );
} else {
FUN3( ""%VAR5\"", FUN6(VAR3, VAR8) );
}
return;
}


VAR4[0] = 0;     
for ( VAR1 = 2 ; VAR1 < VAR2 ; VAR1++ )
{
strcat( VAR4, FUN5( VAR1 ) );
if ( VAR1 != ( VAR2 - 1 ) ) {
strcat( VAR4, "" );
}
}

FUN7( VAR3, VAR4 );
}