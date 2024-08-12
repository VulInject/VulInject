static int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5;
int VAR6;

FUN2(&VAR2->mutex);

VAR5 = FUN3(VAR2, VAR3);
if (!VAR5) {
FUN4(&VAR2->mutex);
return -VAR7;
}

FUN5(&VAR5->VAR8);
FUN4(&VAR2->mutex);


FUN6(VAR6)
if (FUN7(VAR5->VAR9) ||
FUN7(VAR5->VAR9[VAR6][0].VAR10))
goto VAR11;
if (FUN7(VAR5) ||
FUN7(VAR5->VAR12[0].VAR13.VAR10)) {
VAR11:
FUN8();
FUN9(&VAR5->VAR14);
} else {
FUN10(VAR15) = 1;
FUN11(&VAR5->VAR14, VAR16);
}
return 0;
}