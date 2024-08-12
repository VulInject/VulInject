int main( void )
{
VAR1 *VAR2 = NULL;
nfdresult_t VAR3 = FUN1( "", NULL, &VAR2 );
if ( VAR3 == VAR4 )
{
FUN2("");
FUN2(VAR2);
free(VAR2);
}
else if ( VAR3 == VAR5 )
{
FUN2("");
}
else 
{
FUN3("", FUN4() );
}

return 0;
}