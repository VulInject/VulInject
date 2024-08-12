static int
FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
VAR5 *VAR6;

if (!(VAR2->VAR7 & VAR8))
return (FUN2(VAR9));

(void) FUN3(&VAR2->VAR10);

for (VAR6 = VAR2->VAR11; VAR6 != NULL; VAR6 = VAR6->VAR12) {
if (strcmp(VAR3, VAR6->VAR13) == 0) {
FUN4(VAR6->VAR14);
VAR6->VAR14 = FUN5(VAR4, VAR15);
goto VAR16;
}
}

VAR6 = FUN6(sizeof (VAR5), VAR15);

VAR6->VAR13 = FUN5(VAR3, VAR15);
VAR6->VAR14 = FUN5(VAR4, VAR15);
VAR6->VAR12 = VAR2->VAR11;

VAR2->VAR11 = VAR6;
VAR16:
(void) FUN7(&VAR2->VAR10);
return (0);
}