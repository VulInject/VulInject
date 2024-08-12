static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
struct VAR9 *VAR10 = FUN3(VAR8);
int VAR11 = 0;
const char *VAR12;
struct resource VAR13;

if (VAR10->VAR14 == VAR15)
VAR6->VAR16.VAR17 = VAR18;
else
return 0;

if (FUN4(VAR4, 1, &VAR13)) {
FUN5(FUN6(VAR2->VAR19), "",
VAR4);
return -VAR20;
}

VAR6->VAR16.VAR21 = FUN7(FUN6(VAR2->VAR19),
&VAR13);
if (FUN8(VAR6->VAR16.VAR21))
return FUN9(VAR6->VAR16.VAR21);

VAR11 = FUN10(VAR4, "", &VAR12);
if (VAR11) {
FUN5(FUN6(VAR2->VAR19), "");
return VAR11;
}
if (!strcmp(VAR12, "")) {
VAR6->VAR16.VAR22 = VAR23;
} else if (!strcmp(VAR12, "")) {
VAR6->VAR16.VAR22 = VAR24;
} else {
FUN5(FUN6(VAR2->VAR19), "",
VAR12);
return -VAR20;
}

return VAR11;
}