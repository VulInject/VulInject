static int
FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
struct VAR4 *VAR5, u8 VAR6)
{
const struct VAR7 *VAR8 = FUN2(VAR5) + VAR6;
int VAR9;

if (VAR8->VAR10 != VAR11 &&
VAR8->VAR10 != VAR12 &&
VAR8->VAR10 != VAR13 &&
VAR8->VAR10 != VAR14) {
FUN3(VAR5, "", VAR8->VAR10);
return -VAR15;
}

if (VAR8->VAR10 == VAR12) {
VAR9 = FUN4(VAR1, VAR3, VAR8, VAR5);
if (VAR9)
return VAR9;
}

if (VAR8->VAR10 == VAR13) {
if (FUN5(VAR3)) {
VAR9 = FUN6(VAR5, VAR3, VAR8,
VAR16);
if (VAR9)
return VAR9;
}
if (FUN7(VAR3)) {
FUN3(VAR5, "");
return -VAR17;
}
if (FUN8(VAR3)) {
VAR9 = FUN6(VAR5, VAR3, VAR8,
VAR18);
if (VAR9)
return VAR9;
}
}

if (VAR3->VAR19.VAR10 != VAR20 && VAR3->VAR19.VAR10 != VAR8->VAR10) {
FUN3(VAR5, "",
VAR3->VAR19.VAR10, VAR8->VAR10);
return -VAR15;
}

VAR3->VAR19 = *VAR8;

return 0;
}