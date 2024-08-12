void
FUN1(VAR1 *VAR2, VAR3* VAR4, VAR5 *VAR6, VAR7* VAR8,
int VAR9, int VAR10, int VAR11)
{
ws_in6_addr VAR12;

if ( VAR10 <= 0 ) {
return;
}

while ( VAR10 > 0 ) {
if ( VAR10 < 16 ) {
FUN2(VAR2, VAR4, VAR8, VAR6, VAR9, -1,
"",VAR10 );
return;
}
FUN3(VAR6, VAR9, &VAR12);
if ( VAR2 ) {
FUN4(VAR2, VAR11, VAR6, VAR9, 16, &VAR12);
}
VAR9 += 16;
VAR10 -= 16;
}
}