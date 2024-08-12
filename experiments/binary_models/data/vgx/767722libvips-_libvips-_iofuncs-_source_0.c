static int
FUN1( VAR1 *VAR2 )
{
VAR3 *VAR4;
gint64 VAR5;
unsigned char *VAR6;

FUN2( "" );

FUN3( !VAR2->VAR7 );
FUN3( !VAR2->VAR8 );
FUN3( !VAR2->VAR9 );
FUN3( VAR2->VAR10 >= 0 );

if( FUN4( VAR2 ) )
return( -1 );


VAR4 = FUN5();
FUN6( VAR4, VAR2->VAR10 );

VAR5 = 0;
VAR6 = VAR4->VAR11;
while( VAR5 < VAR2->VAR10 ) {
gint64 VAR12;

VAR12 = FUN7( VAR2, VAR6, 
FUN8( 4096, VAR2->VAR10 - VAR5 ) );
if( VAR12 == -1 ) {
FUN9( VAR13, VAR4 ); 
return( -1 );
}
if( VAR12 == 0 )
break;

VAR5 += VAR12;
VAR6 += VAR12;
}


VAR2->VAR11 = VAR4->VAR11;
VAR2->VAR7 = VAR14;
VAR2->VAR9 = VAR4;

FUN10( VAR2 );

return( 0 );
}