static VAR1
FUN1( const char *VAR2 )
{

unsigned char VAR3[100];
int VAR4;

return( (VAR4 = FUN2( VAR2, VAR3, 100 )) > 10 &&
FUN3( VAR3, VAR4 ) );
}