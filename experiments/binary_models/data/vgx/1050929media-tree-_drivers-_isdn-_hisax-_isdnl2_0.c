static void
FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;

if (FUN2(VAR8, &VAR6->VAR9.VAR10) &&
FUN2(VAR11, &VAR6->VAR9.VAR10)) {
FUN3(&VAR6->VAR9.VAR12, VAR6->VAR9.VAR13, VAR14, NULL, 9);
} else if (VAR6->VAR9.VAR15 == VAR6->VAR9.VAR16) {
FUN4(VAR2, VAR17);
FUN5(VAR18, &VAR6->VAR9.VAR10);
VAR6->VAR19.FUN6(VAR6, VAR20 | VAR21, (void *) '');
FUN7(VAR6, VAR22);
} else {
VAR6->VAR9.VAR15++;
FUN3(&VAR6->VAR9.VAR12, VAR6->VAR9.VAR13, VAR14,
NULL, 9);
FUN8(VAR6, VAR23 | 0x10, VAR24);
}
}