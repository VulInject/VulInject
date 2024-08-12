int
FUN1(void)
{
int VAR1;

FUN2(VAR2|VAR3, NULL, "");
if (((VAR1 = FUN3(&VAR4,
sizeof (VAR5), 1)) == 0) &&
((VAR1 = FUN4(&VAR6)) != 0))
FUN5(&VAR4);
FUN6(VAR2|VAR3, NULL, "", VAR1);
return (VAR1);
}