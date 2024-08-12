static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10;

FUN2();
FUN3(VAR6, &VAR4->VAR11, VAR12) {
VAR8 = FUN4(VAR2->VAR13, VAR6->VAR14,
NULL);
if (!VAR8)
continue;
VAR10 = (struct VAR9 *)VAR8->VAR15;
VAR10->VAR16 += (VAR17)VAR6->VAR16;
}
FUN5();
}