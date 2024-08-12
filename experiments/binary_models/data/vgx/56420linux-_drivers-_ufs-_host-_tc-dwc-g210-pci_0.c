static int
FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
void VAR7 *VAR8;
int VAR9;


if (VAR10 == VAR11) {
VAR12.VAR13 =
VAR14;
} else if (VAR10 == VAR15) {
VAR12.VAR13 =
VAR16;
} else {
FUN2(&VAR2->VAR17, "");
return -VAR18;
}

VAR9 = FUN3(VAR2);
if (VAR9) {
FUN2(&VAR2->VAR17, "");
return VAR9;
}

FUN4(VAR2);

VAR9 = FUN5(VAR2, 1 << 0, VAR19);
if (VAR9 < 0) {
FUN2(&VAR2->VAR17, "");
return VAR9;
}

VAR8 = FUN6(VAR2)[0];

VAR9 = FUN7(&VAR2->VAR17, &VAR6);
if (VAR9) {
FUN2(&VAR2->VAR17, "");
return VAR9;
}

VAR6->VAR20 = &VAR12;

VAR9 = FUN8(VAR6, VAR8, VAR2->VAR21);
if (VAR9) {
FUN2(&VAR2->VAR17, "");
return VAR9;
}

FUN9(&VAR2->VAR17);
FUN10(&VAR2->VAR17);

return 0;
}