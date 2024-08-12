static int FUN1(struct VAR1 *VAR2, char *VAR3)
{
struct VAR4 *VAR5;
int VAR6 = 0;

FUN2(&VAR2->VAR7);
if (VAR2->VAR8) {
VAR6 = -VAR9;
FUN3("");
goto VAR10;
}

VAR5 = FUN4(sizeof(*VAR5), VAR11);
if (!VAR5) {
VAR6 = -VAR12;
goto VAR10;
}

VAR5->VAR13 = FUN5(&VAR2->VAR14,
VAR15,
sizeof(struct VAR16),
VAR17, VAR3,
VAR5, VAR18);
if (FUN6(VAR5->VAR13)) {
FUN3(VAR19, VAR3);
VAR6 = FUN7(VAR5->VAR13);
FUN8(VAR5);
}

VAR10:
FUN9(&VAR2->VAR7);
return VAR6;
}