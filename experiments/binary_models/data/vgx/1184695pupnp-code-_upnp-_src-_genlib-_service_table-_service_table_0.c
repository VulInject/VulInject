void
FUN1( VAR1 * VAR2 )
{
VAR1 *VAR3 = NULL;

while( VAR2 ) {
if( VAR2->VAR4 )
FUN2( VAR2->VAR4 );
if( VAR2->VAR5 )
FUN2( VAR2->VAR5 );
if( VAR2->VAR6 )
free( VAR2->VAR6 );
if( VAR2->VAR7 )
free( VAR2->VAR7 );
if( VAR2->VAR8 )
free( VAR2->VAR8 );
if( VAR2->VAR9 )
FUN2( VAR2->VAR9 );
if( VAR2->VAR10 )
FUN3( VAR2->VAR10 );

VAR2->VAR11 = 0;
VAR3 = VAR2->VAR3;
free( VAR2 );
VAR2 = VAR3;
}
}