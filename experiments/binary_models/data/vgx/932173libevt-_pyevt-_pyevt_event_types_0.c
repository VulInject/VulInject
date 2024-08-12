VAR1 *FUN1(
void )
{
VAR2 *VAR3 = NULL;
static char *VAR4                   = "";

VAR3 = FUN2(
struct VAR5,
&VAR6 );

if( VAR3 == NULL )
{
FUN3(
VAR7,
"",
VAR4 );

goto VAR8;
}
if( FUN4(
VAR3 ) != 0 )
{
FUN3(
VAR7,
"",
VAR4 );

goto VAR8;
}
return( (VAR1 *) VAR3 );

VAR8:
if( VAR3 != NULL )
{
FUN5(
(VAR1 *) VAR3 );
}
return( NULL );
}