static int  FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
int VAR7;

if (VAR8 == VAR9) {
FUN2(&VAR2->VAR10, "");
return -VAR11;
}

VAR7 = FUN3(VAR2);
if (VAR7 < 0) {
FUN2(&VAR2->VAR10, "");
return VAR7;
}

VAR7 = FUN4(&VAR2->VAR10, &VAR6);
if (VAR7) {
FUN5(VAR2);
return VAR7;
}

FUN6(VAR2, VAR6);
VAR8 = VAR12;

if (VAR2->VAR13 == VAR14) {

VAR6->VAR15 = FUN7(
VAR16, 2, 0);

if (VAR6->VAR15 && VAR2->VAR17) {
VAR7 = FUN8(VAR2);
if (!VAR7) {
VAR7 = FUN9(VAR2->VAR17, NULL,
VAR18,
VAR19, "",
VAR2);
if (VAR7) {
FUN10(
VAR6->VAR15);
FUN11(VAR2);
VAR6->VAR15 = NULL;
}
}
} else
FUN2(&VAR2->VAR10, "");
}

return 0;
}