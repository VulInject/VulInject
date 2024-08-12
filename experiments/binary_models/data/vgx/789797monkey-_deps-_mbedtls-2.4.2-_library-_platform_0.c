void (*VAR1)( int VAR2 ) = VAR3;

int FUN1( void (*VAR4)( int VAR2 ) )
{
VAR1 = VAR4;
return( 0 );
}