static int FUN1(struct VAR1 *VAR2, int VAR3,
int VAR4, bool VAR5)
{
int VAR6, VAR7;
unsigned int VAR8, VAR9;

struct VAR10 *VAR11 = FUN2(VAR2);
int VAR12 = FUN3(VAR2);

if (VAR3 != 0 && VAR3 != VAR11->VAR3)
VAR11->VAR3 = VAR3;

if (VAR4 != VAR13)
return -VAR14;

if (VAR5) {


VAR8 =
FUN4(FUN5(VAR11->VAR15, VAR11->VAR3),
1000000);


VAR8 = FUN4(FUN5(VAR8, 120), 100);


VAR9 = VAR8 * (VAR16 / 100);

if (VAR9 > VAR11->VAR17) {
FUN6(&VAR2->VAR18, "");
return -VAR14;
}

VAR6 = FUN4(FUN5(0xFF, VAR9), VAR11->VAR17);
} else

VAR6 = 0xFF;

VAR7 = FUN7(VAR12);

return FUN8(VAR2->VAR19, VAR7, VAR6);
}