int FUN1(void VAR1 *VAR2,
struct VAR3 *VAR4, u32 VAR5, u32 VAR6)
{
u32 VAR7 = FUN2(VAR2 + FUN3(VAR5));
u32 VAR8 = FUN2(VAR2 + FUN4(VAR5));
int VAR9 = 0;

if (VAR6 == VAR10)
VAR7 &= VAR11;
else if (VAR6 == VAR12)
VAR7 &= VAR13;


if (FUN5(VAR7 & VAR14)) {
if (FUN5(VAR7 & VAR15))
VAR4->VAR16++;
if (FUN5(VAR7 & VAR17))
VAR4->VAR18++;
if (FUN5(VAR7 & VAR19))
VAR4->VAR20++;
if (FUN5(VAR7 & VAR21))
VAR4->VAR22++;
if (FUN5(VAR7 & VAR23)) {
VAR4->VAR24++;
VAR9 = VAR25;
}
if (FUN5(VAR7 & VAR26)) {
VAR4->VAR27++;
VAR9 = VAR25;
}
}

if (FUN6(VAR7 & VAR28))
VAR4->VAR29++;
if (FUN6(VAR7 & VAR30)) {
VAR4->VAR31++;
VAR4->VAR32[VAR5].VAR31++;
VAR9 |= VAR33;
}
if (FUN6(VAR7 & VAR34)) {
VAR4->VAR35++;
VAR4->VAR36[VAR5].VAR35++;
VAR9 |= VAR37;
}
if (FUN5(VAR7 & VAR38))
VAR9 |= VAR37;
if (FUN5(VAR7 & VAR39))
VAR4->VAR40++;

FUN7(VAR7 & VAR8, VAR2 + FUN3(VAR5));
return VAR9;
}