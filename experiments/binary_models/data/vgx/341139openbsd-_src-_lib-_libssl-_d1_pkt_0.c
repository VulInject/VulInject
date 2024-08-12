static int
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR5 *VAR6;

VAR6 = FUN2(VAR4->VAR7);
if (VAR6) {
FUN3(VAR2, VAR6->VAR8);

free(VAR6->VAR8);
FUN4(VAR6);

return (1);
}

return (0);
}