void FUN1( int VAR1, int VAR2 ) {
int VAR3;
VAR4 *VAR5;
int     *VAR6;

VAR5 = &VAR7.VAR8[ VAR1 ];

if ( VAR5->VAR9 == VAR7.VAR9 ) {
if ( VAR5->VAR2 == VAR2 ) {
return;
}
FUN2( VAR10, "" );
}

VAR5->VAR2 = VAR2;
VAR5->VAR9 = VAR7.VAR9;
VAR6 = VAR7.VAR11 + VAR1 * VAR7.VAR12;
for ( VAR3 = 0 ; VAR3 < VAR7.VAR12  ; VAR3++ ) {
if ( VAR6[VAR3] > 0 ) {
FUN1( VAR3, VAR2 );
}
}
}