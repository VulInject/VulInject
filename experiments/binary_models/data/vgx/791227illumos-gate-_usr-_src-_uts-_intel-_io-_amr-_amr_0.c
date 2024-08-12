int
FUN1(void)
{
int		VAR1;

VAR1 = FUN2((void *)&VAR2,
sizeof (struct VAR3), 0);

if (VAR1 != 0)
goto VAR4;

if ((VAR1 = FUN3(&VAR5)) != 0) {
FUN4((void*)&VAR2);
goto VAR4;
}

VAR1 = FUN5(&VAR5);
if (VAR1 != 0) {
FUN6(&VAR5);
FUN4((void*)&VAR2);
goto VAR4;
}

return (VAR1);

VAR4:
FUN7(VAR6, "");
return (VAR1);
}