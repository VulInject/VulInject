int
FUN1(void)
{
int VAR1;

VAR1 = FUN2(&VAR2,
sizeof (struct VAR3), 1);
if (VAR1 != VAR4)
return (VAR1);

FUN3(&VAR5, VAR6);
VAR1 = FUN4(&VAR7);
if (VAR1 != VAR4) {
FUN5(&VAR5);
FUN6(&VAR2);
}

return (VAR1);
}