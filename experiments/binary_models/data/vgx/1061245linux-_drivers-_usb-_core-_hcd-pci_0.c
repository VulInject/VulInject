static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
companion_fn VAR5)
{
struct VAR1		*VAR6;
struct VAR3		*VAR7;
unsigned int		VAR8 = FUN2(VAR2->VAR9);


VAR6 = NULL;
FUN3(VAR6) {
if (VAR6->VAR10 != VAR2->VAR10 ||
FUN2(VAR6->VAR9) != VAR8)
continue;


if (VAR6->class != VAR11 && VAR6->class != VAR12 &&
VAR6->class != VAR13)
continue;

VAR7 = FUN4(VAR6);
if (!VAR7 || !VAR7->VAR14.VAR15)
continue;
FUN5(VAR2, VAR4, VAR6, VAR7);
}
}