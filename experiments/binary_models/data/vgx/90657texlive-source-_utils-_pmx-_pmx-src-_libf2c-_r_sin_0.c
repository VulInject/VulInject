double FUN1();
double FUN2(VAR1) VAR2 *VAR1;
extern "" {
double FUN2(VAR2 *VAR1)
{
return( FUN1(*VAR1) );
}