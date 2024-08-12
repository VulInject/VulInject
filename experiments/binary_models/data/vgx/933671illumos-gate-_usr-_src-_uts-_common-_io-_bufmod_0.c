static int
FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
struct	VAR6	*VAR7 = (struct VAR6 *)VAR2->VAR8;

FUN2(VAR7);

FUN3(VAR2);

if (VAR7->VAR9 != 0) {
(void) FUN4(VAR2, VAR7->VAR9);
VAR7->VAR9 = 0;
}

if (VAR7->VAR10) {
FUN5(VAR7->VAR10);
VAR7->VAR11 = VAR7->VAR10 = VAR7->VAR12 = NULL;
VAR7->VAR13 = 0;
}


FUN6((VAR14)VAR7, sizeof (struct VAR6));
VAR2->VAR8 = FUN7(VAR2)->VAR8 = NULL;

return (0);
}