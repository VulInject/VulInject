static int FUN1(struct VAR1 *VAR1, void *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8 = FUN2(VAR2);
struct v4l2_rect VAR9;
struct VAR10 *VAR11 = VAR8->VAR12->VAR11;
int VAR13;
bool VAR14 = false;

if (VAR4->VAR15 == VAR16) {
if (VAR4->VAR17 == VAR18)
VAR14 = true;
} else if (VAR4->VAR15 == VAR19) {
if (VAR4->VAR17 == VAR20)
VAR14 = true;
}
if (!VAR14) {
FUN3(1, "", VAR8->VAR21, VAR4->VAR15,
VAR4->VAR17);
return -VAR22;
}

VAR9 = VAR4->VAR23;
VAR13 = FUN4(VAR8, VAR4->VAR15, &VAR9);
if (VAR13)
return VAR13;

if (FUN5(VAR4->VAR17))
VAR6 = &VAR8->VAR24;
else
VAR6 = &VAR8->VAR25;


if (FUN6(VAR8, VAR26 | VAR27)) {
if (FUN7(VAR4->VAR15)) {
VAR13 = FUN8(VAR11, VAR9.VAR28,
VAR9.VAR29, VAR8->VAR25.VAR30.VAR28,
VAR8->VAR25.VAR30.VAR29,
VAR8->VAR31.VAR32->VAR33);
} else {
VAR13 = FUN8(VAR11,
VAR8->VAR24.VAR30.VAR28,
VAR8->VAR24.VAR30.VAR29, VAR9.VAR28,
VAR9.VAR29, VAR8->VAR31.VAR32->VAR33);
}

if (VAR13) {
FUN9(&VAR8->VAR12->VAR34->VAR35,
"");
return -VAR22;
}
}

VAR4->VAR23 = VAR9;
VAR6->VAR30 = VAR9;

return 0;
}