void FUN1(register VAR1 **VAR2)
{
FUN2(*VAR2);
free(*VAR2);
*VAR2 = 0;
}