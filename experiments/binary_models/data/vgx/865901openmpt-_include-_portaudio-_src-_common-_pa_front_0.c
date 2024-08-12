VAR1 FUN1( VAR2 *VAR3 )
{
PaError VAR4 = FUN2( VAR3 );

FUN3( "" );
FUN4(("", VAR3 ));

if( VAR4 == VAR5 )
{
VAR4 = FUN5(VAR3)->FUN6( VAR3 );
if( VAR4 == 0 )
{
VAR4 = FUN5(VAR3)->FUN7( VAR3 );
}
else if( VAR4 == 1 )
{
VAR4 = VAR6;
}
}

FUN8( "", VAR4 );

return VAR4;
}