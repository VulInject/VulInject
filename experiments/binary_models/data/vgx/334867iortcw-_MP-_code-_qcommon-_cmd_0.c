char    *FUN1( void ) {
static char VAR1[VAR2];
int VAR3;

VAR1[0] = 0;
for ( VAR3 = 1 ; VAR3 < VAR4 ; VAR3++ ) {
strcat( VAR1, VAR5[VAR3] );
if ( VAR3 != VAR4 - 1 ) {
strcat( VAR1, "" );
}
}

return VAR1;
}