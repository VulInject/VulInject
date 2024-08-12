VAR1 FUN1( SQLHDBC VAR2 )
{
SQLRETURN VAR3;
int VAR4;
CLHDBC VAR5 = (VAR6)VAR2;
DMHDBC VAR7 = VAR5 -> VAR8;



VAR3 = FUN2( VAR5, 
VAR5 -> VAR9 );

if ( FUN3( VAR3 ))
{


for ( VAR4 = 0; 
VAR4 < sizeof( VAR10 ) / sizeof( VAR10[ 0 ] ); 
VAR4 ++ )
{
VAR7 -> VAR11[ VAR4 ] =
VAR5 -> VAR11[ VAR4 ];
}



VAR7 -> VAR9 = 
VAR5 -> VAR9;



if ( VAR5 -> VAR11 ) {
free( VAR5 -> VAR11 );
}

free( VAR5 );
}

return VAR3;
}