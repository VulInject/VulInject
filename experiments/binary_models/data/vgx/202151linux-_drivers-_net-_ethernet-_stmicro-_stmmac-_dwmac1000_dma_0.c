static void FUN1(void VAR1 *VAR2, int VAR3,
u32 VAR4, int VAR5, u8 VAR6)
{
u32 VAR7 = FUN2(VAR2 + VAR8);

if (VAR3 == VAR9) {
FUN3("");
VAR7 |= VAR10;
} else {
FUN3("", VAR3);
VAR7 &= ~VAR10;
VAR7 &= VAR11;
if (VAR3 <= 32)
VAR7 |= VAR12;
else if (VAR3 <= 64)
VAR7 |= VAR13;
else if (VAR3 <= 96)
VAR7 |= VAR14;
else
VAR7 |= VAR15;
}


VAR7 = FUN4(VAR7, VAR5);

FUN5(VAR7, VAR2 + VAR8);
}