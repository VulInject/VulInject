static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
struct VAR8 *VAR9 = VAR6->VAR9;
struct VAR10 *VAR11 = VAR6->VAR11;
struct VAR12 *VAR13 = FUN2(VAR11);
int VAR14, VAR15;
int VAR16;

VAR14 = FUN3(VAR6->VAR17);
if (VAR14 == VAR18)
VAR15 = VAR13->VAR19;
else if (VAR14 == VAR20)
VAR15 = 32768;
else
return -VAR21;


VAR16 = FUN4(VAR9, VAR14, VAR15,
VAR22);
if (VAR16) {
FUN5(VAR23 "");
return VAR16;
}
return VAR16;
}