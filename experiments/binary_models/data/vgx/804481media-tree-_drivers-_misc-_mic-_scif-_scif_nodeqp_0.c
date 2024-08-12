int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
int VAR8 = -VAR9, VAR10 = 0;

FUN2(VAR2, VAR4, "");
if (!VAR6) {
VAR8 = -VAR11;
goto VAR12;
}
FUN3(&VAR6->VAR13);

while ((VAR8 = FUN4(&VAR6->VAR14,
VAR4, sizeof(struct VAR3)))) {
FUN5(1);
if (VAR10++ > (VAR15)) {
VAR8 = -VAR16;
break;
}
}
if (!VAR8)
FUN6(&VAR6->VAR14);
FUN7(&VAR6->VAR13);
if (!VAR8) {
if (FUN8(VAR2))

FUN9(VAR2->VAR17, &VAR2->VAR18);
else
FUN10(VAR2);
}
VAR12:
if (VAR8)
FUN11(&VAR2->VAR19->VAR20,
"",
VAR21, VAR22, VAR8, VAR4->VAR23);
return VAR8;
}