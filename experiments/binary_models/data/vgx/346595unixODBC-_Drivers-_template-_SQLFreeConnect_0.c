VAR1 FUN1( SQLHDBC VAR2 )
{
HDRVDBC	VAR3	= (VAR4)VAR2;
int		VAR5;


if( NULL == VAR3 )
return VAR6;

sprintf((char*) VAR3->VAR7, "", (long)VAR3 );
FUN2( VAR3->VAR8, VAR9, VAR9, VAR10, VAR11, VAR11, (char*)VAR3->VAR7 );

if( VAR3->VAR12 )
{
FUN2( VAR3->VAR8, VAR9, VAR9, VAR10, VAR11, VAR11, "" );
return VAR13;
}

if ( VAR3->VAR14 != NULL )
{
FUN2( VAR3->VAR8, VAR9, VAR9, VAR10, VAR11, VAR11, "" );
return VAR13;
}

VAR5 = FUN3( VAR3 );

return VAR5;

}