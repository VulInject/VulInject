void FUN1(int VAR1, VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5,
VAR2 *VAR6, const VAR2 *VAR7,
const VAR2 *VAR8)
{
uint8x16_t VAR9 = FUN2(VAR7);
uint8x16_t VAR10 = FUN2(VAR7 + 16);
uint8x16_t VAR11 = FUN2(VAR8);
uint8x16_t VAR12 = FUN2(VAR8 + 16);
uint8x16_t VAR13 = FUN3(0x0f);



while (VAR1) {
uint8x16_t VAR14, VAR15, VAR16, VAR17, VAR18;

VAR16 = FUN4(FUN2(VAR3), FUN2(VAR5));
VAR14 = FUN4(FUN2(VAR4), FUN2(VAR6));

VAR15 = FUN5(VAR14, 4);
VAR14 = FUN6(VAR11, FUN7(VAR14, VAR13));
VAR15 = FUN6(VAR12, VAR15);
VAR17 = FUN4(VAR14, VAR15);

VAR15 = FUN5(VAR16, 4);
VAR14 = FUN6(VAR9, FUN7(VAR16, VAR13));
VAR15 = FUN6(VAR10, VAR15);
VAR14 = FUN4(VAR14, VAR15);
VAR18 = FUN4(VAR14, VAR17);

FUN8(VAR6, VAR18);
FUN8(VAR5, FUN4(VAR18, VAR16));

VAR1 -= 16;
VAR3 += 16;
VAR4 += 16;
VAR5 += 16;
VAR6 += 16;
}
}