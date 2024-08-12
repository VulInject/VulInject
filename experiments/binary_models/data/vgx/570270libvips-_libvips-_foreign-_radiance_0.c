static int
FUN1( char *VAR1, VAR2 *read )
{
if( FUN2( VAR1 ) ) {
if( FUN3( VAR1, read->VAR3 ) )
return( -1 );
}
else if( FUN4( VAR1 ) ) {
read->VAR4 *= FUN5( VAR1 );
}
else if( FUN6( VAR1 ) ) {
COLOR VAR5;
int VAR6;

(void) FUN7( VAR5, VAR1 );
for( VAR6 = 0; VAR6 < 3; VAR6++ )
read->VAR7[VAR6] *= VAR5[VAR6];
}
else if( FUN8( VAR1 ) ) {
read->VAR8 *= FUN9( VAR1 );
}
else if( FUN10( VAR1 ) ) {
(void) FUN11( read->VAR9, VAR1 );
}

return( 0 );
}

static const char *VAR10[4][2] = {
{ "", "" }, 
{ "", "" },
{ "", "" },
{ "", "" }
};