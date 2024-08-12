void FUN1( VAR1 *VAR2 ) {
int VAR3, VAR4;

if ( !VAR2->VAR5.VAR6 ) {
return;
}

VAR4 = ( VAR2->VAR7 ) & ( VAR8 - 1 );


VAR3 = ( VAR2->VAR7 - 1 ) & ( VAR8 - 1 );

if ( !VAR2->VAR5.VAR9[VAR3] ) {
return; 
}

while ( VAR2->VAR5.VAR9[VAR3] ) {

memset( VAR2->VAR5.VAR9[VAR3], 0, VAR2->VAR5.VAR10[VAR3] );

VAR2->VAR5.VAR9[VAR3] = NULL;
VAR2->VAR5.VAR10[VAR3] = 0;

VAR3--;
if ( VAR3 < 0 ) {
VAR3 = ( VAR8 - 1 );
}
if ( VAR3 == VAR4 ) {

break;
}
}
}