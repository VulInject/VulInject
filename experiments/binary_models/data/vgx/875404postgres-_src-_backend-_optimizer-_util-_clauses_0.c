static bool
FUN1(VAR1 *VAR2, void *VAR3)
{
if (VAR2 == NULL)
return false;
if (FUN2(VAR2, VAR4))
{
FUN3(((VAR4 *) VAR2)->VAR5 == 0);
return true;			
}
if (FUN2(VAR2, VAR6))
{
FUN3(((VAR6 *) VAR2)->VAR5 == 0);
return true;			
}
FUN3(!FUN2(VAR2, VAR7));
return FUN4(VAR2, VAR8, VAR3);
}